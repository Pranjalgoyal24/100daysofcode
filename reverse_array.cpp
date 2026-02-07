#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,5,6,12,13,14};
    int temp[6];
    int i =5,j=0;
    while(i>=0){
        temp[j] = arr[i];
        j++;
        i--;
    }
    for(int i  =0;i<6;i++){
        arr[i] = temp[i];
        cout<<arr[i]<<" ";
    }
}