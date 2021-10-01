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
    setIO("pairup");
    int n;
    cin>>n;
    vector<pair<int,int>> cows(n);
    int total=0;
    for(auto&i:cows){
        cin>>i.s>>i.f;
        total+=i.s;
    }
    sort(all(cows));
    int l=0;
    int r=n-1;
    int worst_time=0;
    while (l<r){
        if (cows[l].s>cows[r].s){
            cows[l].s-=cows[r].s;
            cows[r].s=0;
            maxim(worst_time,cows[l].f+cows[r].f);
            r--;
        }
        else if(cows[l].s<cows[r].s){
            cows[r].s-=cows[l].s;
            cows[l].s=0;
            maxim(worst_time,cows[l].f+cows[r].f);
            l++;
        }
        else{
            cows[r].s=0;
            cows[l].s=0;
            maxim(worst_time,cows[l].f+cows[r].f);
            l++;
            r--;
        }
    }
    cout<<worst_time<<'\n';
   

}
