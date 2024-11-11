#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int combined[10];

    for (int i = 0; i < 5; i++) {
        combined[i] = arr1[i];
    }

    for (int i = 0; i < 5; i++) {
        combined[i + 5] = arr2[i];
    }

    cout << "Combined arrays: ";
    for (int i = 0; i < 10; i++) {
        cout << combined[i] << " ";
    }

    return 0;
}
