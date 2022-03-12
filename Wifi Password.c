#include<stdio.h>
int main()
{
    system("netsh wlan show profile");
    system("netsh wlan export profile folder=e:\wifi\ key=clear");
}
