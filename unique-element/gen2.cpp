#include <algorithm>
#include <bits/stdc++.h>

auto main() -> int {

    ::std::mt19937 gen{ ::std::random_device{}() };

    int n = ::std::uniform_int_distribution<int>(1, 50000)(gen) * 2 - 1;;
    assert(n & 1);

    ::std::cout << n << "\n";

    auto rng = [&] { return ::std::uniform_int_distribution<int>(-1000, 1000)(gen); };

    ::std::map<int, int> mp;

    int tn = n - 1;

    auto rngN = [&] { return ::std::uniform_int_distribution<int>(0, tn)(gen); };
    while (tn) {
        int x = rngN();
        tn -= x;
        mp[rng()] += x;
    }

    if (mp.size() == 2001) {
        int x = rng();
        int y = rng();
        while (x == y) { y = rng(); }

        mp[x] += mp[y];
        mp[y] = 1;
    } else {
        int x = rng();
        while (mp.count(x)) {
            x = rng();
        }
        mp[x] = 1;
    }

    ::std::vector a(0, 0);
    a.reserve(n);

    for (auto [k, v] : mp) {
        for (int i = 0; i < v; i++) {
            a.push_back(k);
        }
    }

    assert(a.size() == n);

    ::std::shuffle(a.begin(), a.end(), gen);
    ::std::shuffle(a.begin(), a.end(), gen);

    for (int i = 0; i < n; i++) {
        ::std::cout << a[i] << " \n"[i == n - 1];
    }

    return 0;
}
