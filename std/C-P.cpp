#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    ::std::string s;

    while (::std::cin >> s) {
        if (s == "Hello") {
            ::std::cout << "World\n";
            exit(0);
        }
    }

    ::std::cout << "Hello\n";
    return 0;
}
