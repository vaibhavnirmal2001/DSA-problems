# Sort by Set Bit Count
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements.&nbsp; </span></p>

<p><span style="font-size:18px"><strong>Note:</strong> For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.</span></p>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Example 1:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input: </strong>
arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
<strong>Output:</strong>
15 7 5 3 9 6 2 4 32
<strong>Explanation:</strong>
The integers in their binary
representation are:
15 - 1111
7  - 0111
5  - 0101
3  - 0011
9  - 1001
6  - 0110
2  - 0010
4  - 0100
32 - 10000
hence the non-increasing sorted order is:
{15}, {7}, {5, 3, 9, 6}, {2, 4, 32}</span></pre>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input: 
</strong>arr[] = {1, 2, 3, 4, 5, 6};
<strong>Output:</strong> 
3 5 6 1 2 4
<strong>Explanation:</strong>
3  - 0011
5  - 0101
6  - 0110
1  - 0001
2  - 0010
4  - 0100
hence the non-increasing sorted order is
{3, 5, 6}, {1, 2, 4}</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to print anything, printing is done by the driver code itself. You just need to complete the function <strong>sortBySetBitCount() </strong>which takes the array <strong>arr[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and sort the array <strong>arr[]</strong> inplace. Use of extra space is prohibited.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N.log(N))<br>
<strong>Expected Auxiliary Space: </strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i] ≤ 10<sup>6</sup> </span></p>
 <p></p>
            </div>