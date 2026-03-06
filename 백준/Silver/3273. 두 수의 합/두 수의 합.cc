#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int num, count = 0;
    cin >> num;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] < num) {
            int find = num - v[i];
            if (binary_search(v.begin() + i + 1, v.end(), find)) count++;
        }
    }

    cout << count;

    return 0;
}