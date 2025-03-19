#include <iostream>

using namespace std;

int linearSearch(int arr[], int n,int target) {
    
    for (int i = 0; i < n ; i++) {
        if(arr[i] == target){
            return i;
            
        }

    }
    return -1;
}

int main() {
    
    int myNum[5] = {64, 25, 12, 22, 11};
    int n = sizeof(myNum) / sizeof(myNum[0]);
    int index = linearSearch(myNum, n,11);
    
    if(index == -1){
        cout << "Invalid index :" << index << endl;
    }else{
        cout << "Target found on index :" << index << endl;
    }

 
    return 0;
}

