#include <iostream>
using namespace std;
void sum(int numb1, int numb2);
void subtract(int numb1,int numb2);


main()
{ 
  while(true)
  {
  int numb1;
  int numb2;
  char operation;
  cout<<"enter first number: ";
  cin>>numb1;
  cout<<"Enter second number: ";
  cin>>numb2;
  cout<<"enter character e.g.+: ";
  cin>>operation;
   if(operation=='+')
   {
   sum(numb1,numb2);
   }
   if(operation=='-')
   {
     subtract(numb1,numb2);
   }
  }
}
  
  void sum(int numb1, int numb2)
{
  
 
  int sum;
  sum=numb1+numb2;  
  cout<<"sum="<<sum<<endl;
}
 void subtract(int numb1,int numb2)
{
 
  int subtract;
  subtract=numb1-numb2;  
  cout<<"subtract="<<subtract<<endl;

}
