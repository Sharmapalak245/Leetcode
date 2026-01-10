class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0) return 0;
        double guess=x/2.0;

        while(true){
            double next=(guess+x/guess)/2;
            if(fabs(next-guess)<1e-7){
                break;
            }
            guess=next;
        }
        long long ans=(long long)guess;
        
        while((ans+1)*(ans+1)<=x) ans++;
        while((ans)*(ans)>x) ans--;
        return (int)ans;
        
    }
};