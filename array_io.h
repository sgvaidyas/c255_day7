#include <iostream>

using namespace std;

void array1d_input(int a[], int n, string msg) {
    cout << msg << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void array1d_output(int a[], int n, string msg) {
    cout << msg << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void array2d_input(int a[][100], int r, int c, string msg) {
    cout << msg << endl;
    for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin>>a[i][j];
        }
        
    }
}

void array2d_output(int a[][100], int r, int c, string msg) {
    cout << msg << endl;
    for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }
    cout << endl;
}
