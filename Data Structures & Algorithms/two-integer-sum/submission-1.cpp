class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];
            if (freq.find(rem) != freq.end()) {
                res.push_back(freq[rem]);
                res.push_back(i);
                break;
            }
            freq[nums[i]] = i;
        }
        return res;
    }
};
