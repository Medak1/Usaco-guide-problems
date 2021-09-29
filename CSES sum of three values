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
    int n,x;
    cin>>n>>x;
    if (n<3){
        cout<<"IMPOSSIBLE"<<'\n';
        return 0;
    }
    vector<pair<int,int>> vals(n);
    int index=0;
    for (auto &i:vals){
        index++;
        cin>>i.first;
        i.second=index;
        }
    sort(all(vals));
    for (int m=0;m<n;m++){
        int target = x-vals[m].f;
        int l=0;
        int r=n-1;
        while (l!=r){
            if (l==m){
                l++;
                continue;
            }
            else if(r==m){
                r--;
                continue;
            }
            if (vals[l].f+vals[r].f==target){
                cout<<vals[l].s<<' '<<vals[m].s<<' '<<vals[r].s;
                return 0;
            }
            else if (vals[l].f+vals[r].f<target){
                l++;
            }
            else{
                r--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<'\n';

}
