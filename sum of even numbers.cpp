#include <iostream>
using namespace std;

int main(){
    int sumOfEvens = 0;
    for(int i = 1; i <=  100; i++){
        if(i % 2 == 0){
            sumOfEvens+=i;
        }
    }
    
    cout << "Sum of all even numbers: " << sumOfEvens << endl;
    
}