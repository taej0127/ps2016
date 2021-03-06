#include <iostream> // standard input & output cout cin
#include <cstdio> // scanf printfsssss
#include <vector> // std::vector
#include <algorithm>
#include <string> // std::string
#include <queue> // std::queue
#include <cstring> // memset
#include <set> // std::set
#include <utility> // std::pair, std::make_pair
#include <map>
#include <list>
#include <stack>
#include <deque>
#include <cmath>
#include <ctime>
#include <chrono>
#include <climits>
#include <cassert>
using namespace std;

typedef unsigned ull;
typedef long long ll;
typedef vector<int> VI;
typedef pair<int, int> pii;

const char newline = '\n';

const int dy[4] = {-1,0,0,1};
const int dx[4] = {0,-1,1,0};
#define pb(x) push_back(x)
#define forn(i,n) for(int i = 0 ; i < int(n); ++i)
const int mod = 1000000007;
ll powmod(ll a, ll b) {ll res=1; a %= mod; assert(b >= 0); for(; b; b >>= 1) {if (b & 1) res = res * a % mod; a = a * a % mod;} return res;}

#define MAX_N 10000
int fg, v[MAX_N]; // is there a cycle? // visited
int od[MAX_N]; // order
int p; // pointer

void dfs(int a)
{
	if(v[a] == 1) fg = 1; // there is a back edge!==> cycle
	if(v[a]) return ;

	v[a] = 1; // gray

	for(int i = 0 ; i < adj[a].size() ; i++) // for each neighbor a->i dfs(i)
	{
		 dfs(adj[a][i]);
	}
	v[a] = 2; // black
	od[p] = a; p--;
}

int main(int argc, char **argv)
{
	ios::sync_with_stdio(false);
	
	//...
	for(int i = 0 ;i < n ; i++)
		v[i] = 0;  // white
	 
	fg = 0; p = n-1;
	for(int i = 0 ;i < n ; i++)
		if(!v[i]) // not visited
			dfs(i);
	if(fg) // say there is a cycle!
	//...
  return 0;
}
