# Smallest Absolute Difference
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of size <strong>N</strong> containing positive integers n and a number <strong>k</strong>,The absolute difference between values at indices i and j is <strong>|a[i] – a[j]|</strong>. There are <strong>n*(n-1)/2</strong> such pairs and you have to&nbsp;print the <strong>k<sub>th</sub></strong> <strong>smallest</strong> <strong>absolute</strong> <strong>difference</strong> among all these pairs.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input : </strong>
N = 4
A[] = {1, 2, 3, 4}
k = 3<strong>
Output : </strong>
1 <strong>
Explanation :</strong>
The possible absolute differences are :
{1, 2, 3, 1, 2, 1}.
The 3rd smallest value among these is 1.</span></pre>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input : </strong>
N = 2
A[] = {10, 10}
k = 1
<strong>Output :</strong>
0</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>kthDiff()</strong>&nbsp;which takes the array <strong>A[]</strong>, its size <strong>N </strong>and an integer <strong>k </strong>as inputs and returns the <strong>k<sub>th</sub></strong> smallest absolute difference among all these pairs.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O( N. (Log(N))<sup>2</sup> )<br>
<strong>Expected Auxiliary Space:</strong> O(Log(N))</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10<sup>5</sup><br>
1&lt;=a[i]&lt;=10<sup>5</sup><br>
1 &lt;= k &lt;= n*(n-1)/2</span></p>
 <p></p>
            </div>