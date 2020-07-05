#include <bits/stdc++.h>
using namespace std ;
class student 
{
 public:
  int *arr=new int[5];
  char name[20];
  int roll_number;
  char div;
  int cgpa;
 student()//default constructor
 {
    name[10]='tejas';
    roll_number=51;
    div='R';
    cgpa=-1; //means don't know
 }
 void marks()
 {
     cout<<"enter the marks of five subjects : "<<endl;
     int k=0;
    for(int i=0;i<5;i++)
  {  cin>>arr[i];
    k+=arr[i];
 }
     cout<<k<<endl;
     delete arr;
 }
void showdetails()

{
    cout<<"enter your name :";
    cin>>name;
    cout<<"Enter your division : "<<endl;
    cin>>div;
     cout<<"Enter your Roll number : "<<endl;
    cin>>roll_number;
    cout<< "student details are :" <<endl;
    cout<<"name : "<<name<<endl;
    cout<<"roll_n : "<<roll_number<<endl;
    cout<<"division : "<<div<<endl;
}
    void showrank (int a)
{
    cout<<a;
}
void showrank(string s)
{
    showdetails();
    cout<<"NO RANK";
}
void showrank(string s ,int a)
{
    showdetails();
    cout<<"rank  :"<<a<<endl;
}

};
int main()
{

  student s;
  s.showdetails();
  s.marks();
  s.showrank("tejas");
  s.showrank(3);
  s.showrank("tejas",4);
   return 0;

}