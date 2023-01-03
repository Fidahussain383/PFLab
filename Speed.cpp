#include<iostream>
using namespace std;
main()
{
     while(true)
     {
     int speed;
     cout<<"Enter your speed: ";
     cin>>speed;
     if(speed>100)
     {
        cout<<"YOU HAVE BEEN CHALLENGED "<<endl;
     }
     if(speed<=100)
     {
        cout<<"Perfect! You'r going good "<<endl;
     }
     } 
}