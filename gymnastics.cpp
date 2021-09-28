#include <bits/stdc++.h>
#define for_n(i,a,n) for (int i=a;i<n;i++)
#define maxim(a,b) a=max(a,b)
#define f first
#define s second
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
    setIO("gymnastics");
    int k,n;
    cin>>k>>n;
    map<int,vector<int>> cow_scores;
    for_n(i,0,k){
        for_n(j,0,n){
            int cow;
            cin>>cow;
            cow_scores[cow].push_back(j);
        }
    }
    int consistent=0;
    for (int i=1;i<n;i++){
        for (int j=i+1;j<n+1;j++){
            bool up_way_consistent=true;
            for_n(m,0,k){
                if (cow_scores[i][m]<cow_scores[j][m]){
                    up_way_consistent=false;
                }
            }
            bool down_way_consistent=true;
            for_n(m,0,k){
                if (cow_scores[i][m]>cow_scores[j][m]){
                    down_way_consistent=false;
                }
            }
            if (up_way_consistent || down_way_consistent){
                consistent++;}
        }
    }
    cout<<consistent<<'\n';
}
