#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int a, b;
        std::cin >> a >> b;
        int sum = a + 2 * b;
        if (sum % 2 == 0 && a >= sum / 2 % 2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}