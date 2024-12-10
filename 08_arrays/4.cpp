#include<iostream>
using namespace std;
void changeArr(int brr[],int size){ //it changes the original array of  main function
    for(int i=0;i<size;i++){
        brr[i]=3*brr[i];
    }
}
int main(){

    int arr[]={1,2,3};
    int size =sizeof(arr)/4;
    changeArr(arr,size);

    cout<<"After the pass by reference :"<<endl;
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
    }
    return 0;
}