K. K-On Cakes
time limit per test3 seconds
memory limit per test256 megabytes

Yui is hosting a party at the cafe. She has 𝑛
 cakes, the 𝑖
-th of which has type 𝑎𝑖
, and 𝑘
 guests, the 𝑗
-th of which has a favourite divisor 𝑑𝑗
.

Each cake can be given to at most one guest, and each guest can eat at most one cake. A guest 𝑗
 who is given cake 𝑖
 has enjoyment 1
 if 𝑑𝑗
 divides 𝑎𝑖
, and enjoyment 0
 otherwise.

Find the maximum possible total enjoyment.

Input
The first line contains two integers 𝑛
 and 𝑘
 (1≤𝑛,𝑘≤105
).

The second line contains 𝑛
 integers 𝑎1,…,𝑎𝑛
 (1≤𝑎𝑖≤105
).

The third line contains 𝑘
 integers 𝑑1,…,𝑑𝑘
 (1≤𝑑𝑗≤105
).

Output
Print one integer — the maximum total enjoyment.

Example
InputCopy
4 3
6 9 4 5
3 2 2
OutputCopy
3
Note
Yui Hirasawa is the lead guitarist in the Sakuragaoka High School light music club or "K-On" bu.


