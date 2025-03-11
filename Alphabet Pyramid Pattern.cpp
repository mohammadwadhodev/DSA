#include <iostream>
using namespace std;

int main(){
    int numbeOfRows = 4;
    int row = 1;
    char val = 'A';
    int num = 0;
    
    while(row <= numbeOfRows){
        int col  = 1;
        while(col <= row){
            num += col;
            char val = 'A' + row + col - 2;
            cout << val;
            col++;

            }
            
        cout << endl;
        row++;
        
        
    }
}

// output 
// A
// B C 
// C D E 
// D E F G
