# Concatenate two numbers
## Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array&nbsp;<strong>numbers</strong><strong>[]&nbsp;</strong>of&nbsp;<strong>N&nbsp;</strong>positive integers and a positive integer <strong>X</strong>, The task is to find the number of ways that X can be obtained by writing pair of integers in the array numbers[] next to each other. In other words, find the number of ordered pairs (i,j) such that i != j and X is the concatenation of numbers[i] and numbers[j]</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4 
numbers[] = {1, 212, 12, 12}
X = 1212
<strong>Output:</strong>
3
<strong>Explanation:</strong>
We can obtain X=1212 by concatenating:
numbers[0] = 1 with numbers[1] = 212
numbers[2] = 12 with numbers[3] = 12
numbers[3] = 12 with numbers[2] = 12
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 3
numbers[] = {11, 11, 110}
X = 11011
<strong>Output:</strong>
2
<strong>Explanation:
</strong>We can obtain X=11011 by concatenating:
numbers[2] = 110 with numbers[0] = 11
numbers[2] = 110 with numbers[1] = 11
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything. Your task is to complete the function&nbsp;<strong>countPairs()&nbsp;</strong>which takes<strong>&nbsp;</strong>the integer&nbsp;<strong>N ,&nbsp;</strong>the integer<strong> X,</strong>&nbsp;and the array&nbsp;<strong>numbers[]&nbsp;</strong>as the input parameters, and returns the number of pairs which satisfies the above condition.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*Log<sub>10</sub>(A[i]) +&nbsp;(Log<sub>10</sub>X)<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N*Log<sub>10</sub>(A[i]))</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 5*10<sup>4</sup><sup>&nbsp;</sup><br>
1 ≤ numbers[]&nbsp;≤ 10<sup>9</sup><br>
1 ≤ X ≤ 10<sup>9</sup></span></p>
 <p></p>
            </div>