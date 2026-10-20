class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> s;
        for(const auto& it:strs){
            vector<int> count(26,0);
            for(char c:it){
                count[c-'a']++;
            }
            string key=to_string(count[0]);
            for(int i=1;i<26;i++){
                key+=','+to_string(count[i]);
            }
            s[key].push_back(it);
        }
        for(const auto& pair:s){
            res.push_back(pair.second);
        }
        return res;
    }
};
