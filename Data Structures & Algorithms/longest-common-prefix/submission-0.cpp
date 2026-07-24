class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        int i {0};
        string first = strs.front();
        string last = strs.back();

        while (i < first.length() && i < last.length() && first[i] == last[i]){
            i++;
        }

        return first.substr(0, i);
    }
};