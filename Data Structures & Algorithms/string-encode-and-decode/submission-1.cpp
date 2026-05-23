class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(auto str:strs){
            encoded+= to_string(str.size())+"#"+str;
        }
        return encoded;

    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>decoded;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            int start=j+1;
            decoded.push_back(s.substr(start,length));
            i=start+length;
        }
        return decoded;
    }
};
