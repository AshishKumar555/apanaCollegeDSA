#include<iostream>
using namespace std;
#include<vector>
int countPrimes(int n) {
        vector<bool> isPrime(n+1,true);
        int count =0;

        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;
                for(int j=i*2;j<n;j=j+i){
                   isPrime[j]=false;
                }
            }
        }
        return count;
        
    }
 int main(){                    //Input: n = 10
    int n=10;                      // Output: 4
                                 // Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
    cout<<"Number of prime between two numbers : "<<countPrimes(n)<<endl; 
    return 0;
}