#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sp = n - 1;

    for (int i = 1; i <= n; i++) {
        int st = i * 2 - 1;
        for (int j = 0; j < sp; j++) {
            cout << " ";
        }
        for (int k = 0; k < st; k++) {
            cout << "*";
        }
        sp--;
        cout << "\n";
    }
    return 0;
}