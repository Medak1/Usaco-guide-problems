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
    setIO("herding");
    int n;
    cin>>n;
    vector<int> cows(n);
    for(auto& i:cows)cin>>i;
    sort(all(cows));
    int l=0;
    int r=0;
    int best=0;
    for (l=0;l<n;l++){
        while (r<n-1 && cows[r+1]-cows[l]+1<=n)r++;
        maxim(best,r-l+1);
    }
    if ((cows[1]-cows[0]>2 && cows[n-1]-cows[1]==n-2) || (cows[n-1]-cows[n-2]>2 && cows[n-2]-cows[0]==n-2)){
        cout<<2<<'\n';
    }
    else{
        cout<<n-best<<'\n';
    }
    cout<<cows[n-1]-cows[0]-n+2-min(cows[n-1]-cows[n-2],cows[1]-cows[0])<<'\n';
    }
