#include<iostream>
#include<windows.h>
void gotoxy(int x,int y);
using namespace std;

  void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
  int main()
{
  system("cls");
gotoxy(5,3);
cout<<"      :::::::::: "<<endl;
gotoxy(5,4);
cout<<"      ::           "<<endl;
gotoxy(5,5);
cout<<"      :::::::::: "<<endl;
gotoxy(5,6);
cout<<"      ::           "<<endl;
gotoxy(5,7);
cout<<"      ::           "<<endl;
gotoxy(5,8);
cout<<"      ::           "<<endl;
gotoxy(5,9);
cout<<"      ::           "<<endl<<endl;


gotoxy(5,12);
cout<<"      ::  "<<endl;
gotoxy(5,13);
cout<<"      ::  "<<endl;
gotoxy(5,14);
cout<<"      ::  "<<endl;
gotoxy(5,15);
cout<<"      ::  "<<endl;
gotoxy(5,16);
cout<<"      ::  "<<endl;
gotoxy(5,17);
cout<<"      ::  "<<endl;
gotoxy(5,18);
cout<<"      ::  "<<endl;
gotoxy(5,21);
cout<<"      :::::::%%%%%%: "<<endl;
gotoxy(5,22); 
cout<<"      ::            %::"<<endl;
gotoxy(5,23);        
cout<<"      ::            %::"<<endl;
gotoxy(5,24); 
cout<<"      ::            %::"<<endl;
gotoxy(5,25); 
cout<<"      ::            %::"<<endl;
gotoxy(5,26); 
cout<<"      ::            %::"<<endl;
gotoxy(5,27); 
cout<<"      ::            %::"<<endl;
gotoxy(5,28); 
cout<<"      ::            ::"<<endl; 
gotoxy(5,29);
cout<<"      :::::::::::%%%"<<endl;
gotoxy(5,31); 
cout<<"      ::::::::::  "<<endl;
gotoxy(5,32);
cout<<"      :        : "<<endl;
gotoxy(5,33); 
cout<<"      :        : "<<endl; 
gotoxy(5,34);
cout<<"      :        : "<<endl;
gotoxy(5,35); 
cout<<"      :::::::::: "<<endl;
gotoxy(5,36);         
cout<<"      :        : "<<endl;
gotoxy(5,37); 
cout<<"      :        : "<<endl; 
gotoxy(5,38);
cout<<"      :        : "<<endl; 
gotoxy(5,39);
cout<<"      :        : "<<endl;
 
}


