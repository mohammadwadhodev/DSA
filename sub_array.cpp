#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};


    for (int n = 0; n < vec.size(); n++) {
        for (int i = n; i < vec.size(); i++) {
            for (int k = n; k <= i; k++) {
                cout << vec[k];
            }
            cout << "  ";
        }
        cout << endl; 
    }

    return 0;
}
