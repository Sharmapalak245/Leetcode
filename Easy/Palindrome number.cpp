class Solution {
public:

    bool isPalindrome(int x) {

        if(x<0){
        return false;
        }
        string n=to_string(x);
        stack<char> n2;
        for(int i=0;i<n.size();i++){
            n2.push(n[i]);
        }    
        for(int i=0;i<n.size();i++){
            if(n[i]==n2.top()){
                n2.pop();
            }
            else{
                return false;
            }
        }
        
        
        
         return true;
    }
};