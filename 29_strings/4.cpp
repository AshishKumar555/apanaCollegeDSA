
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include <algorithm> // for reverse

void reverseString(vector<char>& s) {
        // int start=0;                // char array method 
        // int end=s.size()-1;
        // while(start < end ){
        //     swap(s[start],s[end]);
        //     start++;
        //     end--;

        // }
        reverse(s.begin(),s.end()); // String method 
    }

int main(){ // character Array
    // vector<char> str1 = "Ashish Kumar";
      vector<char> str = {'a','s','h','i','s','h'};
    reverseString(str);
    for(char ch : str){
       cout<<ch<<" ";
   }
    return 0;
}