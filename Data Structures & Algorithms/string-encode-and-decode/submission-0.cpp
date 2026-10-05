class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(const auto& s : strs){
            encoded_string += to_string(s.size()) + '#' + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i = 0;
        while(i < s.size()){
            int j = s.find('#', i);
            int length = stoi(s.substr(i,j - i));
            decoded_strs.push_back(s.substr(j + 1, length));
            i = j + length + 1;
        }
        return decoded_strs;
    }
};
