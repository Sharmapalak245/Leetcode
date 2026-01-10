class Solution {
public:
    bool isValid(string s) {
        stack<int> s1;
        for(int i=0;i<s.size();i++){
          if(s[i]=='('||s[i]=='{'||s[i]=='['){
            s1.push(s[i]);
          }
          else{
          if(s1.empty()){
              return false;
          }
          else if(s[i]=='}'&& s1.top()!='{'){
            return false;
          }
          else if(s[i]==']'&& s1.top()!='['){
            return false;
          }
          else if(s[i]==')'&& s1.top()!='('){
            return false;
          }
          else{
            s1.pop();
          }   
        }
        }
        if(!s1.empty()){
            return false;
        }
        
        
        return true; 
       
    }
};