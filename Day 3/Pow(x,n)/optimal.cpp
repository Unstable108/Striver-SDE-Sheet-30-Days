class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        
        //to keep a copy of n
        //since value of n will get destoyed
        long long nn= n;
        
        //if it is a -ve, we make it +ve
        if(nn<0) nn= (-1)*nn;
        
        //run the loop, till nn becomes 0
        while(nn)
        {
            if(nn%2==0)
            {
                nn=nn/2;
                x= x*x; 
            }
            else{
                ans= ans*x;
                nn= nn-1;
            }
        }
        if(n<0)
            ans= (double)(1)/(double)(ans);
        
        return ans;
    }
};