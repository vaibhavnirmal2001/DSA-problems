# Merge K sorted linked lists
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given <strong>K</strong> sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>K = 4
value = {{1,2,3},{4 5},{5 6},{7,8}}
<strong>Output: </strong>1&nbsp;2&nbsp;3&nbsp;4&nbsp;5&nbsp;5&nbsp;6&nbsp;7&nbsp;8<strong>
Explanation:
</strong>The test case has 4 sorted linked 
list of size 3, 2,&nbsp;2,&nbsp;2
1st&nbsp; &nbsp; list &nbsp; &nbsp;&nbsp;1 -&gt; 2-&gt; 3
2nd&nbsp; &nbsp;list &nbsp; &nbsp; &nbsp;4-&gt;5
3rd&nbsp; &nbsp; list &nbsp; &nbsp; &nbsp;5-&gt;6
4th&nbsp; &nbsp; list &nbsp; &nbsp; &nbsp;7-&gt;8
The merged list will be
1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;5-&gt;6-&gt;7-&gt;8.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>K = 3
value = {{1,3},{4,5,6},{8}}
<strong>Output: </strong>1 3 4 5 6 8<strong>
Explanation:
</strong>The test case has 3 sorted linked
list of size 2, 3, 1.
1st list 1&nbsp;-&gt; 3
2nd list 4 -&gt; 5&nbsp;-&gt; 6
3rd list 8
The merged list will be
1-&gt;3-&gt;4-&gt;5-&gt;6-&gt;8.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>mergeKList</strong>() which merges the K given lists into a sorted one. The <strong>printing </strong>is done <strong>automatically </strong>by the <strong>driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(nk Logk)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(k)<br>
<strong>Note: n&nbsp;</strong>is the maximum size of all the <strong>k</strong>&nbsp;link list</span></p>

<p><span style="font-size:18px"><strong>Constraints</strong><br>
1 &lt;= K&nbsp;&lt;= 10<sup>3</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>