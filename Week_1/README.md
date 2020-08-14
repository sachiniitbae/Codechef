# Codechef
######################################################################################################
# Contest Code:PRACTICE Problem Code:MATCHES

Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.

The first thing Chefu wanted to do was to calculate the result of his homework — the sum of A and B, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.

Digits are formed using matches in the following way: 
https://codechef_shared.s3.amazonaws.com/download/Images/COOK110/MATCHES/97JCfQw.gif


Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers A and B.
Output
For each test case, print a single line containing one integer — the number of matches needed to write the result (A+B).

Constraints
1≤T≤1,000
1≤A,B≤106
Example Input
3
123 234
10101 1010
4 4
Example Output
13
10
7
Explanation
Example case 1: The result is 357. We need 5 matches to write the digit 3, 5 matches to write the digit 5 and 3 matches to write the digit 7.

Example case 2: The result is 11111. We need 2 matches to write each digit 1, which is 2⋅5=10 matches in total.


######################################################################################################
# Contest Code:PRACTICE Problem Code:LUCKFOUR

Kostya likes the number 4 much. Of course! This number has such a lot of properties, like:

Four is the smallest composite number;
It is also the smallest Smith number;
The smallest non-cyclic group has four elements;
Four is the maximal degree of the equation that can be solved in radicals;
There is four-color theorem that states that any map can be colored in no more than four colors in such a way that no two adjacent regions are colored in the same color;
Lagrange's four-square theorem states that every positive integer can be written as the sum of at most four square numbers;
Four is the maximum number of dimensions of a real division algebra;
In bases 6 and 12, 4 is a 1-automorphic number;
And there are a lot more cool stuff about this number!
Impressed by the power of this number, Kostya has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

Input
The first line of input consists of a single integer T, denoting the number of integers in Kostya's list.

Then, there are T lines, each of them contain a single integer from the list.

Output
Output T lines. Each of these lines should contain the number of occurences of the digit 4 in the respective integer from Kostya's list.

Constraints
1 ≤ T ≤ 105
(Subtask 1): 0 ≤ Numbers from the list ≤ 9 - 33 points.
(Subtask 2): 0 ≤ Numbers from the list ≤ 109 - 67 points.
Example
Input:
5
447474
228
6664
40
81

Output:
4
0
1
1
0

######################################################################################################
# Contest Code:PRACTICE Problem Code:PCJ18B

Chef has recently been playing a lot of chess in preparation for the ICCT (International Chef Chess Tournament).

Since putting in long hours is not an easy task, Chef's mind wanders elsewhere. He starts counting the number of squares with odd side length on his chessboard..

However, Chef is not satisfied. He wants to know the number of squares of odd side length on a generic N∗N chessboard.

Input:
The first line will contain a single integer T, the number of test cases.
The next T lines will have a single integer N, the size of the chess board.
Output:
For each test case, print a integer denoting the number of squares with odd length.

Constraints
1≤T≤100
1≤N≤1000
Sample Input:
    2
    3
    8
Sample Output:
    10
    120
   

######################################################################################################
# Contest Code:PRACTICE Problem Code:ICL1902

In the 2-D world of Flatland, the Circles were having their sports day and wanted to end it with a nice formation. So, they called upon Mr. Sphere from Spaceland for help. Mr Sphere decides to arrange the Circles in square formations. He starts with N Circles and forms the largest possible square using these Circles. He then takes the remaining Circles and repeats the procedure. A square of side S requires S2 Circles to create.

Find the number of squares he will be able to form at the end of the process.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single integer N.
Output:
For each testcase, output a single integer denoting the number of squares.

Constraints
1≤T≤1000
1≤N≤1000
Sample Input:
2
85
114

Sample Output:
2
4

EXPLANATION:
Test case 1 : Mr Sphere forms a square of side 9 using 81 Circles and then forms a square of side 2 using the remaining 4.

######################################################################################################
# Contest Code:PRACTICE Problem Code:SNCKYEAR

Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.

SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.

Input
The first line contain the number of test-cases T.

The first line of each test-case contains a single integer N.

Output
For each test case print a single line containing the string "HOSTED" if SnackDown was hosted in year N or "NOT HOSTED" otherwise (without quotes).

Constraints
1≤T≤10
2010≤N≤2019
Example Input
2
2019
2018
Example Output
HOSTED
NOT HOSTED
