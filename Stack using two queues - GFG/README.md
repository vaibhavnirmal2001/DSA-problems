# Stack using two queues
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Implement a Stack&nbsp;using two queues<strong>&nbsp;q1</strong>&nbsp;and<strong>&nbsp;q2</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">push(2)
push(3)
pop()
push(4)
pop()</span><strong><span style="font-size:18px">
Output: </span></strong><span style="font-size:18px">3 4
</span><strong><span style="font-size:18px">Explanation:
</span></strong><span style="font-size:18px">push(2)&nbsp;the stack&nbsp;will be {2}
push(3)&nbsp;the stack&nbsp;will be {2 3}
pop()   poped element will be 3&nbsp;the 
&nbsp;       stack&nbsp;will be {2}
push(4)&nbsp;the stack&nbsp;will be {2 4}
pop() &nbsp; poped element will be 4 &nbsp;</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">push(2)
pop()
pop()
push(3)</span><strong><span style="font-size:18px">
Output: </span></strong><span style="font-size:18px">2 -1</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">Since this is a function problem, you don't need to take inputs. You are required to complete the two methods&nbsp;<strong>push()</strong>&nbsp;which takes&nbsp;an integer <strong>'x'</strong>&nbsp;as input&nbsp;denoting the element to be pushed into the stack and&nbsp;<strong>pop()</strong>&nbsp;which returns the&nbsp;integer&nbsp;poped out from the stack(<strong>-1</strong>&nbsp;if the stack&nbsp;is empty).</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(1) for&nbsp;<strong>push()&nbsp;</strong>and O(N) for&nbsp;<strong>pop()&nbsp;</strong>(or vice-versa).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1) for both&nbsp;<strong>push()&nbsp;</strong>and&nbsp;<strong>pop()</strong>.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;=<strong>&nbsp;</strong>Number of queries&nbsp;&lt;= 100<br>
1 &lt;= values of the stack&nbsp;&lt;= 100</span></p>
 <p></p>
            </div>