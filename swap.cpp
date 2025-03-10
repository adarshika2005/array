#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int even[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    int odd[5] = {1, 6, 3, 4, 5};

    swapAlternate(even, 8);
    printArray(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}