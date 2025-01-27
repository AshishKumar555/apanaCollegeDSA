#include<iostream>
using namespace std; //square pattern
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        char num='A';
        for(int j=1;j<=n;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
// 1234
// 1234
// 1234
// 1234