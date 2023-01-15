#include<iostream>
using namespace std;
string checkResult(float totalmarks, float percentage);
main()
{
    string result;
    float totalmarks;
    float percentage;
    string name;
    cout<<"Enter name=";
    cin>>name;
    result=checkResult(totalmarks,percentage);
    cout<<"total result="<<result<<endl;

   
}
 string checkResult(float totalmarks, float percentage)
 {
    
    
    float subject1Marks;
    float subject2Marks;
    float subject3Marks;
    float subject4Marks;
    float subject5Marks;
    float obtain;
    string grade;
    
    cout<<"Enter marks=";
    cin>>subject1Marks;
    cout<<"Enter marks=";
    cin>>subject2Marks;
    cout<<"Enter marks=";
    cin>>subject3Marks;
    cout<<"Enter marks=";
    cin>>subject4Marks;
    cout<<"Enter marks=";
    cin>>subject5Marks;
    obtain=(subject1Marks+subject2Marks+subject3Marks+subject4Marks+subject5Marks);
    percentage=(obtain/500)*100;
    if(percentage<40)
    {
        grade="F";
    }
    if(percentage>40 || percentage<50)
    {
        grade="D";
    }
    
     if(percentage>50 || percentage<60)
    {
        grade="C";
    }
     if(percentage>60 || percentage<70)
    {
        grade="B";
    }
     if(percentage>70 || percentage<80)
    {
        grade="B+";
    }
     if(percentage>80 || percentage<90)
    {
        grade="A";
    }
     if(percentage>90 || percentage<100)
    {
        grade="A+";
    }
    return grade;
 }
   