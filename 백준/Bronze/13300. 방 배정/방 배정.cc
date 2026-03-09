#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6][2];
    for (int i = 0; i < 6; i++) {
        for(int j = 0; j < 2; j++) {
            arr[i][j] = 0;
        }
    }

    int n, k;
    cin >> n >> k;

    while (n--) {
        int s, y;
        cin >> s >> y;
        arr[--y][s]++;
    }

    int room = 0;
    for (int i = 0; i < 6; i++) {
        for(int j = 0; j < 2; j++) {
            room += (arr[i][j] / k);
            if ((arr[i][j] % k) != 0) room++;
        }
    }
    cout << room;
    return 0;
}