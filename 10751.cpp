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
#include <climits>
#include <cassert>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef long double ld;

#define mod 1000000007

const char newline = '\n';

ll powmod(ll a, ll b) {ll res=1; a %= mod; assert(b >= 0); for(; b; b >>= 1) {if (b & 1) res = res * a % mod; a = a * a % mod;} return res;}

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	string s;
	int e = 1;
	ll c = 0;
	ll co = 0;
	ll cow = 0;
	cin>>n;
	cin>>s;

	for(int i = 0 ;  i< s.size(); i++)
	{
		if(s[i] == 'C')
		{
			c += e;		
		}
		else if(s[i] == 'O')
		{
			co += c;			
		}
		else
		{
			cow += co;	
		}
//		cout<<e<< ' ' <<c<< ' '<<co<< ' '<<cow<<newline;
	}
	cout<<cow<<newline;
  return 0;
}
