#include <iostream>
using namespace std;

int findsum(int *arr,int size){

    if (size==0){return 0;}


 int ans = *arr + findsum(arr + 1, size - 1);

    return ans;

}

int main(){
    int arr[5]=  {1,2,3,4,5};
    int sum = findsum(arr,5);
    cout<<sum;
    return 0;
}