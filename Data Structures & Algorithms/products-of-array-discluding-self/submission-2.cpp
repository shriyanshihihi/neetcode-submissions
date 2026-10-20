class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        int n = nums.size();
        int count_zeroes = 0;
        for (auto a : nums) {
            if (a == 0) {
                count_zeroes += 1;
                continue;
            }
            p *= a;
        }
        if (count_zeroes == n) {
            return nums;
        }
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (count_zeroes != 0) {
                if (nums[i] != 0) {
                    res.push_back(0);
                } else {
                    if (count_zeroes > 1) {
                        res.push_back(0);
                    } else {
                        res.push_back(p);
                    }
                }
            } else {
                res.push_back(p / nums[i]);
            }
        }
        return res;
    }
};
