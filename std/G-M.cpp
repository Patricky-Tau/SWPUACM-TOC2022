#include <bits/stdc++.h>

auto main() -> int {
    using db = double;

    struct point { db x, y; };
    auto turn = [&] {
        static point dir {0, 1};

        const db sinSextile = 0.86602540378;
        const db cosSextile = 0.5;
        auto turnSextile = [&](point a) {
            return point {
                x: a.x * cosSextile - a.y * sinSextile,
                y: a.x * sinSextile + a.y * cosSextile
            };
        };

        return ::std::exchange(dir, turnSextile(dir));
    };

    ::std::string s;
    ::std::cin >> s;

    point p[6]{};

    p[0] = turn();
    for (int i = 5; ~i; i--) {
        p[i] = turn();
    }

    for (int i = 0; i < 6; i++) {
        int level = s[i] == 'O' ? 0 : s[i] == 'X' ? 6 : int(5 - s[i] + 'A');
        p[i].x *= level;
        p[i].y *= level;
    }

    auto crsx = [](point a, point b) { return a.x * b.y - a.y * b.x; };

    db ans = 0;
    for (int i = 6; ~i; i--) {
        ans += crsx(p[i == 6 ? 0 : i], p[i == 6 ? 5 : i - 1]);
    }

    ::std::cout << ::std::fixed << ::std::setprecision(10) << ans / 2 << "\n";

    return 0;
}

// BXCACA
