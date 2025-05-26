#include <iostream>

using namespace std;

int factorial(int n){


    if (n==0)return 1;

    int smaller = factorial(n-1);
    int big = 2* smaller;
return big;


}

int main(){

    int n;
    cin>>n;

    int ans= factorial(n);
    cout<<ans;

    return 0;

}