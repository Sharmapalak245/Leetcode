class Solution {
public:
    int romanToInt(string s) {
        vector<int> arr;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                arr.push_back(1);
            }
            else if(s[i]=='V'){
                arr.push_back(5);
            }
            else if(s[i]=='X'){
                arr.push_back(10);
            }
            else if(s[i]=='L'){
                arr.push_back(50);
            }
            else if(s[i]=='C'){
                arr.push_back(100);
            }
            else if(s[i]=='D'){
                arr.push_back(500);
            }
            else if(s[i]=='M'){
                arr.push_back(1000);
            }
        }
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(i+1<arr.size() && arr[i]<arr[i+1]){
                sum=sum-arr[i];
            }
            else{
                sum=sum+arr[i];
            }
        }
        return sum;
    }
};