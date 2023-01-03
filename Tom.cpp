#include<iostream>
using namespace std;
main()
{
    int holidays,workdays;
    int playTime,diff;
    cout<<"Enter holidays of tom's owner: ";
    cin>>holidays;
    workdays = 365-holidays;
    playTime = (holidays*127)+(workdays*63);
    diff = 30000-playTime;
    if(diff>0)
    {
       cout<<"Tom sleeps well"<<endl;
       cout<<diff<<" minutes less for play"<<endl;
    }
    if(diff<0)
    {
       cout<<"Tom will run away "<<endl;
       cout<<diff<< "minutes to play"<<endl;
    }
    

}


