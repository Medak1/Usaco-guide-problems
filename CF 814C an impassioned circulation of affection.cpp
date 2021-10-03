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
    string garland;
    cin>>garland;
    int q;
    cin>>q;
    for_n(i,0,q){
        int m;
        cin>>m;
        char c;
        cin>>c;
        int best_koyomity=0;
        int l=0;
        int current_koyomity=0;
        int remaining_paint=m;
        for (int r=0;r<n;r++){
            current_koyomity++;
            if (garland[r]!=c)remaining_paint--;
            while(remaining_paint<0){
                if (garland[l]!=c)remaining_paint++;
                current_koyomity--;
                l++;
            }
            best_koyomity = max(current_koyomity,best_koyomity);
        }
        cout<<best_koyomity<<'\n';
    }
}
