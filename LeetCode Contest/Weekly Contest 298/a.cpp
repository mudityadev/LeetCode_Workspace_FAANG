class Solution {
public:
    int minimumNumbers(int num, int k) {
        if(num&1 and k%2==0) return -1;
        if(num==0) return 0;
        if(num%10==k) return 1;

        if(k==0) return -1;
        int ans=1;
        num-=k;
        while (num%10!=0 and num>0)
        {
            num-=k;
            ans++;
        }

        if(num<0) return -1;
        return ans;
        

    }
};