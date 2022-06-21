#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        int r;
	        cin>>r;
	        mp[r]++;
	    }
	    vector<pair<int,int>> v;
	    for(auto it=mp.begin();it!=mp.end();it++)
    	    v.push_back(make_pair(it->first,it->second));
    	 sort(v.begin(),v.end(),compare);
    	for(int i=0;i<v.size();i++)
    	{
    	    while(v[i].second--)
    	        cout<<v[i].first<<" ";
    	}
    	cout<<endl;
	}
	return 0;
}