# convertSec
General Description:
Write a C++ program with a source file named ConvSecs.cpp that asks the user to enter a number of seconds and converts the seconds to days, hours, minutes, and remaining seconds.

Your program will make use of long long int variables for all calculations.

Your program should not accept seconds of zero or below. Display an error message telling the user that the seconds must be greater than zero should they violate this rule.

Only display the leading label when the value of days, hours, minutes, or seconds is more than zero.

Sample Output 1:
```
Enter a time in seconds: 369204

369204 seconds is:
    4 days.
    6 hours.
    33 minutes.
    24 seconds.
```
Sample Output 2:
```
Enter a time in seconds: 68459

68459 seconds is:
    19 hours.
    59 seconds.
Sample Output 3:

Enter a time in seconds: 0

Error! The seconds must be greater than zero.
```
Your output must match the output above.
