#include <iostream>
using namespace std;

int main(){
    int numbeOfRows = 5;
    int row = 1;
    
    while(row <= numbeOfRows){
        cout << row; // 1
                    // 2
                    // 3
            int col = 1;        
        while(col < row){
            cout << row + col; // 3
            // 45
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