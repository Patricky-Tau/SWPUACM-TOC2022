# Description

$\rm Xor\; (exclusive\;OR)$ is a basic <b>bitwise</b> operation. If you know nothing about that, go to <a href="#note"><b><font color="lightskyblue">NOTE</font></b></a>.

You must have learnt array! In this problem, you are given with two positive integers $N, K$, and also an array $\{A\}$ of length $N$.

You need to count the pairs $(i, j)$ （where $1 \le i \lt j \le N$）such that $A_i \oplus A_j = X$.

# Format

## Input

The first line contains two positive integers $N, X$.

The second line contains $N$ positive integers, indicate the array $\{A\}$.

## Constraints

- $1 \le N \le 10 ^ 5$
- $1 \le X \le 10 ^ 5$
- $1 \le A_i \le 10 ^ 5$ 其中 $(1 \le i \le N)$

## Output

Print the answer.

# Sample1

```input1
2 3
1 2
```

```output1
1
```

Explanation: The only $2$ numbers meet $1 \oplus 2 = 3$.

# Sample2

```input2
6 1
5 1 2 3 4 1
```

```output2
2
```

Explanation: the $2$ pairs are  $(i, j) = (1, 5), (3, 4)$.

---

# Note

<p id="note"></p>

> Xor, always expressed with $a \oplus b$. You can use `a ^ b` in `C/C++`.
> 
> The basic rule of xor is that <b><u style="text-decoration-style: wavy;">is true if and only if its arguments differ</u></b>, which is to say:
> 
> $$
> 0 \oplus 0 = 1 \oplus 1 = 0\\
> 1 \oplus 0 = 0 \oplus 1 = 1
> $$
> 
> Xor is a <b>bitwise</b> operation, which means the operation in one bit will NOT effects other bits.
> 
> Use binary before calculating xor. For example, $9 \oplus 13 = 1001_{(2)} \oplus 1101_{(2)} = 0100_{(2)} = 4$.

# Solution

It's easy to discover that $x \oplus y = z \Leftrightarrow x \oplus z = y$. So it's mainly to count the numbers of $a_i \oplus x$.

Using an array is enough.

By the way, there are at most $\binom{N}{2}$ pairs, you better use `long long`.

```cpp
#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int N, X;
    std::cin >> N >> X;

    int c[100010]{};

    long long ans{};
    for (int i = 0, x; i < N; ++i) {
        std::cin >> x;
        ans += c[x ^ X];
        c[x] += 1;
    }

    std::cout << ans << "\n";

    return 0 ^ 0;
}
```

