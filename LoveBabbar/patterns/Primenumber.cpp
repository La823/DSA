# include <iostream>
using namespace std ;

int main(){
    
    int n=7;
    int i=2;
    while(i<n){
        if(n%i==0){cout<<"Not prime"; return 0;}
        else{i++;}
    }
    cout<<"Prime";

    return 0;
}
