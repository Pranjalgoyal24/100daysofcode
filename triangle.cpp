#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter sides : ";
    cin >> a >> b >> c;

    if((a+b)>c && (b+c) > a && (a+c) > b){
        cout<<"It is a valid triangle";
    }
    else cout<<"It is not a valid triangle";
}