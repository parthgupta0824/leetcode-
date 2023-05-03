class Solution {
public:
    int arraySign(vector<int>& v) {
        auto x = find(v.begin(),v.end(),0);
        if(x != v.end())return 0;
        int cnt =0;
        for(auto i : v){
            if(i < 0)cnt++;
            
        }
        if(cnt %2 == 0)return 1;
        return -1;
    }
};