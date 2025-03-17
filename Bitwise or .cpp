#include <iostream>
using namespace std;
int main(){

    int value = 0;
    int value2 = 0;
    cout <<  "Enter value 1: " << endl;
    cin >> value;
    cout <<  "Enter value 2: " << endl;
    cin >> value2;
    cout << endl;
    
    cout << "Output : " << (value | value2) << endl;


}
