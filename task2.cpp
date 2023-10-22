#include<iostream>
using namespace std;
bool parityAnalysis(int threeDigitNumber);
int main()
{
    int threeDigitNumber;
    cout << "Enter a 3-digit number: ";
    cin >> threeDigitNumber;
    cout << parityAnalysis(threeDigitNumber);
    return 0;
}
bool parityAnalysis(int threeDigitNumber)
{
    int number1;
    int number2;
    int number3;
    int number4;
    int sum;
    number1 = threeDigitNumber%10;
    number2 = threeDigitNumber/10;
    number3 = number2%10;
    number4 = number2/10;
    sum = number1+number3+number4;
    if(threeDigitNumber%2 == 0)
    {
        if(sum%2 == 0){
        return true;
    }
    }
    if (threeDigitNumber%2 != 0)
    {
        if(sum%2 != 0){
        return true;
    }
    }
    return false;
    

}