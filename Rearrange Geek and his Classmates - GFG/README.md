# Rearrange Geek and his Classmates
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Geek and his classmates are playing a prank on their Computer Science teacher. They change places every time the teacher turns to look at the blackboard.&nbsp;</span></p>

<p><span style="font-size:18px">Each of the <strong>N</strong> students in the class can be identified by a unique roll number <strong>X </strong>and each desk has a number <strong>i </strong>associated with it. Only one student can sit on one desk.&nbsp;<br>
Each time the teacher turns her back, a student with roll number X sitting on desk number i gets up and takes the place of the student with roll number i.</span></p>

<p><span style="font-size:18px">If the current position of <strong>N</strong> students in the class is given to you in an array, such that<strong> i</strong> is the desk number and <strong>a[i]</strong> is the roll number of the student sitting on the desk, can you modify <strong>a[ ] </strong>to represent the next position of all the students ?&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6
a[] = {0, 5, 1, 2, 4, 3}
<strong>Output: </strong>0 3 5 1 4 2
<strong>Explanation: </strong>After reshuffling, the modified 
position of all the students would be 
{</span><span style="font-size:18px">0, 3, 5, 1, 4, 2}.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
a[] = {4, 3, 2, 1, 0}
<strong>Output:</strong> 0 1 2 3 4 
<strong>Explanation:</strong> </span><span style="font-size:18px">After reshuffling, the modified 
position of all the students would be 
{</span><span style="font-size:18px">0, 1, 2, 3, 4}.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>prank() </strong>which takes the array <strong>a[ ]</strong> and its size <strong>N</strong> as input parameters and modifies the array in-place to reflect the new arrangement.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ a[i] ≤ N-1</span></p>
 <p></p>
            </div>