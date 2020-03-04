// CIS108_Lab6_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Fibonacci sequence

#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int number = 0;
    int counter = 1;
    int sum = 1;
    int prev_number = 0;
    int difference = 0;

    cout << "Enter number that you would like Fibonacci sequence to count up to:  ";
    cin >> number;
    difference = number;
    //cout << sum << endl;
    //do
    for (sum = 1; sum <= difference; prev_number=sum)
    //while (prev_number <= number);
    {
        
        sum = counter + prev_number;
        
        counter = prev_number;
        difference = number - counter;
        //prev_number = sum;
        cout << sum << " ";
        //cout << counter << " ";
    } //while (prev_number < number);
      
}