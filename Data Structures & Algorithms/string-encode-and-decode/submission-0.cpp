class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (const string& str : strs) {
            encoded_string += to_string(str.length()) + "#" + str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int n = s.length();
        int i = 0;
        while (i < n) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            decoded.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return decoded;
    }
};
