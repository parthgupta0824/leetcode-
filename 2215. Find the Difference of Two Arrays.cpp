class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& v1, vector<int>& v2) {
        vector<vector<int>> ans;
        unordered_map<int,int> u;
        vector<int> v;
        unordered_set<int> help;

        for(auto i : v2) u[i] = 0;
        for(auto i : v1){
            auto it = u.find(i);
            if(it == u.end()){
                help.insert(i);
            }
        }
        for(auto i : help)v.push_back(i);
        ans.push_back(v);
        u.clear();
        help.clear();
        v.clear();
        for(auto i : v1) u[i] = 0;
        for(auto i : v2){
            auto it = u.find(i);
            if(it == u.end()){
                help.insert(i);
            }
        }
        for(auto i : help)v.push_back(i);


        ans.push_back(v);

        return ans;
    }
};