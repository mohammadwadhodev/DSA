#include<iostream>
using namespace std;


int main(){
     int n =1;
    
    int temp = 1;
    
     bool isPowerOfTwo = false;
      if (n == 1) {
        isPowerOfTwo = true;
    }
    
    while(temp <= n){
      
      cout << "in the loop :" << temp << endl;
      int check = temp <<1;
      
      if(check == n){
        isPowerOfTwo = true;
        break;
      }
      temp=check;
      cout << "temp :" << temp << endl;
      
    }
    
    cout << "isPowerOfTwo:- " << isPowerOfTwo;
    

}
