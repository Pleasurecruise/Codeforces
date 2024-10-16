#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long total_wealth = 0;
        int max_wealth = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_wealth += a[i];
            max_wealth = max(max_wealth, a[i]);
        }

        long long left = 0, right = 1e12;
        long long result = -1;

        while (left <= right) {
            long long x = (left + right) / 2;
            long long new_total_wealth = total_wealth + x;
            double unhappy_threshold = (double)new_total_wealth / (2 * n);

            int unhappy_count = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] < unhappy_threshold) {
                    unhappy_count++;
                }
            }

            if (unhappy_count > n / 2) {
                result = x;
                right = x - 1;
            } else {
                left = x + 1;
            }
        }

        if(n == 1 || n ==2) {
            cout << -1 << endl;
        }else {
            cout << result << endl;
        }
    }

    return 0;
}
