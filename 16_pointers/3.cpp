#include<iostream>
using namespace std;
int main(){        //creating Parent  pointers  
    int a=10;
    int* ptr=&a;
    int** parPointer=&ptr;
    cout<<"Address of variable : "<<&ptr<<endl;
    cout<<"Pointer val : "<<parPointer<<endl;
    return 0;

}