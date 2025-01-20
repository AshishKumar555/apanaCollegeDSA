#include<iostream>
using namespace std;


int main(){ // character Array
    char str[]="Ashish Kumar";
    char str1[13];
    cout<<"Enter a strig : ";
    cin.getline(str1,13);

   cout<<str<<endl;
    for(char ch : str1){
        cout<<ch<<" ";
    }
    return 0;
}