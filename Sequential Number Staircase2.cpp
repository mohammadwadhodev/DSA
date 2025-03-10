#include <iostream>
using namespace std;

int main(){
    int numbeOfRows = 5;
    int row = 1;
    int num = 0;
    
    while(row <= numbeOfRows){
        num = row;    
        int col = 1;
        while(col <= row){
            cout << num;
            col++;
            num++;
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