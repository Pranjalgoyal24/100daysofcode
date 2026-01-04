#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number :";
    cin>>a>>b;
    char x;
    cout<<"ENter the operator :";
    cin>>x;
    switch (x){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
    default:
    cout<<"Invalid Operator";
        break;
    }

    return 0;
}