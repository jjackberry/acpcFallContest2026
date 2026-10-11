B. Brady's Boba
time limit per test1 second
memory limit per test256 megabytes

Brady is very particular about his boba preferences: he does not like it when the boba pearls are the same color as the drink itself. BonAppeTea sells 𝑑
 different drink types and 𝑝
 different pearl types. Each drink type and each pearl type have an associated color. Given this information, how many valid combinations can Brady make such that the selected drink and pearl have different colors?

Two combinations are considered different if they have different drink types or different pearl types, even if the colors themselves are the same.

Input
The first line contains two integers, 𝑑
 and 𝑝
 (1≤𝑑,𝑝≤1000
), representing the number of drink types and pearl types, respectively.

The second line contains 𝑑
 integers 𝑎1,...,𝑎𝑑
 (1≤𝑎𝑖≤2000
), representing the color of each drink type.

The third line contains 𝑝
 integers 𝑏1,...,𝑏𝑝
 (1≤𝑏𝑖≤2000
), representing the color of each pearl type.

Output
Output a single integer, the number of valid combinations Brady can make such that the color of the drink and the color of the pearl are different.

Examples
InputCopy
2 3
1 2
3 4 5
OutputCopy
6
InputCopy
3 2
1 2 3
1 2
OutputCopy
4
InputCopy
1 1
1
1
OutputCopy
0
InputCopy
3 5
8 3 5
1 10 8 8 3
OutputCopy
12
Note
For test case 1, every drink type can be paired with every pearl type, for a total of 6 valid combinations.

For test case 2, drink 1 can be paired with pearl 2, drink 2 can be paired with pearl 1, and drink 3 can be paired with pearl 1 and pearl 2, for a total of 4 valid combinations.

For test case 3, the only pairing of drink 1 and pearl 1 is invalid, so there are 0 valid combinations.

For test case 4, the valid pairings, in the form of (drink type, pearl type), are:

(1,1),(1,2),(1,5),

(2,1),(2,2),(2,3),(2,4),

(3,1),(3,2),(3,3),(3,4),(3,5)
