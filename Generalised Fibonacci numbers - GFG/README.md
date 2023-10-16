# Generalised Fibonacci numbers
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Consider the generalized Fibonacci number G, which is dependent on a, b and c as follows :-<br>G(1) = 1, G(2) = 1. G(n) = <strong>a</strong>G(n-1) + <strong>b</strong>G(n-2) + <strong>c</strong>.<br>Your task is to calculate G(<strong>n</strong>)%<strong>m</strong> for given values of <strong>n</strong> and <strong>m</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>a = </strong>3, <strong>b = </strong>3, <strong>c = </strong>3, <strong>n = </strong>3, <strong>m = </strong>5</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">4</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">G(1) = 1 and G(2) = 1 <br></span><span style="font-size: 18px;">G(3) = 3*G(2) + 3*G(1) + 3 = 3*1 + 3*1 + 3 = 9<br></span><span style="font-size: 18px;">We need to return answer modulo 5, so 9%5 = 4, is the answer.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>a = </strong>2, <strong>b = </strong>2, <strong>c = </strong>2, <strong>n = </strong>4, <strong>m = </strong>100</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">16</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">G(1) = 1 and G(2) = 1 <br></span><span style="font-size: 18px;">G(3) = 2*G(2) + 2*G(1) + 2 = 2*1 + 2*1 + 2 = 6<br>G(4) = 2*G(3) + 2*G(2) + 2  = 2*6 + 2*1 + 2 = 16<br>We need to return answer modulo 100, so 16%100 = 16, is the answer.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>genFibNum()</strong> which takes 5 Integers a, b, c, n, and m as input and returns G(n)%m.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(logn)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= a,b,c,n,m &lt;= 10<sup>9</sup>+7</span></p></div>