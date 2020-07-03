#include <iostream>

using namespace std ;

struct student
{
int id;
char name[50];
int year;
int cgpa;
};

int main()
{
    cout<<"enter the details of student"<<endl;
    struct student s[3];

for(int i=0;i<3;i++)
{
    cout<<"Enter the name for roll no "<<i+1<<"student :\n";
        cin>>s[i].name;
        cout<<"Enter the year for roll no "<<i+1<<"student :\n";
        cin>>s[i].name;
        cout<<"Enter the ID for roll no "<<i+1<<"student :\n";
        cin>>s[i].name;
        cout<<"Enter the CGPA for roll no "<<i+1<<"student :\n";
        cin>>s[i].cgpa;
        cout<<endl;
}
  cout<<"displaing information  :"<<endl;
        cout<<endl;
    for(int i=0;i<3;i++)
    {
        
       
        cout<<"name of for roll no "<<i+1<<"student :\n"<<s[i].name<<endl;
        cout<<"year of for roll no "<<i+1<<"student :\n"<<s[i].year<<endl;
        cout<<"ID offor roll no "<<i+1<<"student :\n"<<s[i].id<<endl;
        cout<<"cgpa offor roll no "<<i+1<<"student :\n"<<s[i].cgpa<<endl;
    }
    

}