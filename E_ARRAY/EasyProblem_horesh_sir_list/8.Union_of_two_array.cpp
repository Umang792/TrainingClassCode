#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[8] = {2, 4, 3, 5, 6, 7, 9, 0};
    int arr2[6] = {5, 3, 76, 89, 21, 7};

    set<int> umg;

    // Insert all elements of arr1
    for (int i = 0; i < 8; i++) {
        umg.insert(arr1[i]);
    }

    // Insert all elements of arr2
    for (int i = 0; i < 6; i++) {
        umg.insert(arr2[i]);
    }

    cout << "Union of two arrays: ";
    for (int var : umg) {
        cout << var << " ";
    }

    return 0;
}
