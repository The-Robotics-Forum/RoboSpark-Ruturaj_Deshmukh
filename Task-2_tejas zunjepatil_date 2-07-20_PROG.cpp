
#include<iostream>
#include<stack>
#include<cstring>
using namespace std ;



bool arepair(char openning,char closing)
{
    if(openning=='(' && closing==')') return true;
    if(openning=='[' && closing==']') return true;
    if(openning=='{' && closing=='}') return true;
}




void balancedParenthesis(string a)
{

    stack<char> S;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='('||a[i]=='{'||a[i]=='[')
        S.push(a[i]);

        else if(a[i]==')' || a[i] == '}' || a[i] || ']')
        {
            if(S.empty()  ||  !arepair(S.top(),a[i]))
            {
                cout<<"it's not balanced";
            }
            else S.pop();
        }
    }
    if(S.empty())
    cout<<("balanced");
    else
    cout<<("it's not at all");
}



int main ()

{
string s;
cin>>s;
balancedParenthesis(s);

    return 0;
}