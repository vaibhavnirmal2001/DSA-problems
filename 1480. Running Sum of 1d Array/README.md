# 1480. Running Sum of 1d Array

Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`. <br>

Return the running sum of `nums`.

## Example 1:

```
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```
 
### Analysis:

give `tmp=0` <br>
Use `for loop` and `tmp=tmp+i` <br>
Use `ans to add tmp` for each for loop iteration.<br>

![concept Image](https://user-images.githubusercontent.com/66154908/193382506-700128b1-0ddd-411c-813c-edcc48dc6938.png)

Solution:

```
class Solution:
    def runningSum(self, nums):
        ans=[]
        tmp=0
        for i in nums:
            tmp+=i
            ans.append(tmp)
        return ans
```
