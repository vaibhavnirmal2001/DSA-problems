# Queue using two Stacks
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Implement a Queue using 2 stacks<strong> s1</strong> and<strong> s2</strong> .<br>
A Query <strong>Q</strong> is of 2 Types<br>
<strong>(i)</strong> 1 x (a query of this type means&nbsp;&nbsp;pushing <strong>'x'</strong> into the queue)<br>
<strong>(ii)</strong> 2 &nbsp; (a query of this type means to pop&nbsp;element from queue and print the poped element)</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">5
1 2 1 3 2 1 4 2

<strong>Output: 
</strong>2&nbsp;3
<strong>
Explanation: 
</strong>In the first testcase
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2 &nbsp; poped element will be 2 the queue 
&nbsp;   will be {3}
1 4 the queue will be {3 4}
2 &nbsp; poped element will be 3.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">4
1 2 2 2 1 4

<strong>Output: 
</strong>2&nbsp;-1
<strong>
Explanation: 
</strong>In the second testcase&nbsp;
1 2&nbsp;the queue will be {2}
2&nbsp; &nbsp;poped element will be 2 and 
&nbsp;   then the queue will be empty
2&nbsp; &nbsp;the queue is empty and hence -1
1 4&nbsp;the queue will be {4}.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You are required to complete the two methods <strong>push</strong> which take one argument an integer <strong>'x'</strong>&nbsp;to be pushed into the queue and <strong>pop</strong> which returns a integer&nbsp;poped out from other queue(-1 if the queue is empty).&nbsp;The <strong>printing</strong> is done <strong>automatically </strong>by the<strong> driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(1) for&nbsp;<strong>push()&nbsp;</strong>and&nbsp;O(N) for&nbsp;<strong>pop() </strong>or&nbsp;O(N) for&nbsp;<strong>push()&nbsp;</strong>and&nbsp;O(1) for&nbsp;<strong>pop() </strong>&nbsp;<br>
<strong>Expected Auxilliary Space </strong>:&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;=<strong> </strong>Q &lt;= 100<br>
1 &lt;= x &lt;= 100</span></p>

<p><span style="font-size:18px">Note:The <strong>Input/Ouput</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p></p>
            </div>