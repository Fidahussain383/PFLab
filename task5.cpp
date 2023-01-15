#include<iostream>
using namespace std;
float checkFruit(string fruit,string day,int quantity);
main()
{
    string fruit;
    string day;
    int quantity;
    float price;
    cout<<"Enter fruit=";
    cin>>fruit;
    cout<<"Enter day=";
    cin>>day;
    cout<<"Enter quantity=";
    cin>>quantity;
    price=checkFruit(fruit,day,quantity);
    cout<<"total price="<<price<<endl;

}
 float checkFruit(string fruit,string day,int quantity)
 {
    float price2;
    if(fruit=="banana"&& day!="sunday")
    {
        price2=quantity*2.50;
    }
    if(fruit=="apple" && day!="sunday")
    {
        price2=quantity*1.20;
    }
      if(fruit=="orange" && day!="sunday")
    {
        price2=quantity*0.85;
    }
     if(fruit=="grapefruit" && day!="sunday")
    {
        price2=quantity*1.45;
    }
     if(fruit=="kiwi" && day!="sunday")
    {
        price2=quantity*2.70;
    }
     if(fruit=="pineapple" && day!="sunday")
    {
        price2=quantity*5.50;
    }
     if(fruit=="grapes" && day!="sunday")
    {
        price2=quantity*3.85;
    }
     if(fruit=="banana"&& day=="sunday")
    {
        price2=quantity*2.70;
    }
       if(fruit=="apple"&& day=="sunday")
    {
        price2=quantity*1.25;
    }
      if(fruit=="orange"&& day=="sunday")
    {
        price2=quantity*0.90;
    }
       if(fruit=="grapefruit"&& day=="sunday")
    {
        price2=quantity*1.60;
    }
      if(fruit=="kiwi"&& day=="sunday")
    {
        price2=quantity*3.00;
    }
      if(fruit=="pineapple"&& day=="sunday")
    {
        price2=quantity*5.60;
    }
       if(fruit=="grapes"&& day=="sunday")
    {
        price2=quantity*4.20;
    }
    return price2;
 }