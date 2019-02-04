/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
*
*          Name: Samantha Sanders
*         Topic: Practice
*  Instructions: Conditional Statement Pracitce
*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

    /* 
    * Given a positive integer denoting n:
    * If 1<=n<=9, then print lowercase word
    * If n>9, print greater than 9
    */

int main(){

    int n;

    // Prompt user input
    cout << "Enter an integer: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string num[10] = {"Number greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n > 9){
        cout << "You entered: " << num[0] << endl;
    }
    else{
        cout << num[n] << endl;
    }

    return 0;

}