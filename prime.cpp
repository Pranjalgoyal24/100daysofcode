#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2;//number enetered by user
    int count=0;
    int prime=0;
    cout<<"Enter a nummber :";
    cin>>n1>>n2;
    for(int i = n1;i<=n2;i++){
        for(int j = 2;j<= sqrt(i);j++){
        if(i%j==0){
            count++;
            //prime = i;
        }
        //cout<<prime<<endl;
       
    }
     if(count==0 && i != 1){
            prime++;
            cout<< i << " ";
        }
        
    count = 0;
    }
    cout << "\n\n The total number of prime numbers between " << n1 << " to " << n2 << " is: " << prime << endl; // Display the total count of prime numbers found
    // if(count==2){
    //     cout<<n1<<" is a prime number";
    // }
    // else cout<<n1<<" is not a prime number";
}