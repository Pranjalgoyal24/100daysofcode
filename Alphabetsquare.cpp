#include<iostream>
using namespace std;
int main(){
    int n;//no. of rows
    cout<<"Enter no. of rows and columns :";
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = (char)(i+95); //typecasting
            cout<<ch;
        }
        cout<<endl;
    }
}