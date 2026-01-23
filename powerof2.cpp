#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    if(n<0) return 0;
    while(n!=1){
        if(n%2==1) return 0;
        n = n/2;
    }
    cout<<"it is a power of 2";

}