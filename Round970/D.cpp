#include <iostream>
#include <vector>
#include <string>

void solve() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> p(n + 1);
        std::vector<char> color(n + 1);

        for (int i = 1; i <= n; ++i) {
            std::cin >> p[i];
        }

        std::string s;
        std::cin >> s;
        for (int i = 1; i <= n; ++i) {
            color[i] = s[i - 1];
        }

        std::vector<int> F(n + 1, 0);
        std::vector<bool> visited(n + 1, false);

        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                std::vector<int> cycle;
                int count_black = 0;
                int current = i;

                while (!visited[current]) {
                    visited[current] = true;
                    cycle.push_back(current);

                    if (color[current] == '0') {
                        ++count_black;
                    }

                    current = p[current];
                }

                for (int x : cycle) {
                    F[x] = count_black;
                }
            }
        }

        for (int i = 1; i <= n; ++i) {
            std::cout << F[i] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    solve();
    return 0;
}
