#include <bits/stdc++.h>
#define for_n(i,a,n) for (int i=a;i<n;i++)
#define maxim(a,b) a=max(a,b)
#define f first
#define s second
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int,int>
#define vi vector<int>
using namespace std;

void setIO(string name=""){
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()!=0){
        freopen((name+".in").c_str(),"r",stdin);
        freopen((name+".out").c_str(),"w",stdout);
    }
}

int main(){
    setIO();
    int n;
    cin>>n;
    vi distances(n);
    for(auto &i:distances)cin>>i;
    sort(all(distances));
    int median;
    median = distances[n/2];
    long long ans=0;
    for (auto i:distances){
        ans+=abs(i-median);
    }
    cout<<ans<<'\n';
}

