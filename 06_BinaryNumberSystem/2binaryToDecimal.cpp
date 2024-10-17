#include<iostream>
using namespace std;

int binaryToDecimal(int num){
    int ans=0;
    int pow=1;
    while(num>0){
     int rem=num%2;
     ans=ans+(rem*pow);
     pow=pow*2;
     num=num/10;
      
    }
    return ans;
}


int main(){
 int number=101010;
 cout<<binaryToDecimal(number)<<endl;
    return 0;
}