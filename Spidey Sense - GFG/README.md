# Spidey Sense
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Spiderman is stuck in a difficult situation. His arch-enemy the Green Goblin has planted several of his infamous Pumpkin Bombs in various locations in a building. Help Spiderman activate his Spidey Sense and identify the impact zones.&nbsp;<br>
He has a blueprint of the building which is a M x N matrix that is filled with the characters O, B, and W where:&nbsp;<br>
O represents an open space.<br>
B represents a bomb.<br>
W represents a wall.<br>
You have to replace all of the Os (open spaces) in the matrix with their shortest distance from a bomb without being able to go through any walls. Also, replace the bombs with 0 and walls with -1 in the resultant matrix. If no path exists between a bomb and an open space replace the corresponding 'O' with -1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 3, M = 3
A[] = {</span><span style="font-size:18px">{O, O, O}, 
       {W, B, B},&nbsp;
       {W, O, O</span><span style="font-size:18px">}}</span>
<span style="font-size:18px"><strong>Output:</strong> {</span><span style="font-size:18px">{2, 1, 1}, 
         {-1, 0, 0},&nbsp; 
         {-1, 1, 1</span><span style="font-size:18px">}}</span>
<span style="font-size:18px"><strong>Explanation: </strong></span><span style="font-size:18px">The walls at (1,0) and (2,0) 
are replaced by -1.</span><span style="font-size:18px"> The bombs at (1,1) and 
(1,2) are replaced by 0.</span><span style="font-size:18px"><strong> The impact zone 
for the bomb at (1,1)</strong> includes open spaces 
at index (0,0), (0,1) and (2,1) with distance 
from bomb calculated as 2,1,1 respectively.</span>
<span style="font-size:18px"><strong>The impact zone for the bomb at (1,2)</strong> 
includes open spaces at index (0,3) and (2,2) 
with distance from bomb calculated as 1,1 
respectively.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>IInput: </strong>N = 2, M = 2
A[] = {</span><span style="font-size:18px">{O, O},
       {O, O}</span><span style="font-size:18px">}</span> 
<span style="font-size:18px"><strong>Output:</strong> {{-1, -1}
         {-1, -1}
</span></pre>

<p><span style="font-size:18px"><strong>Your Task: </strong>&nbsp;<br>
You don't need to read input or print anything. Complete the function <strong>findDistance()</strong> which takes the matrix A[], M, and N as input parameters and the resultant matrix</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(M*N)<br>
<strong>Expected Auxiliary Space:</strong> O(M*N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N*M ≤ 10<sup>6</sup></span></p>
 <p></p>
            </div>