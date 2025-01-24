#include<iostream>
using namespace std;
#include<string>
int main(){    //----------Input and Output--------------!
    string str1="Ashish";
    string str2="Kumar";
    string str3=str1+str2;
    cout<<str3<<endl;

    string str4;
    getline(cin,str4);
    cout<<"Output is : "<<str4<<endl;
    return 0;
}