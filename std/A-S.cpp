#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    static constexpr int n = 9;

    std::array<std::array<int, n>, n> sudoku{};

    for (auto& r : sudoku) {
        for (auto& e : r) {
            std::cin >> e;
        }
        if (std::set<int>(r.begin(), r.end()).size() != n) {
            std::cout << "NO\n";
            return 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        std::set<int> s;
        for (int j = 0; j < n; ++j) {
            s.insert(sudoku[j][i]);
        }
        if (s.size() != n) {
            std::cout << "NO\n";
            return 0;
        }
    }

    for (int i = 0; i < n; i += 3) {
        for (int j = 0; j < n; j += 3) {
            std::set<int> s;
            for (int k = 0; k < 3; ++k) {
                for (int l = 0; l < 3; ++l) {
                    s.insert(sudoku[i + k][j + l]);
                }
            }
            if (s.size() != n) {
                std::cout << "NO\n";
                return 0;
            }
        }
    }

    std::cout << "YES\n";

    return 0 ^ 0;
}
