#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if((j>=5-i) && (j<=3+i)){
                cout<<count;
                j<=3?count++:count--;
            }else{
                cout<<" ";
            }
            
        }
        count=1;
        cout<<endl;
    }
}