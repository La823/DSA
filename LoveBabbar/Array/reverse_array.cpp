// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the number of values";
//     cin>>n;

//     int arr[n];

//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
// int rev[n];
//     for(int j=0;j<n;j++){
// rev[j]=arr[n-j-1];
//     }

//     for(int v=0;v<n;v++){
//         cout<<rev[v];
//     }
// }




#include <iostream>
using namespace std;

void reverse(int n,int arr[]){
    int temp=0;
    for (int i=0;i<=n/2;i++){

        temp=arr[n-i-1];
        arr[n-1-i]=arr[i];
        arr[i]=temp;

    }
}

int main(){

   int arr[5]={1,2,3,4,5};

reverse(5,arr);

for(int i=0;i<5;i++){
    cout<<arr[i];
}
   
    return 0;
}