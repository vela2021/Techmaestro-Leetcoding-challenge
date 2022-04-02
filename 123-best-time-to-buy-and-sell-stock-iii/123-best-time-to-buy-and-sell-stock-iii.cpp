class Solution {
public:
    
       //unordered_map<string, int> memo;
    int maxProfit(vector<int>prices){
        int buyprice1= INT_MAX,profit1=0,buyprice2=INT_MAX,profit2=0;
        for(int i=0;i<prices.size();i++)
        {
            buyprice1=min(buyprice1,prices[i]);
            profit1=max(profit1, prices[i]-buyprice1);
            buyprice2=min(buyprice2,prices[i]-profit1);
            profit2=max(profit2,prices[i]-buyprice2);
        }
        return profit2;
    } 
    
};