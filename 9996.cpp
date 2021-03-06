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

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	string pat;
	cin>>n>>pat;
	auto it = find(pat.begin(), pat.end(), '*');
//	cout<<it-pat.begin()<<newline;
	auto jt = find(pat.rbegin(), pat.rend(), '*');
//	cout<<jt-pat.rbegin()<<newline;
	string left = string(pat.begin(), it);
	string right = string(pat.rbegin(), jt);
//	cout<<left<< ' '<<right<<newline;
	
	while(n--)
	{
		string s;
		cin>>s;
//		cout<<string(s.begin(), s.begin() + left.size())<<newline;
//		cout<<string(s.rbegin(), s.rbegin() + right.size())<<newline;
		if(left.size() + right.size() > s.size() ) 
		{
			cout<<"NE"<<newline;
			continue;
		}

		if(s.size() >= left.size() && left == string(s.begin(), s.begin() + left.size()))
		{
			if(s.size() >= right.size() && right == string(s.rbegin(), s.rbegin() + right.size()))
			{
				cout<<"DA"<<newline;
			}
			else cout<<"NE"<<newline;
		}
		else
			cout<<"NE"<<newline;
	}
  return 0;
}
