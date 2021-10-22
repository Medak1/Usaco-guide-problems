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
    int n,m,k;
    cin>>n>>m>>k;
    vi applicants(n);
    for (auto &i:applicants)cin>>i;
    vi appartements(m);
    for (auto &i:appartements)cin>>i;
    sort(all(applicants));
    sort(all(appartements));
    int i=0,j=0;
    int given=0;
    while (i<n && j<m){
        if (abs(applicants[i]-appartements[j])<=k){
            given++;
            i++;
            j++;
        }
        else if (applicants[i]-appartements[j]<-k){
            i++;
        }
        else {
            j++;
        }
    }
    cout<<given<<'\n';
}

