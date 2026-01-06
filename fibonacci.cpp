#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int n1 = 0;
    int n2 = 1;
    int curr;
    for(int i =2;i<n;i++){
        curr = n1+n2;
       n1 = n2;
       n2 = curr;

         cout<<curr<<" ";
    }
            // cout<<curr<<" ";

}