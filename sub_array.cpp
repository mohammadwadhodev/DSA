#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Loop to generate subarrays
    for (int n = 0; n < vec.size(); n++) {
        for (int i = n; i < vec.size(); i++) {
            // Print subarray from index n to i
            for (int k = n; k <= i; k++) {
                cout << vec[k];
            }
            cout << "  ";  // Space between different subarrays
        }
        cout << endl;  // New line after each starting index
    }

    return 0;
}
