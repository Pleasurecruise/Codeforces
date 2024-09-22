#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t < 1 || t > 10000) {
        std::cin >> t;
    }
    for (int i = 0; i < t; ++i) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            std::cin >> a[j];
        }

        int p = 0;
        int q = 0;

        for (int j = 0; j < n; ++j) {
            if (a[j] >= k) {
                p += a[j];
            } else if (a[j] == 0 && p > 0) {
                q++;
                p--;
            }
        }

        std::cout << q << std::endl;
    }
    return 0;
}