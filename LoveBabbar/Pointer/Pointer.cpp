#include <iostream>

using namespace std;

void update(int **ptr){
    *ptr=*ptr+1;
cout<<"inside update"<<ptr<<*ptr<<endl;

}

int main(){
  


int num =5;
 int *p =&num;

 cout<<(*p)++ ;
 cout<<num;

















// int arr[10]={2,3,4,5};

// // cout<<*arr<<endl;
// // cout<<*arr+1<<endl;
// // cout<<*(arr+1)<<endl;

// // int num =5;

// int *ptr= &arr[0];

// cout<<"before"<< ptr<<*ptr<<endl;
// update(&ptr);
// cout<<"after"<<ptr<<*ptr<<endl;

// int **q = &ptr;





 
    return 0;
}