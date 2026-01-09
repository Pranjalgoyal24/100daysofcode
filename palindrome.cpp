#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number: ";
    cin>>n;
    int original = n;
    int rev =0;
    /*for finding a palindrome number we just use 
    it using reverse code like if we find out reverse of a 
    nnumber then it should be same as original input number
    we use if else condition for verify that both match or not
    */
   while(n!=0){
    rev = rev*10+n%10;
    n = n/10;
   }

   if(rev==original){
    cout<<"It is a plaindrome";
   }
   else cout<<"Not a palindrome";
   cout<<endl<<rev;
}