#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i += K) {

        long long mn = a[i];

        for (int j = i; j < i + K && j < N; j++) {
            mn = min(mn, a[j]);
        }

        cout << mn << " ";
    }

    return 0;
}