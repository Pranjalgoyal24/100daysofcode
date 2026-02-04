#include<iostream>
using namespace std;

// char convert(char name){
//     char ans = name-'a'+'A';
//     return ans;
// }
int main(){
    char ch;
    cout<<"ENter character:";
    cin>>ch;
    //cout<<convert(ch);
    int ans = int(ch);
    char cha = char(ans-97+65);
    cout<<cha<<endl;
}