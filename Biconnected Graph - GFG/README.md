# Biconnected Graph
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a graph with <strong>n</strong> vertices, <strong>e</strong> edges and an array <strong>arr[] </strong>denoting the edges connected to each other, check whether it is <a href="https://en.wikipedia.org/wiki/Biconnected_graph" target="_blank">Biconnected</a> or not.<br>
<strong>Note: </strong>The given graph is Undirected.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>n = </strong>2, <strong>e = </strong>1</span>
<span style="font-size:18px"><strong>arr = </strong>{0, 1}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">1</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">       0
      /
     1
The above graph is Biconnected.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>n = </strong>3, <strong>e = </strong>2</span>
<span style="font-size:18px"><strong>arr = </strong>{0, 1, 1, 2}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">0</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">       0
      /
     1
      \
       2
The above graph is not Biconnected.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>biGraph()</strong> which takes 2 Integers n, and e and an array arr of length 2*e as input and returns 1 if the graph is biconnected else returns 0.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n+e)<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= e &lt;= 100<br>
2 &lt;= n &lt;= 100</span></p>
 <p></p>
            </div>