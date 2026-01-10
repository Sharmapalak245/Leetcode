class Solution {
public:
    vector<int> plusOne(vector<int>& num) {
            
            for(int i=num.size()-1;i>=0;i--){

                if(num[i]<9){
                    num[i]++;
                    return num;
                }

                else{
                    num[i]=0;
                }
            }

            num.insert(num.begin(),1);
            return num;
    }
        
    };