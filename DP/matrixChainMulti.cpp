
Related Articles
▲
Related Articles
Find median in row wise sorted matrix
Matrix Multiplication | Recursive
Program to multiply two matrices
Divide and Conquer | Set 5 (Strassen’s Matrix Multiplication)
Easy way to remember Strassen’s Matrix Equation
Strassen’s Matrix Multiplication Algorithm | Implementation
Matrix Chain Multiplication | DP-8
Matrix Chain Multiplication (A O(N^2) Solution)
Printing brackets in Matrix Chain Multiplication Problem
Median of two sorted arrays of different sizes
Median of two sorted arrays of same size
Median of two sorted arrays with different sizes in O(log(min(n, m)))
Median of two sorted arrays of different sizes | Set 1 (Linear)
Program for Fibonacci numbers
Largest Sum Contiguous Subarray
0-1 Knapsack Problem | DP-10
Longest Common Subsequence | DP-4
Longest Increasing Subsequence | DP-3
Coin Change | DP-7
Subset Sum Problem | DP-25
Longest Palindromic Substring | Set 1
Sieve of Eratosthenes
Bellman–Ford Algorithm | DP-23
Floyd Warshall Algorithm | DP-16
Minimum number of jumps to reach end
Edit Distance | DP-5
Top 20 Dynamic Programming Interview Questions
Efficient program to print all prime factors of a given number
Travelling Salesman Problem | Set 1 (Naive and Dynamic Programming)

Matrix Chain Multiplication | DP-8
Difficulty Level : Hard
Last Updated : 07 Aug, 2021
Geek Week
Given a sequence of matrices, find the most efficient way to multiply these matrices together. The problem is not actually to perform the multiplications, but merely to decide in which order to perform the multiplications.
We have many options to multiply a chain of matrices because matrix multiplication is associative. In other words, no matter how we parenthesize the product, the result will be the same. For example, if we had four matrices A, B, C, and D, we would have: 

(ABC)D = (AB)(CD) = A(BCD) = ....
However, the order in which we parenthesize the product affects the number of simple arithmetic operations needed to compute the product, or the efficiency. For example, suppose A is a 10 × 30 matrix, B is a 30 × 5 matrix, and C is a 5 × 60 matrix. Then,  

(AB)C = (10×30×5) + (10×5×60) = 1500 + 3000 = 4500 operations
A(BC) = (30×5×60) + (10×30×60) = 9000 + 18000 = 27000 operations.
Clearly the first parenthesization requires less number of operations.
Given an array p[] which represents the chain of matrices such that the ith matrix Ai is of dimension p[i-1] x p[i]. We need to write a function MatrixChainOrder() that should return the minimum number of multiplications needed to multiply the chain. 

Input: p[] = {40, 20, 30, 10, 30}   
Output: 26000  
There are 4 matrices of dimensions 40x20, 20x30, 30x10 and 10x30.
Let the input 4 matrices be A, B, C and D.  The minimum number of 
multiplications are obtained by putting parenthesis in following way
(A(BC))D --> 20*30*10 + 40*20*10 + 40*10*30

Input: p[] = {10, 20, 30, 40, 30} 
Output: 30000 
There are 4 matrices of dimensions 10x20, 20x30, 30x40 and 40x30. 
Let the input 4 matrices be A, B, C and D.  The minimum number of 
multiplications are obtained by putting parenthesis in following way
((AB)C)D --> 10*20*30 + 10*30*40 + 10*40*30

Input: p[] = {10, 20, 30}  
Output: 6000  
There are only two matrices of dimensions 10x20 and 20x30. So there 
is only one way to multiply the matrices, cost of which is 10*20*30
Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution. 
 
1) Optimal Substructure: 
A simple solution is to place parenthesis at all possible places, calculate the cost for each placement and return the minimumces of size n, we can place the first set of parenthesis in n-1 ways. For example, if the given chain is of 4 matrices. let the chain be ABCD, then there are 3 ways to place first set of parenthesis outer side: (A)(BCD), (AB)(CD) and (ABC)(D). So when we place a set of parenthesis, we divide the problem into subproblems of smaller size. Therefore, the problem has optimal substructure property and can be easily solved using recursion.
Minimum number of multiplication needed to multiply a chain of size n = Minimum of all n-1 placements (these placements create subproblems of smaller size)

2) Overlapping Subproblems 
Following is a recursive implementation that simply follows the above optimal substructure property. 





/* A naive recursive implementation that simply
follows the above optimal substructure property */
#include <bits/stdc++.h>
using namespace std;
 
// Matrix Ai has dimension p[i-1] x p[i]
// for i = 1..n
int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
 
    // place parenthesis at different places
    // between first and last matrix, recursively
    // calculate count of multiplications for
    // each parenthesis placement and return the
    // minimum count
    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k)
                + MatrixChainOrder(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];
 
        if (count < min)
            min = count;
    }
 
    // Return minimum count
    return min;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, 1, n - 1);
}