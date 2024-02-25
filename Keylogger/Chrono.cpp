#include<iostream>
#include<ctime> 
using namespace std;

/*struct tm{
        int tm_sec;
        int tm_min;
        int tm_hour;
        int tm_mday;
        int tm_mon;
        int tm_year;
        int tm_wday
        int tm_yday;
        int tm_isdst;
}*/

int main()
{
    time_t now = time(0);
    tm* localTime = localtime(&now);
    cout<<localTime->tm_hour;
}
