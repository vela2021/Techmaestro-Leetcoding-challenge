class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int n = time.size();
        unordered_map<int,int> mp;
        
        int count = 0;
        
        for(int i=0; i<n; i++) {
            
            for(int j=60; j <= 1000; j += 60){
                
                if(mp.count(j - time[i]) ) {
                    count += mp[j - time[i]];
                }
            }
            mp[time[i]]++;
        }
        return count;
    }
};