#include <iostream>
using namespace std;


void sumOfArray(int arr[],int length){
    int sum = 0;
    
    for(int i = 0; i<length; i++){
        sum+=arr[i];
    }
    cout << "Sum of an array : " << sum << endl;

}

void productOfArray(int arr[],int length){
    int product = 1;
    
    for(int i = 0; i<length; i++){
        product*=arr[i];
    }
    cout << "Product of an array : " << product << endl;

}


int main(){
    
    int arr[9] = {4,2,7,8,10,9,1,2,5};
    int length = sizeof(arr) / sizeof(arr[0]);

    sumOfArray(arr,length);
    productOfArray(arr,length);

}