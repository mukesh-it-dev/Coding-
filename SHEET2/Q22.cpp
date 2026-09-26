#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int count = 0;

        while (N > 0) {
            if (N % 2 == 1)
                count++;

            N = N / 2;
        }
        int ans = 0;

        for (int i = 0; i < count; i++) {
            ans = ans * 2 + 1;
        }

        cout << ans << endl;
    }

    return 0;
}