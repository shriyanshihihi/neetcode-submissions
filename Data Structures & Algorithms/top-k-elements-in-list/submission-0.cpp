class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(const auto& [key,value]:freq){
            pq.push({value,key});
        }
        vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
