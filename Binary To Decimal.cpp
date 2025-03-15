#include<iostream>

using namespace std;


int main(){


    int binary = 100;
    int ans = 0, pow = 1;
    
    while(binary > 0){
            int rem = binary % 10; 
            ans+= rem * pow;
            pow *=2;
            binary /=10; // kisi bhi integer ka last digit nikal na ho to use 10 se devide kardo
            
        }

    cout<<endl;
    cout  << "decimalNumber : "<< ans;
    

    
    
    

}
