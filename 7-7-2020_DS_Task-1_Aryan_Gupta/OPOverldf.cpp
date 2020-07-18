#include<iostream>
#include<string.h>
using namespace std;
class String
{
private:
    char str[1000000];
public:
    String()
    {
        strcpy(str," ");
    }
        String(char s[])
    {
        strcpy(str,s);
    }
    void gets_string();
        String operator+ (String object ){
            String new;
            if(strlen(new.str) + strlen(object.str)<1000000){
                strcpy(new.str, str);
                strcat(new.str, object.str);
            }
            else{
                cout<<"String over Flow";
                exit(1);
            }
            return new;
        }

        void display(){

            cout<<str<<endl;
        }
};
int main()
{
String s1 = "Aryan";
String s2 = "Gupta";
s1.display();
s2.display();

String s1 = "Aryan";

String s3;
s3 = s1+s2;
s3.display();
}

