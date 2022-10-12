<h2><a href="https://leetcode.com/problems/summary-ranges/">228. Summary Ranges</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">sorted unique</strong> integer array <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">range</strong> <code style="user-select: auto;">[a,b]</code> is the set of all integers from <code style="user-select: auto;">a</code> to <code style="user-select: auto;">b</code> (inclusive).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">smallest sorted</strong> list of ranges that <strong style="user-select: auto;">cover all the numbers in the array exactly</strong></em>. That is, each element of <code style="user-select: auto;">nums</code> is covered by exactly one of the ranges, and there is no integer <code style="user-select: auto;">x</code> such that <code style="user-select: auto;">x</code> is in one of the ranges but not in <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">Each range <code style="user-select: auto;">[a,b]</code> in the list should be output as:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"a-&gt;b"</code> if <code style="user-select: auto;">a != b</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">"a"</code> if <code style="user-select: auto;">a == b</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,2,4,5,7]
<strong style="user-select: auto;">Output:</strong> ["0-&gt;2","4-&gt;5","7"]
<strong style="user-select: auto;">Explanation:</strong> The ranges are:
[0,2] --&gt; "0-&gt;2"
[4,5] --&gt; "4-&gt;5"
[7,7] --&gt; "7"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,2,3,4,6,8,9]
<strong style="user-select: auto;">Output:</strong> ["0","2-&gt;4","6","8-&gt;9"]
<strong style="user-select: auto;">Explanation:</strong> The ranges are:
[0,0] --&gt; "0"
[2,4] --&gt; "2-&gt;4"
[6,6] --&gt; "6"
[8,9] --&gt; "8-&gt;9"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= nums[i] &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is sorted in ascending order.</li>
</ul>
</div>