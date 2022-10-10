# Can Make Triangle
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array&nbsp;<strong>A[]&nbsp;</strong>of&nbsp;<strong>N&nbsp;</strong>elements, You'd like to know how many triangles can be formed with side lengths equal to adjacent elements from A[].</span></p>

<p><span style="font-size:18px">Construct an array of integers of length N - 2 where ith element is equal to <strong>1</strong> if it is possible to form a triangle with side lengths<strong> A[i]</strong>, <strong>A[i+1]</strong>, and <strong>A[i+2]</strong>. otherwise <strong>0</strong>.</span></p>

<p><span style="font-size:18px"><strong>Note: </strong>A triangle can be formed with side lengths a, b and c if a+b&gt;c and a+c&gt;b and b+c&gt;a.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
A[] = {1, 2, 2, 4}
<strong>Output:</strong>
1 0
<strong>Explanation:</strong>
output[0] = 1 because we can form a 
triangle with side lengths 1,2 and 2.
output[1] = 0 because 2+2<u>&lt;</u>4 so, we cannot 
form a triangle with side lengths 2,2 and 4.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 5
A[] = {2, 10, 2, 10, 2}
<strong>Output:</strong>
0 1 0
<strong>Explanation:
</strong>output[0] = 0 because 2+2<u>&lt;</u>10 so, we cannot
form a triangle with side lengths 2, 10 and 2.<strong> </strong>
output[1] = 1 we can form a triangle with 
side lengths 10,2 and 10.<strong> 
</strong>output[1] = 0 because 2+2<u>&lt;</u>10 so, we can
form a triangle with side lengths 2, 10 and 2.<strong> </strong></span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything. Your task is to c</span><span style="font-size:18px">omplete the function&nbsp;<strong>canMakeTriangle()&nbsp;</strong>which takes the array&nbsp;<strong>A</strong>&nbsp;and the integer&nbsp;<strong>N&nbsp;</strong>as the input parameters, and returns the array of answers.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
3 ≤ N&nbsp;≤ 10<sup>5&nbsp;</sup><br>
1 ≤ arr[i] ≤ 10<sup>9</sup></span></p>
 <p></p>
            </div>