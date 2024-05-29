class Solution {
public:
    void divbytwo(string& s){
    s.pop_back();
    }
    
    void addone(string& s){
    int i=s.size()-1;
        while(i>=0 && s[i]!='0'){
        s[i]='0';
            i--;
        }
        
    if(i<0){
        s='1'+s;
    }else{
        s[i]='1';
        }
    }
    
    
    int numSteps(string s) {
      int n=s.size();
        int op=0;
        while(s.size()>1){
            n=s.size();
            if(s[n-1]=='0'){
                divbytwo(s);
            } else{
                addone(s);
            }
            op++;
        }
        return op;
    }
};
