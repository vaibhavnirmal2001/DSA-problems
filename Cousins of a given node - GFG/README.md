# Cousins of a given node
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary tree and a node, print all cousins of given node in order of their appearance. Note that siblings should not be printed.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input : </span></strong>
<span style="font-size:18px">             1
           /   \
          2     3
        /   \  /  \
       4    5  6   7</span>

<span style="font-size:18px">Given node : 5</span>
<span style="font-size:18px"><strong>Output :</strong> 6 7</span>
<strong><span style="font-size:18px">Explanation :</span></strong>
<span style="font-size:18px">Nodes 6 and 7 are on the same level 
as 5 and have different parents.</span>

</pre>

<p><strong><span style="font-size:18px">Example 2 :</span></strong></p>

<pre><strong><span style="font-size:18px">Input :</span>
</strong><span style="font-size:18px">         9</span>
<span style="font-size:18px">        /</span>
<span style="font-size:18px">       5</span>
<span style="font-size:18px">Given node : 5</span>
<span style="font-size:18px"><strong>Output :</strong> -1</span>
<strong><span style="font-size:18px">Explanation :</span></strong>
<span style="font-size:18px">There no other nodes than 5 in the same level.</span>
</pre>

<div><span style="font-size:18px"><strong>Your task :</strong></span></div>

<div><span style="font-size:18px">You don't have to read input or print anything. Your task is to complete the function<strong> printCousins() </strong>which takes the root node of the tree and&nbsp;the node whose cousins need to be found,&nbsp;as input and returns a list containing the cousins of the given node in order of their appearance in the tree. If there is no cousin of the given node, return<strong> -1</strong> as the first element of the list.</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Expected Time Complexity : </strong>O(n)</span></div>

<div><span style="font-size:18px"><strong>Expected Auxiliary Space : </strong>O(n)</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Constraints :</strong></span></div>

<div><span style="font-size:18px">1 &lt;= n &lt;=10^5</span></div>
 <p></p>
            </div>