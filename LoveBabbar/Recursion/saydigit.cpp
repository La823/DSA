#include <iostream>

using namespace std;

void saydigits(int n){    
 
   string arr[] = {"zero", "one", "two", "three", "four", 
                    "five", "six", "seven", "eight", "nine"};
    // Base case: when n is a single digit
    if (n < 10) {
        cout << arr[n] << endl;
        return;
    }

   


    

int remainder= n%10;

int number = n/10;

saydigits(number);
cout<<arr[remainder]<<endl;


  


}

int main(){

    int n;
    cin>>n;

    saydigits(n);

    return 0;

}