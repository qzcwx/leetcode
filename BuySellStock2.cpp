class Solution { // make sure to pass some test cases in mind
public:
    int maxProfit(vector<int> &prices) {
        // finding the turning point?
        if (prices.size()<=1) return 0; // only have the price for one day
        if (prices.size()==2) return prices[1]>prices[0]? prices[1]-prices[0]:0;
        int min = prices[0];
        int max = prices[0];
        int profit = 0;
        int i;
        for (i=1; i<prices.size(); i++){
            if (prices[i]<max){ 
                // previous price was peak and higher than current
                profit += max - min;
                min = prices[i];
                max = prices[i];
            }else if (prices[i]<min){
                min = prices[i];
                max = prices[i];
            }else if (prices[i]>max){
                max = prices[i];
            }
        }
        if (prices[i-1]==max && prices[i-1]!=min){
            profit += max - min;
        }
        return profit;
    }
};
