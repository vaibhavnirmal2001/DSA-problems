# Remove leading zeros from an IP address
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an IP address, remove leading zeros from the IP address. Note that our IP address here can be a little different. It can have numbers greater than 255. Also, it does not necessarily have 4 numbers. The count can be lesser/more.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "100.020.003.400"
<strong>Output:</strong> 100.20.3.400</span><span style="font-size:18px">
<strong>Explanation</strong>: The leading zeros are removed
from 20 and 3.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "100.000.010.0999"
<strong>Output:</strong> 100.0.10.999
<strong>Explanation</strong>: The leading zeros are removed
from 0, 10 and 999.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>newIPAdd()&nbsp;</strong>which takes the string S representing the IP address as input and returns a&nbsp;string representing the resultant IP address.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=|S|&lt;=1000</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>