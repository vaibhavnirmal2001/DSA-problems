# Escape the Forbidden Forest
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Penelope and her classmates are lost in the Forbidden Forest and the Devil is out to get them. But Penelope has magical powers that can build bridges across the dangerous river and take her friends to safety. The only bridges that can withstand the Devil's wrath are the ones built between two similar trees in the forest.&nbsp;<br>
Given str1 and str2 denoting the order of trees on either side of the river, find the maximum number of bridges that Penelope can build and save everyone from the Devil.&nbsp;</span><br>
<span style="font-size:18px"><strong>Note:</strong> Each tree in the forest belongs to one of the 3 categories represented by * or # or @</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
str1 = "*@#*" </span>
<span style="font-size:18px">str2 = "*#"</span>
<span style="font-size:18px"><strong>Output:</strong>
2</span>
<span style="font-size:18px"><strong>Explanation:</strong>
str1 = "*@#*" and str2 = "*#" 
Two bridges can be built between the banks 
of the river in the following manner. 
* @ # *
|      |
*     #</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">str1 = "***"</span>
<span style="font-size:18px">str2 = "##"</span>
<span style="font-size:18px"><strong>Output:</strong>
0</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>build_bridges()</strong> that takes str1 and str2 as input parameters and returns the maximum number of bridges that can be built.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*M)<br>
<strong>Expected Auxiliary Space:</strong> O(N*M)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M ≤ 100<br>
Where, N and M are the size of the string str1 and str2 respectively.</span></p>
 <p></p>
            </div>