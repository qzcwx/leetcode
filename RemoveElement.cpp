class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int j=n;
        int i=0;
        while (i<j){
            if (A[i]==elem){ // swap with the element at the end
                A[i]=A[j-1];
                j--;
            }else{
                i++;
            }
        }
        return j;
    }
};
