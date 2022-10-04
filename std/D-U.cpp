#include <bits/stdc++.h>

int arr[2022];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    ::std::cin >> n;

    assert(n & 1);

    for (int i = 0; i < n; i++) {
        int x; ::std::cin >> x;
        x += 1000;
        assert(x >= 0 && x <= 2000);
        arr[x] += 1;
    }

    for (int i = 0; i <= 2000; ++i) {
        if (arr[i] == 1) {
            ::std::cout << i - 1000 << "\n";
            return 0;
        }
    }

    return 0;
}
