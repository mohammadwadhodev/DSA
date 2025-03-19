#include <iostream>
using namespace std;


int main(){
    
    int arr[6] = {10,3,70,1,2,7};
    int largest = arr[0];


    int length = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i< length; i++){
        if(arr[i]  > largest){
            largest = arr[i];
        }
    }

    cout << "Largest value in an arry is : " << largest << endl;

}