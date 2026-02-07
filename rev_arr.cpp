#include<iostream>
using namespace std;
void swap(int &a,int &b){
     int temp = a;
    a = b;
    b = temp;
   // return a,b;
}
int main(){
    int arr[6] = {6,45,3,12,11,14};
    int i=0,j=5;

    while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
    }
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}