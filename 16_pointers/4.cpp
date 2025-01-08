#include<iostream>
using namespace std;
int main(){        //Predict output:
int a=5;
int* p=&a;
int** q=&p;
cout<<*p<<endl; //5
cout<<**q<<endl; //5
cout<<p<<endl; //&a
cout<<*q<<endl;//&a
    
    return 0;

}