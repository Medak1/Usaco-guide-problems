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
    vector<pii> movies(n);
    for_n(i,0,n){
        int a,b;
        cin>>a>>b;
        movies[i]={b,a};
    }
    sort(all(movies));
    int ans=0;
    int currentevend=-1;
    for_n(i,0,n){
        if (movies[i].second>=currentevend){
            currentevend=movies[i].first;
            ans++;
        }
    }
    cout<<ans<<'\n';
}

