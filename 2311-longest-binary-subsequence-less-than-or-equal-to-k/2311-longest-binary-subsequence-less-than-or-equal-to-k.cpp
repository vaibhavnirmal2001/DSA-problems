// Name of problem : 2311. Longest Binary Subsequence Less Than or Equal to K
// Problem link : https://leetcode.com/problems/longest-binary-subsequence-less-than-or-equal-to-k/
// Contributed by Sanjoy Saha [github : SanjoySaha24]

class Solution
{
public:
    int longestSubsequence(string s, int k)
    {

        int ans = 0;

        // reverse to simulate indexing 1001010 => first one has a index of 0 but while forming
        // decimal number it will add 2^6 to the result.
        // So, reverse the string to get the actual indexing
        // reverse = 0101001
        // now the last one has a index of 6 and it will contribute 2^6,

        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++)
        {
            // add all zeroes as the previous one's add according to the one and the latter zeroes
            // act as leading zeroes
            if (s[i] == '0')
                ans++;

            // bit manipulation to check the maximum
            else if (i < 31)
            {
                // if k is greater, then that 1 bit counts
                if (k >= (1 << i))
                {
                    k -= (1 << i);
                    ans++;
                }
            }
        }

        return ans;
    }
};