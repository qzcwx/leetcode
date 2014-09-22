class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int i;
        int carry=1;
        for (i=digits.size()-1; i>=0; i--){
            if (digits[i]+carry<=9){
                digits[i]++;
                return digits;
            }else{ // == 10
                digits[i] = 0;
                carry = 1;
            }
        }
        if (carry) digits.insert(digits.begin(),1);
        return digits;
    }
};
