#include <iostream>

using namespace std;

void update(int &n){
    n++;
}

int main(){

    int n =5;
    cout<<"before"<<n;
    update(n);
    cout<<"after"<<n;
}