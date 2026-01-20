#include <iostream>

using namespace std;

void solve() {
    long long P, K, N;
    if (!(cin >> P >> K >> N)) return;

    long long courses = N / P;
    long long total_finished = courses;
    long long current_bundle = courses;

    while (current_bundle >= K) {
        long long new_free = current_bundle / K;
        long long remainder = current_bundle % K;

        total_finished += new_free;
        current_bundle = new_free + remainder;
    }

    cout << total_finished << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}
