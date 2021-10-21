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
    int x,n;
    cin>>x>>n;
    set<int> lights={0,x};
    multiset<int> intervals={x};
    while (n--){
        int p;
        cin>>p;
        auto r=lights.upper_bound(p);
        auto l=r;
        l--;
        int dist = *r-*l;
        intervals.erase(intervals.lower_bound(dist));
        intervals.insert(*r-p);
        intervals.insert(p-*l);
        lights.insert(p);
        cout<<*intervals.rbegin()<<'\n';
    }
}

