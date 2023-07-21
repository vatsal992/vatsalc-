#include<iostream>
#include<string.h>

using namespace std;
 
int main()
{
    int ts;
    int hour;
    int min;
    int sec;
 
    cout<<"Enter time in seconds: ";
    cin>>ts;
 
    hour = ts/3600;
    ts = ts%3600;
    min = t_s/60;
    ts = ts%60;
    sec = ts;
 
    cout<<"\nThe time in HH:MM:SS format is: "<<hour<<" hours, "<<min<<" minutes, "<<sec<<" seconds. ";
    
    return 0;
}
