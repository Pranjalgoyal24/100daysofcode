#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int x){
    int count = 0;
    while(x){
        count++;
        x /= 10;
    }
    return count;
}
int power(int base,int exp){
    int res =1;
    for(int i =0;i<exp;i++){
        res*=base;
    }
    return res;
}
void Armstrong(int num, int digit){
    int temp = num, ans = 0, rem;
    while(temp){
        rem = temp % 10;
         temp /= 10;
        ans +=power(rem, digit);
       
    }
   if(ans==num) cout<<"Palindrome number";
   else cout<<"Not a Plaindrome number";
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int digit = countdigit(n);
    cout<<digit<<endl;
    Armstrong(n, digit);
}
