#include<bits/stdc++.h>
using namespace std ;
class strings 
{
    public:
    string s1;
    int k;

    void getinput()
    {
        cin>>s1;
       
    }

    void operator *(int k)
    {
        for(int i=0;i<k;i++)
        cout<<s1;

    
    }
      void operator +(strings s2)
      {
          cout<<s1<<s2<<endl;
      }

};
int main()
{
    strings s1;
    string s2;
    int k;
    cout<<"Enter string  :"<<endl;
    s1.getinput();
     cout<<"Enter string  :"<<endl;
    cin>>s2;
    cout<<"Enter the size  :"<<endl;
    cin>>k;
    s1*k;
    s1 + s2;
    return 0;
}