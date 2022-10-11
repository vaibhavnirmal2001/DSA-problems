<h2><a href="https://leetcode.com/problems/find-mode-in-binary-search-tree/">501. Find Mode in Binary Search Tree</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary search tree (BST) with duplicates, return <em style="user-select: auto;">all the <a href="https://en.wikipedia.org/wiki/Mode_(statistics)" target="_blank" style="user-select: auto;">mode(s)</a> (i.e., the most frequently occurred element) in it</em>.</p>

<p style="user-select: auto;">If the tree has more than one mode, return them in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">Assume a BST is defined as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The left subtree of a node contains only nodes with keys <strong style="user-select: auto;">less than or equal to</strong> the node's key.</li>
	<li style="user-select: auto;">The right subtree of a node contains only nodes with keys <strong style="user-select: auto;">greater than or equal to</strong> the node's key.</li>
	<li style="user-select: auto;">Both the left and right subtrees must also be binary search trees.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/11/mode-tree.jpg" style="width: 142px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,null,2,2]
<strong style="user-select: auto;">Output:</strong> [2]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [0]
<strong style="user-select: auto;">Output:</strong> [0]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> Could you do that without using any extra space? (Assume that the implicit stack space incurred due to recursion does not count).</div>