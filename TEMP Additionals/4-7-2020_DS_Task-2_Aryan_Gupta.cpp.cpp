#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int rollNo;
        float cgpa;
        int Year;
         

        Student()
        {
            name = "default name";
            rollNo = 00;
            cgpa = 10;
            Year = 4;
            
        }


    void getInput()
    {
        std::cout << "Give the input:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "cgpa :  ";
        cin >> cgpa;
        cout << "Year of admission :  ";
        cin >> Year;
        


    }


    void printDetails()
    {
        cout << "\n student Detais :" << endl;
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No:" << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Year of admission: " << adYear << endl;
        cout << "city :  " << city << endl;
    }

    void showRank(int i)
    {
        cout << "\n>>> rank of " << name << " is " << i << endl;
    }

    void showRank(Student s1)
    {
        s1.printDetails();
        cout << "\n>>> no Rank provided\n";
    }

     void showRank(Student s1,int i)
    {
        s1.printDetails();
        cout <<" \n>>> Rank : " << i << endl;
    }

};

int main()
{

    Student s;
    s.getInput();
    s.showRank(5);
    s.showRank(s);

    return 0;

}