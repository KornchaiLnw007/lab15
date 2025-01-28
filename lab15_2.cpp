#include <iostream>
#include <algorithm>
using namespace std;

void sort(int[], int);
int main() {
    int data[] = {7,8,2,1,2,4,6,9,0,1}; 

    cout << "Before: ";
    for (int i = 0; i < 10; i++) {
        cout << data[i] << " ";
    }

    sort(&data[0], 5); 
    sort(&data[5], 5); 

    cout << "\nAfter: ";
    for (int i = 0; i < 10; i++) {
        cout << data[i] << " ";
    }

    return 0;
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
