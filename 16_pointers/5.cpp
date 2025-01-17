#include<iostream>
using namespace std;
// void changeA(int a){
//      a=20;
// }      Not changed its the copy of variable a-----------------
void changeA(int* p){
    *p=20;
}

int main(){        
    int a=10;
    // changeA(a);   //10
    changeA(&a);     //20
    cout<<"Inside main fnx : "<<a<<endl;
    return 0;

}