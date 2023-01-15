#include<iostream>
using namespace std;
string checkWeather(string temperature, string humidity);
main()
{
    string result;
    string temperature;
    string humidity;
    cout<<"Enter temperature=";
    cin>>temperature;
    cout<<"Enter humidity=";
    cin>>humidity;
    result=checkWeather(temperature,humidity);
    cout<<"activity="<<result<<endl;
}
 string checkWeather(string temperature, string humidity)
 {
    string result2;
    if(temperature=="warm" && humidity=="dry")
    {
      result2="Play tennis";
    }
    if(temperature=="warm" && humidity=="humid")
    {
      result2="Swim";
    }
    if(temperature=="cold" && humidity=="dry")
    {
      result2="Play basketball";
    }
    if(temperature=="cold" && humidity=="humid")
    {
      result2="Watch Tv";
    }
    return result2;
 }