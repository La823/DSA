#include <iostream>

using namespace std;
int linearSearch(int k, int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return i; // Return the index where `k` is found
        }
    }
    return -1; // Return -1 if `k` is not found
}


int main(){

    cout<<"enter the numbe of digits";
    int n;
    cin>>n;
    int arr[n];

    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    int result = linearSearch(5,n, arr);

    
    cout<<result;



    return 0;
}