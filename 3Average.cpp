/*
Write a program that calculates the average of three decimal numbers entered from
the keyboard.
*/

#include <iostream>

using namespace std;

int main()
{
    float arr[3];
    float ave = 0;
    
    cout << "Input 3 numbers, average will be given" << endl;
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    
    ave = (arr[0] + arr[1] + arr[2]) / 3;
    
    cout << "The average is: " << ave << endl;
    return 0;
}
