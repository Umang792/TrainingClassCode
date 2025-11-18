//solve again

#include <iostream>
using namespace std;

int main() {
    int arr[21] = {1,1,8,9,0,1,1,1,3,5,1,5,6,1,1,1,1,1,9,0,4};

    int count = 0;  // to count current streak of 1s
    int var = 0;    // to store max consecutive 1s

    for (int i = 0; i < 21; i++) {
        if (arr[i] == 1) {
            count++;  // increase count while 1s continue
        } else {
            var = max(var, count);  // update max before resetting
            count = 0;              // reset count when non-1 found
        }
    }

    // Handle case if array ends with 1s
    var = max(var, count);

    cout << "Maximum consecutive 1s = " << var;

    return 0;
}
