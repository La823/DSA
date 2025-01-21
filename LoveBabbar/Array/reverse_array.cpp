#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of values";
    cin>>n;

    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
int rev[n];
    for(int j=0;j<n;j++){
rev[j]=arr[n-j-1];
    }

    for(int v=0;v<n;v++){
        cout<<rev[v];
    }
}