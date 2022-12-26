#include <iostream>
using namespace std;
main(){

float matric;
float ecat;
float intermediate;
cout<<"enter matric";
cin>>matric;
cout<<"enter ecat";
cin>>ecat;
cout<<"enter intermediate";
cin>>intermediate;
float matricPerc;
float intermediatePerc;
float ecatPerc;
matricPerc=(matric/1100)*100;
intermediatePerc=(intermediate/520)*100;
ecatPerc=(ecat/400)*100;
float ecatWei;
float matricWei;
float interWei;
ecatWei =ecatPerc*0.5;
interWei = intermediatePerc*0.4;
matricWei =  matricPerc*0.1;

float aggregate;
aggregate=ecatWei+interWei+matricWei;
cout<<"your aggregate is"<<aggregate;
}