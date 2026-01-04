#include<iostream>
using namespace std;
int main(){
    int n ;
    cout <<"Enter number : ";
    cin >> n;

    if(cin.fail()){
        cout<<"Invalid Input";
        return 0;
    }

    if(n>=0){
        cout<<n;
    }
    else cout<<-n;
    return 0;
}