// 4,6,8,4,6,8,9,1
// 9,9,9,9,9,9,9,1

//buy sell
//rain problem

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a1[] = {4, 6, 8, 4, 6, 8, 9, 1};
    int n = sizeof(a1)/sizeof(a1[0]);
    int a2[n];

    // Step 1: Build a2 (max to the right of each element)
    a2[n-1] = -1; // last has no element to right
    for(int i = n-2; i >= 0; i--) {
        a2[i] = max(a1[i+1], a2[i+1]);
    }

    // Step 2: Compare and find leaders
    cout << "Leaders: ";
    for(int i=0; i<n; i++) {
        if(a1[i] > a2[i]) {
            cout << a1[i] << " ";
        }
    }
}
