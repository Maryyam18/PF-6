#include<iostream>
using namespace std;
bool greaterNumber(int digit1, int digit2);
int main()
{
   int digit1;
int digit2;
cout << "Enter the first number: ";
cin >> digit1;
cout << "Enter the second number: ";
cin >> digit2;
cout << greaterNumber(digit1, digit2);
return 0;
}

bool greaterNumber(int digit1, int digit2)
{
    bool number;
    if(digit1 > digit2){
     number = true;
    }
else{
   number = false; 
}
    return number ;
}