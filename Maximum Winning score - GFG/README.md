# Maximum Winning score
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">In an online game, <strong>N</strong> blocks are arranged in a hierarchical manner. All the blocks are connected together by a total of N-1 connections.&nbsp;Each block is given an ID from 1 to N. A block may be further connected to other blocks. Each block is also assigned a specific<strong> point value</strong>.</span></p>

<p><span style="font-size:18px">A player starts from Block 1. She must move forward from each block to a directly connected block until she reaches the final block, which has no further connection. When the player lands on a block, she <strong>collects the point value</strong> of that block. The players score is calculated as the <strong>product of point values</strong>&nbsp;that the player collects.<br>
Find the maximum score a player can achieve.<br>
<strong>Note:&nbsp;</strong>The answer can always be represented with 64 bits.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>     4
&nbsp;   / \
&nbsp;  2   8
&nbsp; / \ / \
&nbsp;2  1 3  4
<strong>Output: </strong>128<strong>
Explanation: </strong>Path in the given tree 
goes like 4, 8, 4 which gives the max
score of 4x8x4 = 128.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>     10
&nbsp;  /    \
&nbsp; 7      5
          \
           1
<strong>Output: </strong>70<strong>
Explanation: </strong>The path 10, 7 gives a 
score of 70 which is the maximum possible.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your&nbsp;Task:</strong><br>
You don't need to take input or print anything. Your task is to <strong>complete </strong>the function&nbsp;<strong>findMaxScore()&nbsp;</strong>that takes <strong>root </strong>as input and returns max score possible.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N).<br>
<strong>Expected Auxiliary Space: </strong>O(Height of the Tree).</span></p>

<div><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;Number of nodes ≤&nbsp;10<sup>3</sup><br>
1&nbsp;≤&nbsp;Data on node&nbsp;≤&nbsp;10 </span></div>

<div><span style="font-size:18px">It is guaranteed that the answer will always fit in the 64-bit Integer</span></div>
 <p></p>
            </div>