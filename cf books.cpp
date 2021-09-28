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
    setIO("test");
    int n,t;
    cin>>n>>t;
    vector<int> times(n);
    for (auto &i:times)cin>>i;
    int l=0;
    long long sum=0;
    int max_books=0;
    int books=0;
    for (int r=0;r<n;r++){
        sum+=times[r];
        books++;
        if (sum<=t)max_books = max(books,max_books);
        else{
            sum-=times[l];
            l++;
            books--;
        }
    }
    cout<<max_books<<'\n';
}
