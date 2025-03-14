#include <iostream>
using namespace std;

int main()
{
    int numbeOfRows = 4;
    int row = 1;

    while (row <= numbeOfRows)
    {
        int space = numbeOfRows - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int left = 1;
        while (left <= row)
        {
            cout << left;
            left++;
        }

        int right = row - 1;
        while (right)
        {
            cout << right;
            right--;
        }

        cout << endl;
        row++;
    }
}

// OUTPUT  :-

//      1
//    1 2 1
//  1 2 3 2 1
// 1 2 3 4 3 2 1
