#include<iostream>
using namespace std;
string calculateCost(float budget, string category, int numberOfPeople);

int main()
{
      float budget;
      string category;
      int numberOfPeople;
      cout << "Enter the budget: ";
      cin >> budget;
      cout << "Enter the category (VIP/Normal): ";
      cin >> category;
      cout << "Enter the number of people in the group: ";
      cin >> numberOfPeople;
      cout << calculateCost(budget, category, numberOfPeople);
}
string calculateCost(float budget, string category, int numberOfPeople)
{
     float ticketPrice;
     float finalPrice;
     string answer;
     if(numberOfPeople >= 1 && numberOfPeople <= 4)
        {
            budget = budget-(budget*0.75);
        }  
     else if(numberOfPeople >= 5 && numberOfPeople <= 9)
        {
            budget = budget-(budget*0.60);
        }
     else if(numberOfPeople >= 10 && numberOfPeople <= 24)
        {
            budget = budget-(budget*0.50);
        }       
     else if(numberOfPeople >= 25 && numberOfPeople <= 49)
        {
            budget = budget-(budget*0.40);
        }       
     else if(numberOfPeople >= 50)
        {
            budget = budget-(budget*0.25);
        }       
     if (category == "VIP")
        {
            ticketPrice = 499.99*numberOfPeople;
        }      
     else{
            ticketPrice = 249.99*numberOfPeople;
        }      
           finalPrice = (budget - ticketPrice)+0.000005;       
     if(finalPrice > 0.0)
        {
            answer= "Yes! You have " + to_string (finalPrice) + " leva left.";
            return answer;
        }
     else
        {
            answer= "Not enough money! You need " + to_string(finalPrice) + " leva.";
            return answer;
        }
           
}