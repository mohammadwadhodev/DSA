#include <iostream>
using namespace std;


int main(){

    int arr[7] = {10,-1,3,1,2,0,7};
    int smallest = arr[0];

    int length = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i< length; i++){
        if(arr[i]  < smallest){
            smallest = arr[i];
        }
    }

    cout << "smallest value in an arry is : " << smallest << endl;

}