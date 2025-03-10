#include <iostream>
using namespace std;

int main(){
    int numbeOfRows = 3;
    int row = 1;
    int num = 0;
    
    while(row <= numbeOfRows){
        int col  = 1;
        while(col <= numbeOfRows){
            char val = 'A' + col - 1;
            cout << val;
            col++;
            
        }
        cout << endl;
        row++;
    }
    
}



// output 
// A B C
// A B C 
// A B C
