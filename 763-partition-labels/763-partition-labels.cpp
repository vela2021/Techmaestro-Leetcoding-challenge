class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> pos(26,-1);
        vector<int> ans;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(pos[s[i]-'a']==-1)
                pos[s[i]-'a']=i;
        }
        int min1=0,len=0;
        for(int i=0;i<s.size();i++)
        {
            int temp = pos[s[i]-'a'];
            min1 = max(min1,temp);
            len++;
            if(i==min1)
            {
                ans.push_back(len);
                min1=0;
                len=0;
            }
        }
        return ans;
    }
};