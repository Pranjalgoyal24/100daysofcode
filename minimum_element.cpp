#include<iostream>
#include<climits>
using namespace std;
int main(){
    int ans= INT_MAX;
    int arr[6] = {4,5,6,1,2,0};
    for(int i =0;i<6;i++){
        if(arr[i]<ans) ans = arr[i];
    }
    cout<<ans<<endl;


}