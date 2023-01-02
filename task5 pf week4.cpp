#include <iostream>
using namespace std;
void isEligible(int age);
main() 
{
     int age;
     while(true)
    {
      cout<<"enter age:";
      cin>>age;
      isEligible(age);
    }
}
   void isEligible(int age)
{
  if ( age>18)
 {
   cout<<"you are eligible for vote)";
 }
}
