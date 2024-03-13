class Solution {
public:
    int pivotInteger(int n) {
        int val1=1;
        int val2=n;
    int sum1=val1,sum2=val2;
        
        if(n==1) return n;
        
       while(val1<val2){
           if(sum1<sum2){
               sum1+=++val1;
           }
           else{
               sum2+=--val2;
           }
           if(sum1==sum2 && val1+1==val2-1){
               return val1+1;
           }
       }
        return -1;
    }
};
