#include<iostream>
using namespace std;
#include<vector>

int majorityElement(vector<int>& nums) { // Brute force approach 
        int n=nums.size();
        for(int val : nums){
            int freq =0;
            for(int elm : nums){
                if(elm == val){
                    freq++;
                }
            }
            if(freq > n/2){
                return val;
            }
        }
        return -1;
    }

int main(){
 
    vector <int> arr2 ={1,2,2,1,1};
    int ans = majorityElement(arr2);
    cout<<"Majority Element is : "<<ans<<endl;

    return 0;
}
    