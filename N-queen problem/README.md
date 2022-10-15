<h2>N-Queen problem</h2>

<p>You are given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess board. A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.</p>
<p> <strong> Note:</strong> Don't print anything if there isn't any valid configuration.</p>
<p><strong>Input Format:</strong><br>
The first line of input contains an integer, that denotes the value of N.</p>
<p><strong>Output Format :</strong><br>
In the output, you have to print every board configuration in a new line. Every configuration will have N*N board elements printed row wise and are separated by space. The cells where queens are safe and placed, are denoted by value 1 and remaining all cells are denoted by value 0. Please refer to sample test cases for more clarity.</p>
<p><pre><strong>Constraints :</strong><br>
1 <= N <= 10<br></pre>
<pre>
<strong>Time Limit:</strong> <br> 
1 second</p></pre>
<p><strong>Sample Input 1:</strong><br>

4</p>
<p><pre>
<strong>Sample Output 1 :</strong><br>
0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0<br>
0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0</pre></p>
<p><strong>Explanation:</strong><br>
The first and second configuration are shown in the image below. Here, 1 denotes the placement of a queen and 0 denotes an empty cell. Please note that in both the configurations, no pair of queens can kill each other.
</p>