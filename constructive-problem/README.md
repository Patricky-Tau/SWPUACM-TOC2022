<b>It is the hard version of the problem. The only difference is that in this version a flavor has been placed in column $1$ each row.</b>

# Description

PiPi has been loving the <b>F5<sup>®</sup> coffees</b> lately, and they're packaged like some keys, very endearing:

<center><img src="./28/file/MZM1_83TMEBYGcgQyDnep.jpeg" width=200></center>

Now that PiPi has collected $n$ each of $n$ flavors of coffee, he wants to arrange them into a $n \times n$ matrix so that no two identical flavors are next to each other. To make this more interesting, initially a flavor has been placed in column 1 of each row.

If there are multiple answers, print any of them.

# Format

## Input

The input contains an integer $n$ with the meaning described in the title.

## Constraints

- $1 \le n \le 10^3$
- $1 \le f_i \le n$
- No two coffees given with same flavor share an edge.

## Output

Output a matrix of $n \times n$ where each flavor is described by $1, 2, 3, \cdots, n$.

# Sample

```input1
3
1 2 3
````

```output1
1 2 1
2 3 2
3 1 3
```

