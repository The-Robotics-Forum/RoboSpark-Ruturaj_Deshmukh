#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespacet std;
class student_t_distribution
{
  public:
      string name;
      student()
      {

          name = "Radha";
      }
};
void showRank(int x)
{

    cout<<"The Rank is " <<x<<end1<<endl;

}
void showRank(string n)
{

    cout <<"name of student is" <<n<<endl;
    cout<<"no rank"<<end1<<endl;
}
void showRank(int x,string n)
{

    cout<<"name of student is"<<n<<endl;
    cout<<"the rank is"<<x<<endl<<endl;

}
int main()
{

    student s1;
    int p;
    showRank(p);
    showRank(s1.name);
    showRank(p,s1.name);
}
