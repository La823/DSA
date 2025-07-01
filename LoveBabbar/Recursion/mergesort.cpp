#include <iostream>

using namespace std;


void merge(int *arr, int s ,int e){
    int mid = s+(e-s)/2;
}

void mergesort(int *arr, int s,int e){
if (s>e){return;}
 
// left
int mid = s+(e-s)/2;

mergesort(arr,s,mid);

mergesort(arr,mid+1,e);

merge (arr,s,e);

}
int main(){

    int arr[5]= {3,56,6,78,23};
    int n = 5;
    mergesort(arr,0,n-1);
    return 0;
}