#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return "Non Prime Number";
        }
    }
    return "Prime Number ";
}
int main(){
    int n=21;
    cout<<isPrime(n)<<endl;
    return 0;
}