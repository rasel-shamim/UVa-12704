#include<bits/stdc++.h>
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
#define fast                ios_base::sync_with_stdio(0);cin.tie(0)
#define M                   1000000007
long long inf = 1e18;
 
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	map<int ,int> mp;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		int x=arr[i]%k;
		mp[x]++;
	}
	int ans=0;
	for(int i=1;i<(k+1)/2;i++){
		ans += max(mp[i],mp[k-i]);
	}
	ans += min(mp[0],1);
	if(k%2==0){
		ans += min(mp[k/2],1);
	}
	cout<<ans<<endl;
return 0;
}
