#include<iostream>
using namespace std;


int main(){
    int decimal = 12;
    cout << "Enter any decimal number" << endl;
    cin >> decimal;
    
    
    string binary = "";
    while(decimal >= 1){
        binary = to_string(decimal % 2) + binary;
        cout << "binary : " <<  to_string(decimal % 2) << endl;
        decimal /= 2;
        cout << "decimal : " <<  decimal << endl;
        
    }

    cout << binary << endl;
    

}
