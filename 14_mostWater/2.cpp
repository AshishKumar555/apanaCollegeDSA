#include<iostream>
using namespace std;
#include<vector>  // Two pointer approach O(n)  -----------------------
int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp=0;
        int rp= height.size()-1;
        while(lp < rp){
            int ht =min(height[lp],height[rp]);
           int width = rp -lp;
           int currWater = width * ht;
            maxWater = max(maxWater,currWater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
        
    }
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};

    cout<<"Answer is :"<<maxArea(height)<<endl;
    return 0;
}