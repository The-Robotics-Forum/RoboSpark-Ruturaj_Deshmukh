include<iostream.h>
#include<conio.h>

class biodata
{
    public :
    void getbiodata()
    {
        cout<< "Enter data";
        cin>> data;

    }
    void putbiodata()
    {
        cout << "data =" <<data<<end1;
    }

};
class Personal_data() : 
{
    char Name;
    char Surname;
    char Address[];
    int mobile;
    int dob;
 protected :
 Personal_data()
 {
cout << "Name";
cin >> Name;
cout << "Surname";
cin >> Surname;
cout << "Address";
cin >> Address;
cout << " mobile";
cin >> mobile;
cout << "dob ";
cin >> dob;
 }

};
class Professional_data() :
{
    char name_of_organisation[];
    char job_profile[];
    char project[];
 protected :
 Professional_data()
 {
cout << "name_of_organisation ";
cin >> name_of_organisation;
cout << "job_profile";
cin >> job_profile;
cout << "project";
cin >> project;


 }
};
class Academic_data() : 
{
int year_of_passing;
float cgpa;
char college_name[];
char branch[];

protected :
Academic_data()
{
cout << "year_of_passing";
cin >> year_of_passing;
cout << "CGPA";
cin >> cgpa;
cout << "college_name";
cin >> college_name;
cout << "branch";
cin >> branch;
}
};
void main()
{
    biodata bd;
    cout << "1.Personal_data";
    cout << "2.Professional_data";
    cout << "3.Academic_data";
    cout << "Enter Option ";
    cin >>bd;
    if(bd == 1)
    {
    Personal_data Per;
    Per.Personal_data();
    }
    else if(bd ==2)
    {
        Professional_data Pro;
        Pro.Professional_data();
    }
    else
    {
        Academic_data Aca;
        Aca.Academic_data();
    }

}