#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number:";
    cin>>a;
    int rev=0;
    int n =0;
    int rem=0;
    int mul=1;
//     while(a/2==0){
       
      
//     }
// cout<<rem<<endl;
//cout<<13%2<<endl;
    while(a>0){
       
          

       n = a%2;
       
       rev = n*mul+rev;
       mul = mul*10;
        a = a/2;

         
    }
    // while(rev!=0){
       
          

    //    n = rev%10;
    //    rem = rem*10+n;
    //     rev = rev/10;

         
    // }
    
    cout<<rev<<endl;
   //  cout<<rem<<endl;
   
}