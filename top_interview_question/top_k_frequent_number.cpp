#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;

        for(int x: nums) mp[x]++;

        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(pair<int, int> p: mp) {
            pq.push({p.second, p.first});

            if(pq.size()>k) pq.pop();
        }

        vector<int> ans;

        while(pq.size()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};


class Solution2 {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        map<int,int>m;
        for(auto i: nums)m[i]++;
        vector<pair<int,int>>temp;
        for(auto i:m){
            temp.push_back({i.second,i.first});
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        int c=0;
        for(auto i:temp){
            c++;
            res.push_back(i.second);
            if(c==k)break;
        }
        return res;
    }
};


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}
