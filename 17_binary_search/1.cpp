#include<iostream>
using namespace std;
#include<vector>
int binarySearch(vector<int>num,int tar){ // Iterative approach
    int st=0,end=num.size()-1;
    while(st <= end){
        // int mid=(st+end)/2; can overflow int range if both(st,end) have int max value 
        int mid= st +(end -st)/2;
        
        if(tar > num[mid]){
            st=mid+1;
        }else if(tar < num[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};
    int tar=12;
    cout<<binarySearch(arr1,tar)<<endl;
    return 0;
}