#include <iostream>
using namespace std;


int main(){
    
    int arr[9] = {4,2,7,8,10,9,1,2,5};
    int length = sizeof(arr) / sizeof(arr[0]) - 1;
    
    int temp = 0;
    cout << endl;
    
    for(int i = 0; i<length; i++){
        
        temp = arr[i];
        arr[i] = arr[length];
        arr[length] = temp;
        cout << "check i : " << i << " == length : " << length << endl;
        length--;
        
    }

    cout << "Reversed array : " ;
    for(int i = 0; i <9; i++){
        cout << arr[i];
    }

}