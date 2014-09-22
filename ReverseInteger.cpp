class Solution {
public:
    int reverse(int x) {
        // use a vector to store digits
        if (!x) return 0;
        int xpos = x>0 ? x: -x;
        vector<int> digits;
        
        while (xpos){
            digits.push_back(xpos%10);
            xpos /= 10;
        }
        
        int xrev = 0;   // x after reversion
        int base = 1;
        for (int i=digits.size()-1; i>=0; i--){
            xrev += digits[i]*base;
            base *= 10;
        }
        
        return x>0 ? xrev : -xrev;
    }
};
