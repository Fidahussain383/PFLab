#include <iostream>
using namespace std;
main() {
string name;
int at_p;
int ct_p;
int at_s;
int ct_s;
int total;
int charity;
float donation;
float after_don;
cout << "Enter movie name:";
cin>>name;
cout <<"enter adult ticket price:";
cin>>at_p;
cout <<"enter child ticket price:";
cin>>ct_p;
cout <<"enter adult ticket sold";
cin>>at_s;
cout <<"enter adult ticket price:";
cin>>ct_s;
cout << "enter donation";
cin>> charity;
total =(at_p*at_s)+(ct_p*ct_s);
donation=total*(charity/100.0);
after_don= total- donation;
cout<<"total amount generated"<<total<<endl;
cout<< "amount after donation" <<after_don;
}





