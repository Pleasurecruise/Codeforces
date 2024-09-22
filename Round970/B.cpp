#include <iostream>
#include <cmath>
#include <string>

bool isPerfectSquare(int n) {
    int r = std::sqrt(n);
    return r * r == n;
}

bool isBeautifulBinaryMatrix(const std::string& s, int r) {
    int n = r * r;

    for (int i = 0; i < r; ++i) {
        if (s[i] != '1' || s[n - r + i] != '1') {
            return false;
        }
    }

    for (int i = 1; i < r - 1; ++i) {
        if (s[i * r] != '1' || s[(i + 1) * r - 1] != '1') {
            return false;
        }
        for (int j = 1; j < r - 1; ++j) {
            if (s[i * r + j] != '0') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::string s;
        std::cin >> n >> s;

        if (!isPerfectSquare(n)) {
            std::cout << "No" << std::endl;
            continue;
        }

        int r = std::sqrt(n);

        if (isBeautifulBinaryMatrix(s, r)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
