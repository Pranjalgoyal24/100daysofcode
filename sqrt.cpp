#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    for(int i =1;i*i<=n;i++){
        if(i*i==n) {cout<<i<<endl;
         break;} 
       
    }
}