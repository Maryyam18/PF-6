#include<iostream>
using namespace std;
bool areSameNumber(int number1, int number2, int number3);
int main()
{
    int number1, number2, number3;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;
    cout << areSameNumber(number1, number2, number3);
    return 0;
}
bool areSameNumber(int number1, int number2, int number3)
{    
     bool result;
    if((number1 == number2)&&(number2 == number3)&&(number1 == number3)){
      result = true;
    }
    else{
        result = false;
    }
    return result;
}