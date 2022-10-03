#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int N, k;
    std::cin >> N >> k;

    int c[100010]{};

    long long ans{};
    for (int i = 0, x; i < N; ++i) {
        std::cin >> x;
        ans += c[x ^ k];
        c[x] += 1;
    }

    std::cout << ans << "\n";

    return 0 ^ 0;
}
