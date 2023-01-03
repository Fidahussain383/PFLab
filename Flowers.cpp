#include<iostream>
using namespace std;
main()
{
      float redRose,whiteRose,tulips;
      float numR,numW,numT;
      float sum,amount;
      while(true)
      {
      cout<<"Enter number of red roses sold: ";
      cin>>numR;
      redRose = numR*2;
      cout<<"Enter number of white roses sold: ";
      cin>>numW;
      whiteRose = numW*4.10;
      cout<<"Enter number of tulips sold: ";
      cin>>numT;
      tulips = numT*2.5;
      sum = redRose+whiteRose+tulips;
      if(sum>200)
      {
        amount = sum*0.8;
        cout<<"Price after discount: "<<amount<<endl;
      }
      cout<<"Original price: "<<sum<<endl;
      }


}
  
     
 
