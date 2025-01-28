#include<iostream>
using namespace std;

void countDigit(int n){
    int count=0;
    while( n!=0){
        int digit=n%10;
        count ++;
        n=n/10;
    }
    cout<<"Number of digit is : "<<count<<endl;
}
void sumofDigit(int n){
    int sum=0;
    while( n!=0){
        int digit=n%10;
        sum +=digit;
        n=n/10;
    }
    cout<<"Number of digit is : "<<sum<<endl;
}
int main(){
    int num=12345;
    countDigit(num);
    sumofDigit(num);
    return 0;
}