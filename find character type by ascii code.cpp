#include<iostream>
using namespace std;

int main(){
    
    char v1;
    cout<< 2/5 << endl;
    cout << "Enter any charcter" << endl;

    cin >> v1;

    int val = v1;

    if(val >= 65 && val  <= 90){
        cout << "This is Capital Alphabet";
    }
    else if(val >= 97 && val <= 122){
        cout << "This is Small Alphabet";
    }
    else if(val >= 48 && val <= 57){
        cout << "This is number";
    }
    else{
        cout << "Invalid character";
    }

}