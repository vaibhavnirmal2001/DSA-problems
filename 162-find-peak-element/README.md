<h2><a href="https://leetcode.com/problems/find-peak-element/">162. Find Peak Element</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A peak element is an element that is strictly greater than its neighbors.</p>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>, find a peak element, and return its index. If the array contains multiple peaks, return the index to <strong style="user-select: auto;">any of the peaks</strong>.</p>

<p style="user-select: auto;">You may imagine that <code style="user-select: auto;">nums[-1] = nums[n] = -∞</code>. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.</p>

<p style="user-select: auto;">You must write an algorithm that runs in <code style="user-select: auto;">O(log n)</code> time.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,1]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> 3 is a peak element and your function should return the index number 2.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,1,3,5,6,4]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= nums[i] &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i] != nums[i + 1]</code> for all valid <code style="user-select: auto;">i</code>.</li>
</ul>
</div>