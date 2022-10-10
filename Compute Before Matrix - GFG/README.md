# Compute Before Matrix
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">For a given 2D Matrix&nbsp;<strong>before,</strong>&nbsp;the corresponding cell (x, y) of the <strong>after</strong> matrix is calculated as follows:&nbsp;</span></p>

<div style="background:#eee;border:1px solid #ccc;padding:5px 10px;">
<pre><span style="font-size:18px">res = 0;
for(i = 0; i &lt;= x; i++){
    for( j = 0; j &lt;= y; j++){              
&nbsp;       res += before(i,j);
    }
}
after(x,y) = res;
</span></pre>
</div>

<p><span style="font-size:18px">Given an&nbsp;<strong>N*M&nbsp;</strong>2D-Matrix&nbsp;<strong>after,</strong>&nbsp;your task is to find the corresponding&nbsp;<strong>before&nbsp;</strong>matrix for the given matrix.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2, M = 3
after[][] = {{1, 3, 6},
&nbsp;           {3, 7, 11}}
<strong>Output:</strong>
1 2 3
2 2 1
<strong>Explanation:</strong>
The before matrix for the given after matrix
matrix is {{1, 2, 3}, {2, 2, 1}}.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 1, M = 3
after[][] = {{1, 3, 5}}
<strong>Output:</strong>
1 2 2
<strong>Explanation: </strong>
The before matrix for the given after matrix
is {{1, 2, 2}}.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>c</strong><strong>omputeBeforeMatrix() </strong>which takes the integers <strong>N</strong>, <strong>M,&nbsp;</strong>and the 2D Matrix&nbsp;<strong>after</strong>&nbsp;as the input parameters, and returns the before matrix of the given after matrix.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M, after[i][j]&nbsp; ≤&nbsp; 10<sup>9</sup></span></p>
 <p></p>
            </div>