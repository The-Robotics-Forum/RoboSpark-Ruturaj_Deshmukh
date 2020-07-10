#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int year;
    int roll;
    int arr*=new int[5];
    double cgpa;
    Student()
    {

    }
    Student(string name_st,int year_st,int roll_st;)
    {s
        name=name_st;
        year=year_st;
        roll=roll_st;
        cgpa=10;

    }
    void getInput()
    {
        cout<<"Enter Name of Person:"<<endl;;
        cin>>name;
        cout<<"Enter Year";
        cin>>year;
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter Name of Person:";
        cin>>name
        cout<<"Enter Marks of students:"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter marks for"<<i+1<<"th Subject:"
            cin<<arr[i]
        }



    }
     int total_marks(int *arr1)
    {
        return arr1[0] + arr1[1] +arr1[2] + arr1[3] + arr1[4] ;
    }
    void calcgpa(int *arr)
    {
        cgpa = total_marks(arr) / 50 ;


void Display()
    {
        cout << "Name :" << name << endl ;
        cout << "Roll No :" << roll << endl ;
        cout << "CGPA :" << cgpa << endl ;
        cout << "Year :" << year<< endl ;
    }
    }

};

int main()
{
    Student S1("Aryan",2020,06),S2;
    S1.Display();
    S2.getInput();
    S2.Display();
    delete[] S2.a;
    delete[] S1.a;


}