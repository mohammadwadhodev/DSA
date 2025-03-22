#include <iostream>
using namespace std;



void findUniques(int arr[], int length){

    string uniquValues = "";

    for(int i = 0; i< length; i++){
        int isUnique = 1;
        for(int j = 0; j < length; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = 0;
                break; 
            }
        }
        
        if (isUnique) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << endl;

}

int main(){

    int arr[9] = {1,2,3,4,9,4,3,2,7};
    int length = sizeof(arr) / sizeof(arr[0]);
    findUniques(arr,length);

}