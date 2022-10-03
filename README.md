2022 SWPUACM Try-out Competition
---

题目的数据、标程以及题面 $\rm \LaTeX$ 代码均保存于仓库 <>。

A. Sudoku
---

> 题意：判定给定填满的数独是否已经取胜。

对每一行、列、宫模拟即可。

B. Where is the Maximum
---

> 题意：找到材料第一段落最长的单词。

$\rm frustrated$ 即为所求。

C. Print World to Hello
---

> 题意：直到 `EOF`，给定若干大小写字母组成的单词、空格以及换行。如果其中出现 $\rm Hello$, 回复 $\rm World$，否则回复 $\rm Hello$，大小写敏感。

读入单词，逐一比较即可。

note: [`scanf` 的返回值](https://en.cppreference.com/w/c/io/fscanf#Return_value) 如果是宏 [`EOF`](https://en.cppreference.com/w/c/io#Macro_constants)（<u>并不一定是</u> $-1$[^1]）表示读尽文件。

fun: 笔者在 <https://www.zhihu.com/question/35972112/answer/77218287> 看到了这段诗，顺便做了题面中的翻译。

[^1]: 请见 <https://www.open-std.org/JTC1/SC22/WG14/www/docs/n1256.pdf> 第 $274$ 页。

D. Unique Element
---

> 题意：在 $10^5$ 个介于 $[-1000, 1000]$ 的元素中找出只出现一次的元素。

在值域上开一个数组，可以通过 $\pm 1000$ 的方式映射。

E. Amazing Pairs
---

> 题意：计算对子 $\langle i, j\rangle$ 的数量，其中 $a_i \oplus a_j = k \; (n, k, a_i \in [1, 10 ^ 5])$

考虑 $x \oplus y = z \Leftrightarrow x \oplus z = y$，于是原问题转变为对于每一个 $x \in \{a\}$，计算此前出现过的 $x \oplus k$ 的数量。复杂度与 $\max\{a_i \oplus a_j\}$ 相关。

F. Constructive Problem
---

> 题意：在第一列已放置了若干元素的 $n \times n$ 矩阵上放置 $n$ 种元素，各 $n$ 个。要求相邻元素不相同。

「旋转」(rotate) 数组，在每一行都放置 $1 \sim n$ 的元素即可。由于第一列不重复，整张图也不重复。

bonus: 尝试实现在每一行的任一位置放上一个元素的构造。

fun: 本题原来有三个难度等级，另外两个被砍了。

G. Made in Heaven
---

> 题意：计算顺时针给定的能力六点雷达图面积。

读者应当已经完成 [HDU100题中的如何计算多边形面积一题](http://acm.hdu.edu.cn/showproblem.php?pid=2036)。计算出每个点的坐标之后，即可按照该方法使用叉积计算面积。注意，你应当<u>尽量</u>减少浮点数除法的使用。

fun: [JoJo](https://search.bilibili.com/all?keyword=JOJO%E7%9A%84%E5%A5%87%E5%A6%99%E5%86%92%E9%99%A9) 真的很有意思。