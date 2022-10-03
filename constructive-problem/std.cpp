#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  std::cin >> n;

  std::vector<std::vector<int>> g(n, std::vector<int>(n, 0));
  for (int i = 0, f; i < n; ++i) {
    std::cin >> f;
    g[i][0] = f;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = g[i][0]; j <= n; ++j) {
      std::cout << j << " ";
    }
    for (int j = 1; j < g[i][0]; ++j) {
      std::cout << j << " ";
    }
    std::cout << "\n";
  }

  return 0;
}
