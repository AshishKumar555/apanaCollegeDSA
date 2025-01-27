#include<iostream>
using namespace std;
#include<vector>
#include<string>
int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;

        for(int i=0;i<n;i++){
            char ch=chars[i];
            int count=0;

            while(i<n && chars[i]==ch){
                count++,i++;
            }
            if(count==1){
                chars[idx ++]=ch;
            }else{
                chars[idx ++]=ch;
                string str=to_string(count);
                for(char digit:str){
                    chars[idx ++]=digit;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
int main(){
//char chars[] = {'a','a','b','b','c','c','c'};// function argument vector char ka h so doesn't accepe array
vector<char> chars = {'a','a','b','b','c','c','c'};
int ans = compress(chars);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}