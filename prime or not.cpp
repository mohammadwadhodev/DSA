#include <iostream>
using namespace std;

int main(){
    int n = 0;

    cin >> n;

    int i =2;

    bool isPrime = true;

    while(i < n){
        if(n % i == 0){
            isPrime = false;
        }
        i++;
    }

    if(isPrime){
        cout << n << " is prime number " << endl;
    }else{
        cout << n << " is not prime number " << endl;
    }
    
}