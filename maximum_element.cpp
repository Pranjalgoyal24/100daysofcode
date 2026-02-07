#include<iostream>
#include<climits>
using namespace std;
int main(){
    int ans=INT_MIN;
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int j =0;j<n;j++){
        if(arr[j]>ans) ans = arr[j];
    }
    cout<<ans<<endl;
}