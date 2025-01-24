#include<iostream>
using namespace std;
#include<string>
int main(){   //--------------looping and ---------------!
    string str1="Ashish Kumar";
    // for loop
    for(int i=0;i<=str1.length();i++){
          cout<<str1[i]<<" ";
    }
    cout<<endl;
   //for each loop
   for(char ch : str1){
       cout<<ch<<" ";
   }
    return 0;
}