#include<iostream>
using namespace std;
int main(){
    int num=3,pow=3;
    int ans=1;
    
    while(pow >0){
        ans *=num;
        pow--;
    }
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}