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
    *  Expansion on Practice1.cc to loop
    */

int main(){

    string status = "yes";

    while(status == "yes"){

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

        cout << "Wish to enter anther number? yes or no" << endl;
        cin >> status;

    }

    return 0;

}