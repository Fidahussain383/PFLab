#include <iostream>
using namespace std;
main() {
float vege_p_kilo;
float fru_p_kilo;
int tot_kilo_veg;
int tot_kilo_fru;
float total_coins;
float total_rupees;
cout<< "Enter vegetable per kilogram =";
cin>>vege_p_kilo;
cout<< "Enter fruit per kilogram =";
cin>>fru_p_kilo;
cout<<"total kilogram of vegetables =";
cin>>tot_kilo_veg;
cout<<"total kilogram of fruits=";
cin>>tot_kilo_fru;
total_coins= (vege_p_kilo* tot_kilo_veg) + (fru_p_kilo*tot_kilo_fru);
total_rupees= total_coins*0.5194;
cout<<"total_rupees=" <<total_rupees;
}



