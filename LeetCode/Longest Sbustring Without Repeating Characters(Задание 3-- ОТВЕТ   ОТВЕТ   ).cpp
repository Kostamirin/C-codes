class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> no_use;
        int lol = 0;
        int max_len = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++) {
            while (no_use.find(s[right]) != no_use.end()) {
                no_use.erase(s[left]);
                left++;
                lol--;
            }
            no_use.insert(s[right]);
            lol++;
            max_len = std::max(max_len, lol);
        }
        
        return max_len;
    }
};
