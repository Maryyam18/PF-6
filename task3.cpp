#include<iostream>
using namespace std;
float perimeter(char name, float number);
int main()
{
    char name;
    float number;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> name;
    cout << "Enter the value: ";
    cin >> number;
    perimeter(name, number);
    cout << "The perimeter is: ";
    cout << perimeter(name, number);
    return 0;

}

float perimeter(char name, float number)
{   float calculation, result;
    if(name == 's'){
        calculation = number*4;
    }
    if(name == 'c'){
        calculation = number*6.28;
    }
    if(name == 't')
    {
        calculation = number*3;
    }
    if(name == 'h')
    {
        calculation = number*6;
    }
    return calculation;

}