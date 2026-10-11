A. Acai Awesomeness
time limit per test1 second
memory limit per test256 megabytes

Alex has been planning to debut a new menu item: acai bowls! Alex is in charge of preparing and selling the bowls and wants to make sure the bowls will be profitable.

The cafe has 𝑛
 pounds of acai berries. Each bowl requires exactly 𝑘
 pounds of berries and sells for 𝑑
 dollars. There are enough customers to buy every bowl Alex can make.

Alex can sell only full bowls. Any berries left over after making as many full bowls as possible cannot be sold.

Help Alex determine the maximum total amount of money, in dollars, that the cafe can earn from selling acai bowls!

Input
The only line contains three integers 𝑛
, 𝑘
, and 𝑑
 (1≤𝑛,𝑘,𝑑≤1000
): the total pounds of berries, the pounds needed per bowl, and the selling price of each bowl, respectively.

Output
Print one number: the maximum total amount of money the cafe can earn from selling acai bowls, in dollars.

Examples
InputCopy
17 5 8
OutputCopy
24
InputCopy
12 3 7
OutputCopy
28
InputCopy
4 5 10
OutputCopy
0
Note
For the first test case, Alex can make 3
 acai bowls, using 15
 pounds of acai berries with 2
 pounds left over. Since each bowl sells for 8
 dollars, in total, the profit is 3⋅8=24
 dollars.

For the second test case, Alex can make 4
 acai bowls by using all of the acai berries, which sell for a total of 4⋅7=28
 dollars.

For the third test case, Alex cannot make any acai bowls, since a single bowl costs more pounds than he has, so he cannot sell any bowls for money.
