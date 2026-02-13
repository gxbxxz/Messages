class Solution{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size();
        int arr;
        int i,j;
        int maxLen=0,sum=0;
        for (j = 0; j < n; j++)
        {
            sum += nums[j];

            while (sum > k && i <= j)
            {
                sum -= nums[i];
                i++;
            }

            if (sum == k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
};
