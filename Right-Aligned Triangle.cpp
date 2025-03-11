#include <iostream>
using namespace std;

int main(){
    int numbeOfRows = 4;
    int row = 1;
    
    while(row <= numbeOfRows){
        int space  = row;
        while(space < numbeOfRows){
             cout << " ";
             space++;
            }
            
    int star = 1;
    while(star <=row){
        cout << "*";
        star++;
       }
       cout << endl;
       row++;

    }
}

// OUTPUT  :- 

//   *
//  **
// ***
//****