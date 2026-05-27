class Solution {
public:

    string encode(vector<string>& strs) {

        string res;

        for(string s : strs) {

            // length + '#' + string
            res += to_string(s.size()) + '#' + s;
        }

        return res;
    }

    vector<string> decode(string s) {

        vector<string> res;

        int i = 0;

        while(i < s.size()) {

            int j = i;

            // find '#'
            while(s[j] != '#') {
                j++;
            }

            // length of next string
            int len = stoi(s.substr(i, j - i));

            // move to actual string start
            j++;

            // extract string
            string word = s.substr(j, len);

            res.push_back(word);

            // move to next encoded part
            i = j + len;
        }

        return res;
    }
};