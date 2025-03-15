#include<iostream>
using namespace std;


int main(){
    int decimal = 0;
    cout << "Enter any decimal number" << endl;
    cin >> decimal;
    
    
    string binary = "";
    while(decimal >= 1){
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
        
    }

    cout << binary << endl;
    

}
