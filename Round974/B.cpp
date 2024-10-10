#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        int first = n - k + 1;
        int odd_count = 0;

        if (first % 2 == 0 && n % 2 == 0) {
            odd_count = k / 2;
        } else if (first % 2 == 1 && n % 2 == 1) {
            odd_count = (k + 1) / 2;
        } else {
            odd_count = k / 2;
        }

        if (odd_count % 2 == 0) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}
