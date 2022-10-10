# Find the number of islands
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a grid of size n*m (n is number of rows and m is number of columns grid has) consisting of '0's(Water)&nbsp;and '1's(Land). Find the number of islands.</span><br>
<strong><span style="font-size:18px">Note: </span></strong><span style="font-size:18px">An&nbsp;island&nbsp;is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>grid = {{0,1},{1,0},{1,1},{1,0}}
<strong>Output:
</strong>1
<strong>Explanation:
</strong>The grid is-
0 <span style="color:#000080">1</span></span>
<span style="font-size:18px"><span style="color:#000080">1</span> 0
<span style="color:#000080">1</span> <span style="color:#000080">1
1</span> 0
All lands are connected.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>grid = {{0,1,1,1,0,0,0},{0,0,1,1,0,1,0}}
<strong>Output:
</strong>2
<strong>Expanation:
</strong>The grid is-
0 <span style="color:#000080">1 1 1</span> 0 0 0
0 0 <span style="color:#000080">1 1</span> 0 <span style="color:#FF0000">1</span> 0&nbsp;
There are two islands one is colored in blue 
and other in orange.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function <strong>numIslands()&nbsp;</strong>which takes grid as input parameter and returns the total number of islands.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Compelxity:&nbsp;</strong>O(n*m)<br>
<strong>Expected Space Compelxity:&nbsp;</strong>O(n*m)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n, m ≤ 500</span></p>
 <p></p>
            </div>