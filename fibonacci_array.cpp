#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    arr[0] =0;
    arr[1] = 1;
    int fibo=0;
    // cout<<"Enter elements of array: ";
    // for(int i =2;i<5;i++){
    //     cin>>arr[i];
    // }
    for(int i =2;i<n;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout<<arr[8];
}