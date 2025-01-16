#include<iostream>
using namespace std;
#include<vector>

int recBinarySearch(vector<int> nums,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tar > nums[mid]){
            return recBinarySearch(nums,tar,mid+1,end);
        }else if(tar < nums[mid]){
            return recBinarySearch(nums,tar,st,mid-1);
        }else{
            return mid;//ans
        }
    }
    return -1; //invalid index target not exist in this array;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};
    int tar=3;
    int st=0,end=arr1.size()-1;
    cout<<recBinarySearch(arr1,tar,st,end)<<endl;
    return 0;
}