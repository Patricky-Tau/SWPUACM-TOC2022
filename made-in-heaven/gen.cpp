#include <bits/stdc++.h>
#include <random>

auto main() -> int {

    static const char datas[] = "ABCDEOX";

    ::std::mt19937 gen{ ::std::random_device{}() };

    for (int i = 0; i < 6; ++i) {
        ::std::cout << datas[ ::std::uniform_int_distribution<int>(0, 5)(gen) ];
    }

    return 0;
}
