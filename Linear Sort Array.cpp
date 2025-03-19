#include <iostream>

using namespace std;

void linearSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

    
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int myNum[5] = {64, 25, 12, 22, 11};
    
    
    int n = sizeof(myNum) / sizeof(myNum[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << myNum[i] << " ";
    }
    cout << endl;

    linearSort(myNum, n);

    cout << "After Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << myNum[i] << " ";
    }
    cout << endl;

    return 0;
}

