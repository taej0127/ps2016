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

int answer;
vector<pii> vp;
int n;

int f(int tlsakt, int Tmsakt,  int here, int topick)
{
	if(topick == 0)
	{
		if(tlsakt && Tmsakt)
		return abs(Tmsakt - tlsakt);
		else return INT_MAX;
	}

	if(here == n)
	{
		if(tlsakt && Tmsakt)
			return abs(Tmsakt - tlsakt);
		else
			return INT_MAX;
	}

	int ret; 

	// pick here		
	tlsakt *= vp[here].first;
	Tmsakt += vp[here].second;
	ret = f(tlsakt, Tmsakt, here +1 , topick-1);
	
	// no pick
	tlsakt /= vp[here].first;
	Tmsakt -= vp[here].second;
	ret = min(ret , f(tlsakt, Tmsakt, here +1, topick));

	return ret;
}

int main(int argc, char **argv)
{
	ios::sync_with_stdio(false);
	cin>>n;
	int a,b;
	forn(i,n)
	{
		cin>>a>>b;
		vp.pb(make_pair(a,b));	
	}
	answer = INT_MAX;

	for(int i = 1 ; i <= n ;i ++)
	{
		answer = min(answer, f(1,0,0,i));
//		cout<<answer<< ' ' <<i <<newline;
	}
	cout<<answer<<newline;
  return 0;
}
