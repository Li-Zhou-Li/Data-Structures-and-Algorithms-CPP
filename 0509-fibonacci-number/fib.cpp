class Solution {
public:
    int fib(int n) {
        int F;
        if(n == 0){
            F = 0;
        }
        if(n == 1){
            F = 1;
        }
        if(n > 1){
            F = fib(n-1) + fib(n-2);
        }
        return F;
    }
};
