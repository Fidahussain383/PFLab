#include <iostream>
using namespace std;
main () {
float pound;
float cost;
float area;
float cost_1;
float cost_2;
cout<<"enter bag size in pounds";
cin>>pound;
cout<<"enter cost of the bag";
cin>>cost;
cout<<"enter area covered by each bag in square feet";
cin>>area;
cost_1=cost/pound;
cost_2=cost/area;
cout<<"cost_1is"<<cost_1<<endl;
cout<<"cost_2 is"<<cost_2;
}
