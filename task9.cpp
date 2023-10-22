#include<iostream>
using namespace std;
string checkTitle(float age, char gender, string title);
int main()
{
float age;
char gender;
string title;
cout << "Enter your age: ";
cin >> age;
cout << "Enter your gender (m/f): ";
cin >> gender;
 cout << "Your personal title is: ";
 cout << checkTitle(age, gender, title);
 return 0;
}
string checkTitle(float age, char gender, string title)
{ 
if (gender == 'f' && age >= 16){
  title = "Ms.";
}else if(gender == 'f' && age < 16){
  title = "Miss";
}
else if(gender == 'm' && age < 16){
  title = "Master";
}
else if(gender == 'm' && age >= 16){
  title = "Mr.";
}
return title;
}