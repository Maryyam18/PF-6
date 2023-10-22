#include<iostream>
using namespace std;
float lowestPrice(int kilometers, string period, float price);
int main()
{
    int kilometers;
    string period;
    float price;
    cout << "Enter the number of kilometers: ";
    cin >> kilometers;
    cout << "Enter the period of the day: ";
    cin >> period;
    cout << lowestPrice(kilometers, period, price);
    cout << "Lowest price for " <<kilometers <<: Eur";
    return 0;
}
float lowestPrice(int kilometers, string period, float price)
{
if((kilometers < 20 && period = "day")
{
kilometers = kilometers*0.79;
kilometers = kilometers+0.70;
}

else if(kilometers < 20 && period = "night")
{
kilometers = kilometers*0.90;
kilometers = kilometers+0.70;
}

else if((kilometers >= 20 && period = "day")||(kilometers >= 20 && period = "night"))
{
kilometers = kilometers*0.09;
}

else if((kilometers >= 100 && period = "day")||(kilometers >= 100 && period = "night"))
{
kilometers = kilometers*0.06;
}

return kilometers;
}

    