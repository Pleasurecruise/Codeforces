#include <iostream>

int solve(int l, int r) {
    int n = 0;
    for (int i = 0; i <= r - l; ++i) {
        l += i;
        if (l <= r) {
            n += 1;
        }else{
            break;
        }
    }
    return n;
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int l,r;
        std::cin >> l >> r;
        int res = solve(l,r);
        std::cout << res << std::endl;
    }
}
