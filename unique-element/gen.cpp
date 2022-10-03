#include <algorithm>
#include <bits/stdc++.h>

auto main() -> int {

    ::std::mt19937 gen{ ::std::random_device{}() };

    int n = ::std::uniform_int_distribution<int>(1, 50000)(gen) * 2 - 1;;
    assert(n & 1);

    ::std::cout << n << "\n";

    auto rng = [&] { return ::std::uniform_int_distribution<int>(-1000, 1000)(gen); };

    ::std::vector a(0, 0);
    a.reserve(n);

    ::std::map<int, int> mp;

    for (int i = 1; i <= n - 1; i += 2) {
        int x = rng();
        a.push_back(x);
        a.push_back(x);
        mp[x] += 2;
    }

    assert(a.size() == n - 1);

    bool flag = true;
    for (int i = -1000; i <= 1000; i ++) {
        if (!mp.count(i)) {
            a.push_back(i);
            flag = false;
            break;
        }
    }

    if (flag) {
        decltype(a){}.swap(a);
        a.reserve(n);

        int x = rng();
        int y = rng();
        while (y == x) { y = rng(); }

        mp[y] += mp[x];
        mp[x] = 1;

        for (int i = -1000; i <= 1000; i ++) {
            for (int t = 0; t < mp[i]; t ++) {
                a.push_back(i);
            }
        }

        if (a.size() != n) {
            ::std::cout << "a.size() ? n := " << a.size() << " " << n << "\n";
            assert(false);
        }
    }

    ::std::shuffle(a.begin(), a.end(), gen);
    ::std::shuffle(a.begin(), a.end(), gen);

    for (int i = 0; i < n; i++) {
        ::std::cout << a[i] << " \n"[i == n - 1];
    }

    return 0;
}
