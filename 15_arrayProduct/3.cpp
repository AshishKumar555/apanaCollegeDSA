#include<iostream>
using namespace std;
#include<vector>
vector<int> productExceptSelf(vector<int>& nums) {
    int n =nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    //prefix
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
        //suffix
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

        for(int i=0;i<n;i++){
        ans[i]=prefix[i] * suffix[i];
    }
     return ans;
}
int main(){
 vector<int> nums={1,2,3,4,5};
    vector<int>ans=productExceptSelf(nums); //T.C => O(N)--------------S.C =>O(N)--------------------------
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    cout<<"]";
return 0;
}