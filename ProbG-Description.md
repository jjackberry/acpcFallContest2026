G. Generous Gratuity
time limit per test6.7 seconds
memory limit per test267 megabytes

Your friend Alan works at ACPC (Alan Cafe Programming Cafe), and for his ⌊67−6.7⋅6.7⌋
-th birthday, you decide to visit him. To celebrate this paramount and momentous occasion, you decide to tip him an amount such that both the tip and the total price, when written in cents, have "67" in the base-10 representation. Obviously, you are stingy, so you need to tip him the minimum possible amount such that the conditions are satisfied.

For 𝑇
 test cases: given a price in cents, determine the minimum tip required such that the base-10 representation of both your tip and the total price contain "67".

Input
The first line contains a single integer 𝑇
 (1≤𝑇≤104
), the number of test cases.

The 𝑇
 lines that follow each contain a single integer 𝑝
 (0≤𝑝≤109
), the price in cents.

Output
Output 𝑇
 lines, one for each test case, where each line contains a single integer 𝑥
, where 𝑥
 is the minimum positive integer such that 𝑥
 and 𝑥+𝑝
 both contain "67".

Example
InputCopy
4
0
2
4
1234
OutputCopy
67
670
667
5467
Note
For the four test cases in the sample test case, it can be shown that the following answers are optimal:

0+67=67

2+670=672

4+667=671

1234+5467=6701
