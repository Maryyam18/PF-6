#include<iostream>
using namespace std;
float discount(string purchaseDay, string purchaseMonth, float purchaseAmount);
int main()
{
    string purchaseDay;
    string purchaseMonth;
    float purchaseAmount;
    cout << "Enter Purchase Day: ";
    cin >> purchaseDay;
    cout << "Enter Purchase Month: ";
    cin >> purchaseMonth;
    cout << "Enter Purchase Amount: ";
    cin >> purchaseAmount;
    cout << "Payable Amount after discount: ";
    cout << discount(purchaseDay, purchaseMonth, purchaseAmount);
    return 0;
}
float discount(string purchaseDay, string purchaseMonth, float purchaseAmount)
{
    float payableAmount;
    if(purchaseDay == "Sunday" && purchaseMonth == "October")
    {
        payableAmount = purchaseAmount - (purchaseAmount*10)/100;  
    }
    if(purchaseDay == "Sunday" && purchaseMonth != "October")
    {
        payableAmount = purchaseAmount - (purchaseAmount*5)/100;
    }
    if(purchaseDay != "Sunday" && purchaseMonth == "October")
    {
       payableAmount =  purchaseAmount;
    }
    return payableAmount;
}
