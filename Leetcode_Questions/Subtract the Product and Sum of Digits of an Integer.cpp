class Solution {
public:
    int subtractProductAndSum(int n) {
        int z=n;
        int prod=1;
        int sum=0;
        while(n!=0){
            prod=prod*(n%10);
            n=n/10;
        }
        while(z!=0){
            sum=sum+(z%10);
            z=z/10;
        }
        return prod-sum;
    }
};

