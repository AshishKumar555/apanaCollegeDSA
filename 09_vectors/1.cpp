#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> vec={10,20,30,40};
    cout<<"size : "<<vec.size()<<endl;
    
    for(int val :vec){
        cout<<val<<endl;
    }
    return 0;
}