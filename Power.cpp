class Solution {
public:
    double pow(double x, int n) {
        if (n==0) return 1;
        if (x==0 || x==1) return x;
        int posn = abs(n);
        if (x==-1){
            if (posn%2==0) return 1;
            else return -1;
        }
        if (n>0) 
            return prod(x,posn);
        else 
            return 1/prod(x,posn);
    }
private:
    double prod(double x, int n){ 
        // pure multiplication without checking conditions
        if (n==1) return x;
        double multiplier = prod(x,n/2);
        if (n%2==0){
            return multiplier*multiplier;
        }else{
            return multiplier*multiplier*x;
        }
    }
};
