#include<iostream>
using namespace std;
float totalIncome(string type, int rows, int columns, float answer);
int main()
{
    string type; 
    float answer;
    int rows, columns;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << totalIncome(type, rows, columns, answer);
    return 0;
}
float totalIncome(string type, int rows, int columns, float answer)
{
    if(type == "Premiere")
    {
        answer = rows*columns*12.00;
    }
    else if(type == "Normal"){
        answer = rows*columns*7.50;
    }
    else if(type == "Discount"){
        answer = rows*columns*(5.00);
    }
    return answer;
}
