//Program to convert seconds into days,hours,minutes

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    //declaring constants
    
    const int CONVERTED_DAYS = 86400;
    const int CONVERTED_HOURS = 3600;
    const int CONVERTED_MINUTES = 60;
    
    //initializing variables
    
    long int givensec;
    int days;
    int hours;
    int minutes;
    int seconds;
    
    //gathering inputs
    
    cout << "Enter a time in seconds: " << endl;
    cin >> givensec;
    
    //if 0 testcase
    
    if (givensec <= 0)
    {
        cout << "Error! The seconds must be greater than zero.";
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << givensec << " seconds is:" << endl;
    }
    
    //output days converted  
    
    days = givensec / CONVERTED_DAYS;
    if (days == 0)
    {
        givensec = givensec - (days * CONVERTED_DAYS);
    }
    else
    {
        cout << '\t' << days << " days.";
        givensec = givensec - (days * CONVERTED_DAYS);
        cout << endl;
    }
    
    //output hours converted 
    
    hours = givensec / CONVERTED_HOURS;
    if (hours == 0)
    {
        givensec = givensec - (hours * CONVERTED_HOURS);
    }
    else
    {
        cout << '\t' << hours << " hours.";
        givensec = givensec - (hours * CONVERTED_HOURS);
        cout << endl;
    }
    
    //output minutes converted 
    
    minutes = givensec / CONVERTED_MINUTES;
    if (minutes == 0)
    {
        givensec = givensec - (minutes * CONVERTED_MINUTES);
    }
    else
    {
        cout << '\t' << minutes << " minutes.";
        givensec = givensec - (minutes * CONVERTED_MINUTES);
        cout << endl;    
    }
    
    //output seconds converted 
    
    seconds = givensec;
    if (seconds == 0)
    {
        givensec = givensec - (seconds);
    }
    else
    {
        cout << '\t' << seconds << " seconds." << endl;
    }
    return 0;
}
