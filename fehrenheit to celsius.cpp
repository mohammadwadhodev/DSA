#include <iostream>
using namespace std;

int main(){
    int fehrenheit = 0;
    while(fehrenheit < 100){
        cout << "Fehrenheit :" << fehrenheit << " == " << "celsius "<< (fehrenheit - 32) * 5 / 9 << endl;
        fehrenheit+= 10;
    }
    
}