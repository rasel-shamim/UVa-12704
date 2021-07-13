#include<bits/stdc++.h>
 
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
#define M                   1000000007
#define vl                  int128_t
long long inf = 1e18;

 
using namespace std;

int main(){
    set<ll> ans;
    set<ll> st;
    ll n,k;
    scanf("%lld %lld",&n,&k);
    ll qx,qy,x,y,qpos;
    scanf("%lld %lld",&qx,&qy);
    qpos = (qx-1)*n + qy;
    for(int i=0;i<k;i++){
        scanf("%lld %lld",&x,&y);
        ll g = (x-1)*n + y;
        st.insert(g);
    }
    ll m = qpos - (n+1);
    ll dif = n+1;
    ll row = qx-1,col = qy-1;
    while(!st.count(m) && row>=1 && col>=1){
        ans.insert(m);
        m -= dif;
        row--;
        col--;
    }

    m = qpos - n;
    dif = n;
    row = qx-1;
    col = qy;
    while(!st.count(m) && row>=1){
        ans.insert(m);
        m -= dif;
        row--;
    }
    m = qpos - (n-1);
    dif = n-1;
    row = qx-1;
    col = qy+1;
    while(!st.count(m) && row>=1 && col<=n){
        ans.insert(m);
        m -= dif;
        row--;
        col++;
    }
    m = qpos - 1;
    dif = 1;
    row = qx;
    col = qy-1;
    while(!st.count(m) && col>=1){
        ans.insert(m);
        m -= dif;
        col--;
    }
    m = qpos + 1;
    dif = 1;
    row = qx;
    col = qy+1;
    while(!st.count(m) && col<=n){
        ans.insert(m);
        m += dif;
        col++;
    }

    m = qpos + (n-1);
    dif = n-1;
    row = qx+1;
    col = qy-1;
    while(!st.count(m) && row<=n && col>=1){
        ans.insert(m);
        m += dif;
        col--;
        row++;
    }
    m = qpos + n;
    dif = n;
    row = qx+1;
    while(!st.count(m) && row<=n){
        ans.insert(m);
        m += dif;
        row++;
    }
    m = qpos + (n+1);
    dif = n+1;
    row = qx+1;
    col = qy+1;
    while(!st.count(m) && row<=n && col<=n){
        ans.insert(m);
        m += dif;
        col++;
        row++;
    }
    
    cout<<ans.size()<<endl;

return 0;
}

