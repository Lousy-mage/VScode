#include <iostream>
using namespace std;

void customSort(int *a, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) { // Corrected the sorting logic here
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout<<endl;
}

int main() {
    int A[] = {10, 20, 70, 75, 64, 99, 23, 31, 99, 23};
    int n = sizeof(A) / sizeof(A[0]);

    cout << n << endl;
    customSort(A, n); // Corrected the function call here

    return 0;
}
