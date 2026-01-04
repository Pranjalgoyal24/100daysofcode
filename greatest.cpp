#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter integers : ";
    cin >> a >> b >> c;

    if(a>b && a > c){
        cout<<a<<"Is greatest";
    }
    else if (b>a && b>c){
        cout<<b << " Is greatest";
    }
    else cout<<c<<" is greatest";
}