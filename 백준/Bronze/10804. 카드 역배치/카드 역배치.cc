#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    for (int i = 0; i <= 20; i++) {
        vec.push_back(i);
    }

    for (int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;
        reverse(vec.begin() + a, vec.begin() + b + 1);
    }

    for (int i = 1; i <= 20; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}