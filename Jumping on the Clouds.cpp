#include<bits/stdc++.h>

#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
#define fast                ios_base::sync_with_stdio(0);cin.tie(0)
#define M                   1000000007
#define vl                  int128_t
long long inf = 1e18;


using namespace std;

int n;
int dp[105];
int arr[105];

int fun(int pos){
	if(pos>=(n-1)) return 0;
	if(dp[pos]!=-1) return dp[pos];
	if(arr[pos]==1){
		 return dp[pos]= 1000000;
	}
	else{
		int val1 = fun(pos+1)+1;
		int val2 = fun(pos+2)+1;
		return dp[pos] = min(val1,val2);
	}
}

 
int main(){
	for(int i=0;i<105;i++){
		dp[i] = -1;
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<fun(0)<<endl;

return 0;
}
