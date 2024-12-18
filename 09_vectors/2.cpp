#include<iostream>
using namespace std;
#include<vector>
//size and capacity of  vector 
int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    cout<<"size = "<<vec.size()<<endl; //3
    cout<<"capacity = "<<vec.capacity()<<endl; //4

    vec.push_back(3);
    vec.push_back(4);

     cout<<"size = "<<vec.size()<<endl; //5
    cout<<"capacity = "<<vec.capacity()<<endl; //8
    return 0;
}