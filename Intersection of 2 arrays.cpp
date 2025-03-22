#include <iostream>
using namespace std;



void findIntersection(int arr1[],int size1, int arr2[], int size2){

    string uniquValues = "";
    
    for(int i = 0; i< size1; i++){
        for(int j = 0; j < size2; j++){
            
            if(arr1[i] == arr2[j]){
                bool alreadyPrinted = false;
                for(int k = 0; k < i; k++){
                    if(arr1[k] == arr1[i]){
                        alreadyPrinted = true;
                        break;
                    }
                }
                if(!alreadyPrinted){
                    std::cout << arr1[i] << " ";
                    break; 
                }
            }
        }
        
    }
    cout << endl;
    

}

int main(){

    int arr1[9] = {1,2,3,4,9,4,3,2,7};
    int arr2[7] = {1,3,5,6,3,4,9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    
    findIntersection(arr1,size1,arr2,size2);

}