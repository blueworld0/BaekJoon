#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int arr1[26] = {};
    int arr2[26] = {};
    for (int i = 0; i < a.length(); i++) {
        arr1[a[i] - 'a']++;
    }

    for (int i = 0; i < b.length(); i++) {
        arr2[b[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (arr1[i] != arr2[i]) {
            count += abs(arr1[i] - arr2[i]);
        }
    }

    cout << count;

    return 0;
}