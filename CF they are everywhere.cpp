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
    string flats;
    cin>>flats;
    map<char,int> pokemons;
    for (auto i:flats)pokemons[i]++;
    int number=pokemons.size();
    map<char,int> current_pokemons=pokemons;
    for (auto &i:current_pokemons)i.s=0;
    int l=0;
    int min_valid=INT_MAX;
    for (int r=0;r<n;r++){
        current_pokemons[flats[r]]++;
        pokemons[flats[r]]--;
        bool valid=true;
        for (auto i:current_pokemons){
            if (i.s==0)valid=false;
        }
        if (!valid)continue;
        while (true){
            if (current_pokemons[flats[l]]==1)break;
            current_pokemons[flats[l]]--;
            l++;
        }
        min_valid=min(min_valid,r-l+1);
    }
    cout<<min_valid<<'\n';
    
}
