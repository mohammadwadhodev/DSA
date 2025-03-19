#include <iostream>
using namespace std;


void swaotTheMaxAndMinValue(int arr[],int length){
    int maxIndex = 0;
    int smallestIndex = 0;

    
    // find the smallest value
    for (int i = 1; i < length; i++) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[smallestIndex];
    arr[smallestIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

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