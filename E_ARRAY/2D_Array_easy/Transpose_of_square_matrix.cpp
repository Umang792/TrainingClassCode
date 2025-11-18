
//do itself one more time
#include <iostream>
using namespace std;

int main() {
    int arr[10][10];
    int rs, cs;

    cout << "Enter the number of rows: ";
    cin >> rs;
    cout << "Enter the number of columns: ";
    cin >> cs;

    cout << "Enter the elements of the matrix:\n";
    for (int r = 0; r < rs; r++) {
        for (int c = 0; c < cs; c++) {
            cin >> arr[r][c];
        }
    }

    cout << "\nMatrix is:\n";
    for (int r = 0; r < rs; r++) {
        for (int c = 0; c < cs; c++) {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    int arr2[10][10];

    // ✅ Create transpose
    for (int r = 0; r < rs; r++) {
        for (int c = 0; c < cs; c++) {
            arr2[c][r] = arr[r][c];
        }
    }

    cout << "\nTranspose of Matrix:\n";
    for (int r = 0; r < cs; r++) {  // swapped dimensions
        for (int c = 0; c < rs; c++) {
            cout << arr2[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}






//swapping method

#include <iostream>
using namespace std;

int main() {
    int arr[10][10];
    int n;

    cout << "Enter the size of square matrix (n x n): ";
    cin >> n;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ✅ In-place transpose using swapping
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "\nTranspose of Matrix (Using Swapping):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
