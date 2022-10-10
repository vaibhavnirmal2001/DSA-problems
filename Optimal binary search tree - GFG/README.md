# Optimal binary search tree
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a sorted array <strong>keys[0.. n-1]</strong> of search keys and an array <strong>freq[0.. n-1]</strong> of frequency counts, where freq[i] is the number of searches to keys[i]. Construct a binary search tree of all keys such that the total cost of all the searches is as small as possible.<br>
Let us first define the cost of a BST. The cost of a BST node is level of that node multiplied by its frequency. Level of root is 1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 2
keys = {10, 12}
freq = {34, 50}
<strong>Output:</strong> 118
<strong>Explaination:</strong>
There can be following two possible BSTs 
        10                       12
          \                     / 
           12                 10
          <em>                    
The cost of tree I is 34*1 + 50*2 = 134
The cost of tree II is 50*1 + 34*2 = 118 </em></span></pre>

<p><br>
<em><span style="font-size:18px"><strong>Example 2:</strong></span></em></p>

<pre><em>
<span style="font-size:18px"><strong>Input:</strong>
N = 3
keys = {10, 12, 20}
freq = {34, 8, 50}
<strong>Output:</strong> 142
<strong>Explaination:</strong> There can be many possible BSTs
     20
    /
   10  
    \
     12  
     <em>
Among all possible BSTs, 
cost of this BST is minimum.  
Cost of this BST is 1*50 + 2*34 + 3*8 = 142</em></span></em></pre>

<p><br>
<em><em><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>optimalSearchTree()</strong>&nbsp;which takes the array <strong>keys[], freq[]</strong> and their&nbsp;size <strong>n&nbsp;</strong>as input parameters&nbsp;and returns the total cost of all the searches is as small as possible.</span></em></em></p>

<p><br>
<em><em><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n<sup>3</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(n<sup>2</sup>)</span></em></em></p>

<p><br>
<em><em><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 100</span></em></em></p>
 <p></p>
            </div>