# Bitwise AND of the Array
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array&nbsp;<strong>A[ ]</strong>&nbsp;of&nbsp;<strong>N</strong>&nbsp;integers and an&nbsp;integer&nbsp;<strong>X</strong>. In one operation, you can change the <strong>i<sup>th</sup></strong> element of the array to any integer value where <strong>1 ≤ i ≤ N</strong>. Calculate minimum number of such operations required such that the <strong>bitwise</strong> <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND" target="_blank"><strong>AND</strong></a> of all the elements of the&nbsp;array is strictly greater than <strong>X</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4, X = 2
A[] = {3, 1, 2, 7}
<strong>Output: 
</strong>2<strong>
Explanation: 
</strong>After performing two operations:
Modified array: {3, <strong>3</strong>, <strong>11</strong>, 7} 
Now, Bitwise AND of all the elements
is 3 &amp; 3 &amp; 11 &amp; 7 = 3 
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3, X = 1
A[] = {2, 2, 2}
<strong>Output: 
</strong>0
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>count( )</strong>&nbsp;which takes&nbsp;<strong>N</strong>,&nbsp;<strong>A[ ]&nbsp;</strong>and&nbsp;<strong>X</strong>&nbsp;as input parameters and returns the minimum number of operations required.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N * Log(max(A[ ])))<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;N&nbsp;≤&nbsp;10<sup>5</sup><br>
1&nbsp;≤&nbsp;A[i] ≤&nbsp;10<sup>9</sup><br>
1&nbsp;≤&nbsp;X&nbsp;≤&nbsp;10<sup>9</sup></span></p>
 <p></p>
            </div>