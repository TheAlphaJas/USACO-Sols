#include <bits/stdc++.h>
using namespace std;
//author: von_Braun
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(ulli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
#define ull unsigned long long
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) { return (a.second < b.second); }

int evalpoints(vector<tuple<int,int,int>> &game, int initpos) {
    int n = game.size();
    int a,b,g;
    int cpos=initpos;
    int z=0;
    rep(i,0,n) {
        a=get<0>(game[i]);
        b=get<1>(game[i]);
        g=get<2>(game[i]);
        if (a==cpos) {cpos=b;} else if (cpos==b) {cpos=a;}
        if (cpos==g) {z++;}
    }
    return z;
}

void solve() {
    int n,a,b,g;
    cin>>n;
    vector<tuple<int,int,int>> game;
    rep(i,0,n) {
        cin>>a>>b>>g;
        game.pb({a,b,g});
    }
    cout<<max({evalpoints(game,1), evalpoints(game,2), evalpoints(game,3)})<<endl;
}

int main() {
    //add quotes incase input output file
    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}