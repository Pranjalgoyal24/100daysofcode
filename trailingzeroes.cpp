#include<iostream>
using namespace std;
//5!=120 it has only one zero that means answer is 1
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int count =0;
    while(n>=5){
        count += n/5;
        n/=5;
    }
    cout<<count<<endl;
}