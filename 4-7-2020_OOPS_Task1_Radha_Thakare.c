#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    float cgpa;
    float marks;
    int i,j,number;

    student()
    {
        cout << "Default called.\n";
        name = "default name";
        cgpa = 10;
    }
    void getInput()
{

    int i;
    std: :cout << "Give the input :\n";
    cout << "Enter number of student :";
    cin >> number;
    cout << "Name : ";
    cin >> name;


}
for(j=1;j<=number;j++)
{
    int total =0;
    int score = 0;
    cout << "Marks : ";
    cin >> marks;
    for(i=1;i<=5;i++)
    {
        cout << "subject" << i<< ":" ;
        cin >> score;
        if (score <0 || score > 100)
        {

         cout << "Enter score";
         i--;
         continue;
        }
        total += score;
        cout <<total;
    }
}
void showDetails()
{
    cout << "Name : " << name << "\n";
    cout << "CGPA : " << cgpa <<end1;
}
void getAndShowData()
{
    getInput();
    showDetails();
}

}
