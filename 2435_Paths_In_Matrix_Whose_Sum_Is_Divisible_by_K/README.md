Credit:- https://leetcode.com/problems/paths-in-matrix-whose-sum-is-divisible-by-k/

// Problem Statement
You are given a 0-indexed m x n integer matrix grid and an integer k.
 You are currently at position (0, 0) and you want to reach position (m - 1, n - 1) moving only down or right.

Return the number of paths where the sum of the elements on the path is divisible by k.
Since the answer may be very large, return it modulo 109 + 7.

Example 1:

Input: grid = [[5,2,4],[3,0,5],[0,7,2]], k = 3
Output: 2
Explanation: There are two paths where the sum of the elements on the path is divisible by k.
The first path highlighted in red has a sum of 5 + 2 + 4 + 5 + 2 = 18 which is divisible by 3.
The second path highlighted in blue has a sum of 5 + 3 + 0 + 5 + 2 = 15 which is divisible by 3.