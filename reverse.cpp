#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre a number :";
    cin>>n;
    int count = 0;
    int sum = 0;
    int rev = 0;
    while(n!=0){
       sum = sum+n%10;//this used to sum of all number
     //this part is used for reversing the number
        rev = (rev*10)+n%10;
         n = n/10;
        
        count++;


    }
   cout<<sum;
    cout<<endl<<rev;
    cout<<endl<<count;
}