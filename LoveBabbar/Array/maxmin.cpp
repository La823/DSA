#include <iostream>
using namespace std;

int findmin(int arr[],int n){
    int min =arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){min=arr[i];}
    }
    return min;
}

int findmax(int arr[],int n){
    int max =arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){max=arr[i];}
    }
    return max;
}

int main(){

    int n;
    cout<<"Enter the number of values";
    cin>>n;

    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];}

        cout<<findmin(arr,n)<<endl<<findmax(arr,n);


}