#include <bits/stdc++.h>

int arr[2022];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    ::std::cin >> n;

    assert(n & 1);

    int ans {};

    for (int i = 0; i < n; i++) {
        int x; ::std::cin >> x;
        ans ^= x;
    }

    ::std::cout << ans << "\n";
    return 0;
}
