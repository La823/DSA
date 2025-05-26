#include <iostream>

using namespace std;

int stairways(int n){

    if (n==0)return 1;
    if(n<0)return 0;

    int totalways = stairways(n-1)+stairways(n-2);

    return totalways;


    


}

int main(){

    int n;
    cin>>n;

    int ans= stairways(n);
    cout<<ans;

    return 0;

}