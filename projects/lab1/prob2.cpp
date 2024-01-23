/*-------------------------------------------------
| File: prob2
| Author: Spencer Hirsch
| Purpose: Demonstrate I/O from user in C++.
|
| Notes: Program 2 of Lab 1.
|
| Version: 1.0
| Created: Aug 23, 2021
| Last modified: Jan 13, 2021
|-------------------------------------------------*/

// Imported Libraries
#include <iostream>
#include <string>
using namespace std; // This lets you avoid typing std:: in multiple places.
int main()
{
    /* Get Input from the console */
    string yourName;
    string animal;
    cout << "Hello! What is your name?\n";
    cin >> yourName;
    cout << "What is your favorite animal?\n";
    cin >> animal;
    /* Use the input to print the message */
    cout << "Great to meet you, " << yourName << "! " << animal << " are awesome!" << endl;
    return 0;
}