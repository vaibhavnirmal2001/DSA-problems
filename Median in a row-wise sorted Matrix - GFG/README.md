# Median in a row-wise sorted Matrix
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a row wise sorted matrix of size RxC where R and C are always odd,&nbsp;find the median of the matrix.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
R = 3, C = 3
M = [[1, 3, 5], 
&nbsp;    [2, 6, 9], 
&nbsp;    [3, 6, 9]]

<strong>Output:</strong>&nbsp;5

<strong>Explanation</strong>:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
R = 3, C = 1
M = [[1], [2], [3]]
<strong>Output: </strong>2
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>median()</strong>&nbsp;which takes the integers&nbsp;R and&nbsp;C along with the&nbsp;2D&nbsp;matrix&nbsp;as input parameters and returns the median of the matrix.<br>
<br>
<strong>Expected Time Complexity:</strong> O(32 * R * log(C))</span><br>
<span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;= R,C&nbsp;&lt;=150<br>
1&lt;= matrix[i][j] &lt;=2000</span><br>
<br>
&nbsp;</p>
 <p></p>
            </div>