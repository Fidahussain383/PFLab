#include<iostream>
using namespace std;
void pakTicket(int dollar,float discount);
void irlTicket(int dollar,float discount);
void indTicket(int dollar,float discount);
void engTicket(int dollar,float discount);
void canTicket(int dollar,float discount);

main()
{
	 while(true)
	 {
     string country;
     int price;
     float discount;
     cout<<"Enter your Ticket price: ";
     cin>>price;
     cout<<"Enter your country: ";
     cin>>country;
     if(country=="pakistan")
     pakTicket(price,discount);
     if(country=="ireland")
     irlTicket(price,discount);
     if(country=="india")
     indTicket(price,discount);
     if(country=="england")
     engTicket(price,discount);
     if(country=="canada")
     canTicket(price,discount);
     }
     
     
}
     void pakTicket(int dollar,float discount)
   
     {
        
        discount = dollar*0.95;
        cout<<"Your price is: "<<discount<<endl;
     }
     void irlTicket(int dollar,float discount)
     {
     	discount = dollar*0.9;
        cout<<"Your price is: "<<discount<<endl;
        
     }
     void indTicket(int dollar,float discount)
     {
        
        discount = dollar*0.8;
        cout<<"Your price is: "<<discount<<endl;
     }
     void engTicket(int dollar,float discount)
     {
     	
        
        discount = dollar*0.7;
        cout<<"Your price is: "<<discount<<endl;
     }
     void canTicket(int dollar,float discount)
	 {
     	
        
        discount = dollar*0.55;
        cout<<"Your price is: "<<discount<<endl;
     }
     