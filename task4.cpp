#include<iostream>
using namespace std;
int findGreatest(int number1, int number2, int number3);
int main()
{
    int number1, number2, number3;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;
    cout << "The greatest number among "<<number1<< ", " <<number2<< ", and "<<number3 <<" is: ";
    cout << findGreatest(number1, number2, number3);
    return 0;
}
int findGreatest(int number1, int number2, int number3)
{    
    int result; 
    if(number1>=number2 && number1>=3){
        result = number1;
    }
    if(number2>=number1 && number2>=number3){
        result = number2;
    }
    if(number3>=number1 && number3>=number2){
        result = number3;
    }
    return result;

}

