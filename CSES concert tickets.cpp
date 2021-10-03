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
    int n,m;
    cin>>n>>m;
    map<int,int> tickets;
    for_n(i,0,n){
        int b;
        cin>>b;
        tickets[b]++;
        }
    vi prices(m);
    for (auto &i:prices)cin>>i;
    for (int price:prices){
        if (tickets.size()==0){
            cout<<-1<<'\n';
            continue;
        }
        auto ans_ptr = tickets.upper_bound(price);
        
        if (ans_ptr==tickets.begin())cout<<-1<<'\n';
        else{
            
            ans_ptr--;
            cout<<ans_ptr->f<<'\n';
            tickets[ans_ptr->f]--;
            if (tickets[ans_ptr->f]==0)tickets.erase(ans_ptr->f);
        }
    }

}
