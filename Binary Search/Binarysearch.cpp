#include <iostream>

using namespace std;

int binarysearch(int arr[],int size,int key){
int s=0;
int e= size-1;
 
int mid =(s+e)/2;

while(s<=e){
    if(arr[mid]==key){return mid;}
    if(key>arr[mid]){s=mid+1;}
    else{e=mid-1;}
    mid=(s+e)/2;
}return -1;

}



int binarysearchfor(int arr[],int size,int key){
    int s=0;
    int e= size-1;
     
    int mid =(s+e)/2;
    
   for (;s<=e;){
    if(arr[mid]==key){return mid;}
    if(key>arr[mid]){s=mid+1;}
    else{e=mid-1;}
    mid=(s+e)/2;
}return -1;
    
    }
    

int main(){

    // int even [6]={1,2,3,4,5,6};
    
    int odd [5]={1,2,4,5,5};

    int index =binarysearchfor(odd,6,4);
    cout<<index;

    return 0;




}