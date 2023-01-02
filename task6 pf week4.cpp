#include <iostream>
using namespace std;
void isEven(int numb);
main()
{
    int numb;
    cout<<"enter number";
    cin>>numb;
    isEven(numb);




}
  void isEven(int numb)
{ 
  if(numb%2==0)
  {
  cout<<"number is even";
  }
  {
  if(numb%2!=0)
  cout<<"number is odd";
  }
} 
