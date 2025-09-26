#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3,2,4,6,7,8,9};
    int n = arr.size();
    int k;
    cout << "Enter steps to rotate left: ";
    cin >> k;

    k = k % n;  


    vector<int> temp(arr.begin(), arr.begin()+k);

    // shift remaining elements to the left
    for(int i=0; i<n-k; i++){
        arr[i] = arr[i+k];
    }

    // put back stored elements at end
    for(int i=0; i<k; i++){
        arr[n-k+i] = temp[i];
    }

    cout << "After " << k << " left rotations:" << endl;
    for(int x : arr){
        cout << x << " ";
    }
}
