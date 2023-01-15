#include<iostream>
using namespace std;
string sign(int date,int month);

main()
{
    string output;
    int date;
    cout<<"Enter date=";
    cin>>date;

    int month;
    cout<<"Enter month=";
    cin>>month;
    output=sign(date,month);
    cout<<"Output sign="<<output<<endl;
}
  string sign(int date,int month)
  {
    string sign2;
    if((month==3 && date>=21) || ( month==4 && date<=19))
    {
       
        
     sign2="Aries";
        
    }
     if((month==4 && date>=20) || ( month==5 && date<=20))
    {
       
        
     sign2="Taurus";
        
    }
     if((month==5 && date>=21) || ( month==6 && date<=20))
    {
       
        
     sign2="Gemini";
        
    }
     if((month==6 && date>=21) || ( month==7 && date<=22))
    {
       
        
     sign2="Cancer";
        
    }
     if((month==7 && date>=23) || ( month==8 && date<=22))
    {
       
        
     sign2="Leo";
        
    }
     if((month==8 && date>=23) || ( month==9 && date<=22))
    {
       
        
     sign2="Virgo";
        
    }
     if((month==9 && date>=23) || ( month==10 && date<=22))
    {
       
        
     sign2="Libra";
        
    }
     if((month==10 && date>=23) || ( month==11 && date<=21))
    {
       
        
     sign2="Scorpio";
        
    }
     if((month==11 && date>=22) || ( month==12 && date<=21))
    {
       
        
     sign2="Sagittarius";
        
    }
     if((month==12 && date>=22) || ( month==1 && date<=19))
    {
       
        
     sign2="Capricon";
        
    }
     if((month==1 && date>=20) || ( month==2 && date<=18))
    {
       
        
     sign2="Aquarius";
        
    }
     if((month==2 && date>=19) || ( month==3 && date<=20))
    {
       
        
     sign2="Pisces";
        
    }
    return sign2;
}
  