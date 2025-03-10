#include <iostream>
using namespace std;

int main(){
    int numbeOfRows = 3;
    int row = 1;
    
    while(row <= numbeOfRows){
        int col  = 1;
        while(col <= numbeOfRows){
            char val = 'A' + row + col - 2;
            cout <<  val;
            col++;
            }

        cout << endl;
        row++;
        
        
    }
    
}



// output 
// A B C
// B C D
// C D E
