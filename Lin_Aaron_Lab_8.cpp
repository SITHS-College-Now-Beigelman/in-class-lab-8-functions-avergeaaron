// Aaron Lin
// 11/04/2024
// Lab 8

#include <iostream>     // Include for input and output operations
#include <cmath>        // Include for mathematical functions
#include <cctype>       // Include for character handling functions

using namespace std;

//Part 2
int doubleMultiply(int a, int b) //declares the function for two integer variable
{
    int product; //creates integeral variable called product
    product = a * b * 2; //multiply a and b then times 2
    return product; //returns the value as the variable product
}

double getSum(double x, double y, double z) //declares the function for 3 floating point variable
{
    double total; //creates floating point variable called total
    total = x + y + z; //total = x + y + z
    return total; // returns the value as the variable total
}


int main() 
{
    //Part 1
    double num; //floating point variable

    cout << "Type one number: \n-> "; //ask user to enter 1 number
    cin >> num; //user input number

    cout << "The square root of " << num << " is " << sqrt(num) << endl; //states the sqaure root of the number
    cout << num << " to the power of 4 is " << pow(num, 4) << endl; //states the number to the 4th power
    cout << "The floor of " << num << " is " << floor(num) << endl; //states the number rounded to the greatest whole number that is not greater than the number itself

    /*
    Type 1 number: 
    -> 23.5
    The square root of 23.5 is 4.84768
    23.5 to the power of 4 is 304980
    The floor of 23.5 is 23
    */

    //Part 2
    int num1, num2; //integer variables
    cout << "Enter two integer: "; //ask the user to enter 2 integers
    cin >> num1 >> num2; //user input integers
    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl; //states 2 times the prodcut of the two integers 

    /*
    Enter two integer: 23 5
    Twice the product of the numbers is: 230
    */

    //Part 3
    double num3, num4, num5; //floating point variables
    cout << "Enter three numbers: \n-> "; //ask the user to enter 3 numbers
    cin >> num3 >> num4 >> num5; //user input numbers
    cout << "The sum of all these number is " << getSum(num3, num4, num5) << endl; //states the sum of the 3 numbers

    /*
    Enter three numbers: 
    -> 345.4 6.8 -86
    The sum of all these number is 266.2
    */

    return 0; //ends the code
}

