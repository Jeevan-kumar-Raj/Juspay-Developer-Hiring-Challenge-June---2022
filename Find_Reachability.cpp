#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000001];
void solve(int src,int dest,unordered_map<int,int>&mp){
	mp[src]=1;
	for(int i=0;i<adj[src].size();++i){
		if(!mp[adj[src][i]]){
			solve(adj[src][i],dest,mp);
		}
	}
}

int main(){
	int n;
	cin>>n;
	unordered_map<int,int>mp;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		mp[x]=0;
	}
	int e;
	cin>>e;

	for(int i=0;i<e;++i){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	int src,dest;
	cin>>src>>dest;
	solve(src,dest,mp);
	cout<<mp[dest]<<endl;
	return 0;	
}