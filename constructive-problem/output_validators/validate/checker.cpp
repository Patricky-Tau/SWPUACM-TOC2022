#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  registerTestlibCmd(argc, argv);

  int n = inf.readInt();

  std::vector f(n, 0);
  for (int i = 0; i < n; ++i) {
    f[i] = inf.readInt();
  }

  vector g(n, std::vector(n, 0));

  map<int, int> c;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      g[i][j] = ouf.readInt();
      c[g[i][j] - 1] += 1;
    }
  }

  for (int i = 0; i < n; ++i) {
    if (g[i][0] != f[i]) {
      quitf(_wa, "Flavor in row %d did'nt match input!", i + 1);
    }
  }

  for (int i = 0; i < n; ++i) {
    if (c[i] != n) {
      quitf(_wa, "Dupulicate key exists.");
    }
  }

  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - 1; ++j) {
      if (g[i][j] == g[i + 1][j]) {
        quitf(_wa, "Row %d, col %d is the same as Row %d col %d", i, j, i + 1,
              j);
      } else if (g[i][j] == g[i][j + 1]) {
        quitf(_wa, "Row %d, col %d is the same as Row %d col %d", i, j, i,
              j + 1);
      }
    }
  }

  quitf(_ok, "You are right!");

  return 0 ^ 0;
}
