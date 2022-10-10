# Smallest window containing 0, 1 and 2
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "01212"
<strong>Output:</strong>
3
<strong>Explanation:</strong>
The substring 012 is the smallest substring
that contains the characters 0, 1 and 2.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
S = "12121"
<strong>Output:</strong>
-1
<strong>Explanation: </strong>
As the character 0 is not present in the
string S, therefor no substring containing
all the three characters 0, 1 and 2
exists. Hence, the answer is -1 in this case.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>smallestSubstring()</strong> which takes the string <strong>S</strong> as input, and returns the length of the smallest substring of string S that contains all the three characters 0, 1 and 2.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(|S|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |S|&nbsp;≤ 10<sup>5</sup><br>
All the characters of String S lies in the set {'0', '1', '2'}</span></p>
 <p></p>
            </div>