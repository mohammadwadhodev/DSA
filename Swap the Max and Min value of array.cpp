#include <iostream>
using namespace std;


void swaotTheMaxAndMinValue(int arr[],int length){
    int maxIndex = 0;
    int smallestIndex = 0;

    int smallestValue = arr[0];
    int maxValue = arr[0];
    
    // find the smallest value
    for(int i = 0; i<length; i++){
        if(arr[i] < smallestValue){
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }

     // find the max value
     for(int i = 0; i<length; i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    arr[maxIndex] = smallestValue;
    arr[smallestIndex] = maxValue;


}

void productOfArray(int arr[],int length){
}


int main(){
    
    int arr[10] = {-1 ,4,2,7,8,10,9,100,2,5};
    int length = sizeof(arr) / sizeof(arr[0]);

    swaotTheMaxAndMinValue(arr,length);

    int i = 0;

    while(i < length){
        cout << arr[i]; 
        i++;
    }
    cout << endl;



}