#include <iostream>

using namespace std;


int sum(int n, int arr[]){
    int sum=0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    cout<<"enter the numbe of digits";
    int n;
    cin>>n;
    int arr[n];

    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    int result = sum(n, arr);

    
    cout<<result;



    return 0;
}