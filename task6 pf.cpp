#include <iostream>
using namespace std;
main() {
int megaByte;
int kiloByte;
int bytes;
int bits;
cout<<"Enter input in megaByte: ";
cin>>megaByte;
kiloByte = megaByte*1024;
bytes = 1024*kiloByte;
bits = 8*bytes;
cout<<"Your output in bits is "<<bits;
}