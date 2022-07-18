// Week2SumAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    //Prompt user to enter three numbers
    int num1, num2, num3;
    cout << "Enter first number: \n";
    cin >> num1; 

    cout << "Enter second number: \n";
    cin >> num2;
    
    cout << "Enter third number: \n";
    cin >> num3;
    //Add up the Sum of the three numbers
    int sum = num1 + num2 + num3;
    //Find the average of three numbers.

    float average = sum / 3.0;

    //Return the results.

    cout << "Sum total of numbers is: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;
    
}


