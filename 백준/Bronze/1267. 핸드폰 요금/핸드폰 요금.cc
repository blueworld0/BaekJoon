#include <iostream>
using namespace std;

int main() {
    int n;
    int Y = 0, M = 0;
    cin >> n;

    while(n--) {
        int time;
        cin >> time;

        Y += 10 * ((time / 30) + 1);
        M += 15 * ((time / 60) + 1);
    }

    if (Y < M) cout << "Y " << Y;
    else if (Y > M) cout << "M " << M;
    else cout << "Y M " << Y;

    return 0;
}