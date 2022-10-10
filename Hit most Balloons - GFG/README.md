# Hit most Balloons
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an infinite two-dimensional grid. There are <strong>N </strong>balloons placed at certain coordinates of the grid. You have an arrow with yourself, which you will be using to shoot the balloons. You can select any point on the grid as your starting point and any point on the grid as the target point. When you fire the arrow, all ballons lying on the shortest path between the starting point and target point will be burst. Given the coordinates of the N ballons&nbsp;in an array&nbsp;<strong>arr, </strong>your task is to find out the maximum number of balloons that you can fire in one arrow shot.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
arr[] = {{1, 2}, {2, 3}, {3, 4}}
<strong>Output:</strong>
3
<strong>Explanation:</strong>
If you position yourself at point (1,2)
and fire the arrow aiming at the point (3,4).
Then all the balloons will burst.</span></pre>

<p><strong><span style="font-size:18px">Example</span> <span style="font-size:18px">2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 3
arr[] = {{2,2}, {0,0}, {1,2}}&nbsp;
<strong>Output:</strong>
2
<strong>Explanation: </strong>
If you position yourself at point (2,2)
and fire the arrow aiming at the point (0,0).
Then the two balloons present at the two points
will burst.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>mostBalloons</strong><strong>()</strong> which takes the integers <strong>N </strong>and the array <strong>arr&nbsp;</strong>as the input parameters, and returns the maximum number of balloons that can be burst using one arrow.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&nbsp;≤ N&nbsp;≤ 10<sup>3</sup></span><br>
<span style="font-size:18px">-10<sup>9</sup> ≤ arr[i][j]&nbsp;≤ 10<sup>9</sup></span></p>
 <p></p>
            </div>