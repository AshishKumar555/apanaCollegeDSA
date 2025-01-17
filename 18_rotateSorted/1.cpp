#include<iostream>
using namespace std;
#include<vector>

int search(vector<int>& A, int tar) {
        int st=0,end=A.size()-1;
        while(st <= end){
            int mid =st+(end-st)/2;
            if(A[mid] == tar){
                return mid;
            }

            if(A[st] <= A[mid]){ //Left sorted
               if(A[st]<= tar && tar <=A[mid]){
                end=mid-1;
               }else{
                st=mid+1;
               }

            }else{ // Right sorted
                if(A[mid]<= tar && tar <=A[end]){
                st =mid+1;
               }else{
                end=mid-1;
               }
            }
        }
        return -1;  
    }
int main(){
    vector<int> nums={4,5,6,7,0,1,2};
    int tar=0;

    cout<<"Answer at index : "<<search(nums,tar);
}