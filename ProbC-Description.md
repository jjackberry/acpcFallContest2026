C. Coffee Conundrum
time limit per test2 seconds
memory limit per test256 megabytes

The ACPC Cafe has received a brand-new AI-powered SaaS YC startup subscription-based eco-friendly coffee machine. The machine takes exactly 𝑚
 minutes to prepare one cup of coffee and can prepare only one cup at a time.

The machine's premium subscription includes precognition: it knows exactly how much every customer is willing to pay, every day. Apparently, predicting the future is easier than making coffee faster. Armed with this information, the machine may refuse a paying customer's order to keep itself available for a bigger spender on the way.

There are 𝑛
 total customers throughout the day. A customer arrives every minute, so customer 𝑖
 arrives at minute 𝑖
, and each customer is willing to pay 𝑐𝑖
 dollars for a cup of coffee.

The machine is initially idle. When a customer arrives, the following rules apply:

If the machine is preparing a coffee, the customer leaves immediately without buying anything.
If the machine is idle, it may either accept the customer's order or refuse it. If it accepts, it starts preparing their coffee immediately. That customer waits until it is ready and then pays 𝑐𝑖
 dollars.
An order started at minute 𝑖
 finishes at minute 𝑖+𝑚
. If another customer arrives at that exact minute, the machine is already idle and may accept their order. The machine cannot prepare coffee in advance or save a customer's order for later, as the cafe has not paid for those subscription tiers (sponsors please?). Orders may finish after minute 𝑛
, and those customers will still pay for their coffee.

The cafe cannot comprehend the methods of the coffee machine, but is interested in knowing how much money it will earn anyway, to see if the subscription is worth it. They've tasked you with calculating the maximum possible earnings that the machine will generate throughout the day. Given the number of customers, the preparation time, and precognition that reports how much each customer is willing to pay, determine the maximum total earnings.

Input
The first line contains two integers 𝑛
 and 𝑚
 (1≤𝑛,𝑚≤2⋅105
): the number of customers and the number of minutes needed to prepare one coffee.

The second line contains 𝑛
 integers 𝑐1,𝑐2,…,𝑐𝑛
 (1≤𝑐𝑖≤109
): the amount each customer is willing to pay, in dollars.

Output
Output one integer: the maximum total amount of money the machine can earn for the cafe. Note that the answer may exceed the range of a 32-bit integer.

Examples
InputCopy
6 2
5 100 5 5 100 5
OutputCopy
200
InputCopy
5 2
8 3 7 4 6
OutputCopy
21
InputCopy
4 6
4 9 3 7
OutputCopy
9
InputCopy
3 1
2 4 6
OutputCopy
12
Note
For the first testcase, the machine accepts orders from customers 2
 and 5
, earning 100+100=200
 dollars. The first coffee finishes at minute 4
, but the machine refuses customer 4
's order to keep itself available for customer 5
. The second coffee finishes at minute 7
, after the last customer, but is paid for anyway.

For the third test case, the machine can only make a single order in the time it takes for all the customers to arrive, so it simply picks the customer that is willing to pay the most, making 9
 dollars.


