#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    const char KEY = 42;

    string encode(vector<string>& strs){
        string serialized;

        for (const string& s : strs) {
            serialized += to_string(s.size());
            serialized += '#';
            serialized += s;
        }
        for (char& c : serialized) {
            c ^= KEY;
        }

        return serialized;
    }

    vector<string> decode(string& encoded) {
        string decoded = encoded;

        for (char& c : decoded) {
            c ^= KEY;
        }
        vector<string> result;

        int i = 0;

        while (i < decoded.size()) {
            int j = i;
            while (decoded[j] != '#') {
                j++;
            }
            int length = stoi(decoded.substr(i, j - i));
            string word = decoded.substr(j + 1, length);

            result.push_back(word);
            i = j + 1 + length;
        }

        return result;
    }
};