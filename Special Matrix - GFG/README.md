# Special Matrix
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given a matrix having <strong>n</strong> rows and <strong>m</strong> columns. The special property of this matrix is that some of the cells of this matrix are <strong>blocked&nbsp;</strong>i.e. they cannot be reached. Now you have to start from the cell <strong>(1,1)</strong> and reach the end <strong>(n,m)</strong> provided during the journey you can move horizontally <strong>right</strong> from the current cell or vertically <strong>down</strong> from the current cell. Can you answer the <strong>number of ways</strong> you can traverse the matrix obeying the above constraints starting from <strong>(1,1)</strong> and ending at <strong>(n,m)</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 3, m = 3, k = 2,
blocked_cells = {{1,2},{3,2}}.
<strong>Output: </strong>1
<strong>Explanation: </strong>There is only one path from
(1,1) to(3,3) which is (1,1)-&gt;(2,1)-&gt;(2,2)-&gt;
(2,3)-&gt;(3,3).</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 5, m = 5, k = 1,
blocked_cells = {{5,5}}
<strong>Output: </strong>0
<strong>Explanation: </strong>There is no path to reach at 
(5,5) beacuse (5,5) is blocked.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything, Your task is to complete the function&nbsp;<strong>FindWays()&nbsp;</strong>which takes n, m and blocked_cells as input parameter and returns total number of ways to reach at (n, m) modulo 10<sup>9</sup>&nbsp;+ 7.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n*m)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(n*m)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n, m &lt;= 500<br>
1 &lt;= k &lt;= n*m&nbsp;</span></p>
 <p></p>
            </div>