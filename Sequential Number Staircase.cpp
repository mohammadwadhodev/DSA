#include <iostream>
using namespace std;

int main(){
    int numbeOfRows = 5;
    int row = 1;
    
    while(row <= numbeOfRows){
        cout << row; 
        int col = 1;        
        while(col < row){
            cout << row + col;
            col++;
        }
        cout << endl;
        row++;
    }
    
}



// output 
// 1 
// 23
// 345
// 4567
// 56789