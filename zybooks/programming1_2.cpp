#include <iostream>
using namespace std; //this is so we dont have to use std::cout for every new line

int main(){ //starting the function
    int wage; //initilation the variable

    //wage = 20; //assigning a value to the variable// order counts so we have to initialze the variable first then give it a value to hold

    cout << "Enter your wage: "; //good practice to prompt before asking for input
    cin >> wage; //cin means that we're asking the user for input
    cout << "Salary is "; //first output for the program
    cout << wage * 40 * 52; //calcute the data
    cout << endl; //adding a new line
    return 0;
}