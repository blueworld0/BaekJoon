#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < str.length(); i++) {
        arr[str[i] - '0']++;
    }

    int mid = ((arr[6] + arr[9]) / 2) + ((arr[6] + arr[9]) % 2);
    arr[6] = mid;
    arr[9] = mid;

    cout << *max_element(arr, arr + 10);
    return 0;

}
