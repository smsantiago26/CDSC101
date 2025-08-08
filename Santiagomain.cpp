#include <iostream> //input output world
using namespace std;// for cout and cin

int main()
{

    int num1, num2, sum, difference, product, quotient, modulo; // declare variables
    cout << "Enter a number: ";
    cin >> num1; // storing first user input number into variable
    cout << "Enter another number: ";
    cin >> num2; // storing second user input number into another variable
    sum = num1 + num2; // adding values of variables
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    modulo = num1 % num2;
    cout << endl << "Your sum is: " << sum << endl; // outputting value of variable sum
    cout << "Your difference is: " << difference << endl;
    cout << "Your product is: " << product << endl;
    cout << "Your quotient is: " << quotient << endl;
    cout << "Your remainder is: " << modulo << endl;
    
    return 0;
}
