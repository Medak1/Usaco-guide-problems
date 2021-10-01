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
    setIO("diamond");
    int n,k;
    cin>>n>>k;
    if (n<=2){
        cout<<n<<'\n';
        return 0;
    }
    vector<int> diamonds(n);
    for (auto& i:diamonds)cin>>i;
    sort(all(diamonds));
    vector<pii> diamond_ranges(n);
    for_n(i,0,n){
        int upperbound=diamonds[i]+k;
        int a=i;
        while (true){
            
            if (a+1==n)break;
            if (diamonds[a+1]>upperbound)break;
            a++;
            
        }
        diamond_ranges[i]={i,a};
    }
    vector<int> maxfromI(n);
    maxfromI[n-1]=diamond_ranges[n-1].s-diamond_ranges[n-1].f+1;
    for (int i=n-2;i>=0;i--){
        maxfromI[i]=max(diamond_ranges[i].s-diamond_ranges[i].f+1,maxfromI[i+1]);
    }
    int max_dim=0;
    for(auto i:diamond_ranges){
        int ficount = i.s-i.f+1;
        int next_valid=i.s+1;
        int secount=0;
        if (next_valid==n)secount=0;
        else{
            
            secount=maxfromI[next_valid];
 
        }
        maxim(max_dim,ficount+secount);
    }
    cout<<max_dim<<'\n';

}
