class Solution {
public:
    struct DSU{
        int sz;
        vector<int> size , parent;
        DSU(int n){
            sz = n;
            size.assign(sz , 1);
            parent.resize(sz);
            iota(parent.begin() , parent.end() , 0);
        }
        int find(int n){
            return parent[n] == n ? n : parent[n] = find(parent[n]); 
        }
        void Union(int a , int b){
            int leader_of_a = find(a);
            int leader_of_b = find(b);
            if(leader_of_a == leader_of_b) return;
            if(size[a] < size[b]){
                parent[leader_of_a] = leader_of_b;
                size[leader_of_b] += size[leader_of_a];
            }
            else{
                parent[leader_of_b] = leader_of_a;
                size[leader_of_a] += size[leader_of_b];
            }
        }
    };
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts){
        int n = (int) accounts.size();
        DSU dsu(n);
        map<string , int> emails;
        map<int , set<string>> merged;
        vector<vector<string>> answer;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 1 ; j < (int) accounts[i].size() ; ++j){
                if(emails.count(accounts[i][j])){
                    dsu.Union(i , emails[accounts[i][j]]);
                }
                else{
                    emails[accounts[i][j]] = i;
                }
            }
        }
        for(int i = 0 ; i < n ; ++i){
            for(int j = 1 ; j < accounts[i].size() ; ++j){
                merged[dsu.find(emails[accounts[i][j]])].insert(accounts[i][j]);
            }
        }
        for(auto &[idx , emails] : merged){
            vector<string> merged_emails = {accounts[idx][0]};
            for(auto email : emails){
                merged_emails.push_back(email);
            }
            answer.push_back(merged_emails);
        }
        return answer;
    }
};


// problem link: https://leetcode.com/problems/accounts-merge/description/