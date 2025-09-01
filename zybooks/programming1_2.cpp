#include <iostream>
using namespace std; //this is so we dont have to use std::cout for every new line

int oneThree();

int main(){ //starting the function
    int wage; //initilation the variable

    //wage = 20; //assigning a value to the variable// order counts so we have to initialze the variable first then give it a value to hold

    cout << "Enter your wage: "; //good practice to prompt before asking for input
    cin >> wage; //cin means that we're asking the user for input and we use >> because we're asking for input
    cout << "Salary is "; //first output for the program
    cout << wage; //will output the wage
    cout << wage * 40 * 52; //calcute the data. we just put it in here like this
    cout << endl; //adding a new line
    cout << "Enter your wage 2: " << wage << " more stuff and examples" << wage; //this is how it works when putting strings and variables in the same spot. we dont need to specify what kind of code it is so no std or cout and also not semicolon either=
    return 0;
}

int oneThree() {
  int goalsFirst;
  int goalsSecond;

  cout << "Enter 1st half goals: ";
  cin >> goalsFirst;
  cout << "Enter 2nd half goals: ";
  cin >> goalsSecond;
 
  cout << "Your team scored ";
  cout << goalsFirst + goalsSecond;
  cout << " goal(s)." << endl;

  return 0;

}