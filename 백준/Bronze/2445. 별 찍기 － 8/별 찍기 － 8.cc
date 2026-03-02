#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;


    for (int i = 1; i <= n; i++) {
        for (int a = 0; a < i; a++) {
            cout << "*";
        }
        for (int b = n - i; b > 0; b--) {
            cout << " ";
        }
        for (int b = n - i; b > 0; b--) {
            cout << " ";
        }
        for (int a = 0; a < i; a++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i < n; i++) {
        for (int b = n - i; b > 0; b--) {
            cout << "*";
        }
        for (int a = 0; a < i; a++) {
            cout << " ";
        }
        for (int a = 0; a < i; a++) {
            cout << " ";
        }
        for (int b = n - i; b > 0; b--) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}