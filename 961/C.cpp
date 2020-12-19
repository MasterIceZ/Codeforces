#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define int long long
#define double long double
#define sim template<typename T
#define fi first
#define se second

#define pii pair<int,int>
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define ub upper_bound
#define lb lower_bound
#define dec(_) cout << fixed << setprecision(_)
#define EACH(a) for(auto x : (a))

sim>void __test(T a){
	cerr << "DEBUG : ";
	cerr << a << endl;
}
sim>void __test(vector<T>v){
	cerr << "DEBUG : ";
	for(auto x : v){
		cerr << x << " " ;
	}
	cerr << endl;
}
sim>void read(T& a){
	cin >> a;
}
sim>void read(vector<T>& a){
	for(auto &x : a){
		read(x);
	}
}
sim ,class... H>void read(T& t,H&... h){
	read(t);
	read(h...);
}	
sim>vector<T> dp_qs(vector<T>dp,size_t nax){
	for(int i=1;i<=nax;++i){
		dp[i] += dp[i-1];
	}
	return dp;
}
int gcd(int a,int b){
	if(a==0){
		return b;
	} 
	if(b==0){
		return a;
	} 
	if(a%b==0){
		return b;
	}
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
string reverse(string s){
	int n = s.size(),cnt=0; 
	string rev = s; 
	for(int i=n-1;i>=0;--i){
		rev[cnt++] = s[i];
	}
   	return rev;
}
void writeCase(int _){
	cout << "Case #" <<  _ << ": \n"; 
}
bool isPrime(int n){
	if(n<=1){
		return false;
	}
	if(n<=3){
		return true;
	}
	if(n%2==0 or n%3==0){
		return false;
	}
	for(int i=5;i<sqrt(n);i+=6){
		if(n%i==0 or n%(i+2)==0){
			return false;
		}
	}
	return true;
}
sim>void DBG(){
	cerr << "]" << endl;
}
sim ,class... H>void DBG(T t,H... h){
	cerr << t;
	if(sizeof...(h)){
		cerr << ", ";
	}
	DBG(h...);
}	
#ifdef _DeBug
#define dbg(...) cerr << "Line(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

typedef long long ll;
bool __Q=0;
bool __writecase=0;
int n,m;
const int INF = 2e18;

void solution(){
	cin >> n >> m;
	vector<int>v(n),w(m);
	for(auto &x : v){
		cin >> x;
	}
	for(auto &x : w){
		cin >> x;
	}
	sort(all(v));
	int now = 0;
	for(int i=1;i<n-1;++i){
		now = gcd(now,v[i] - v[0]);
	}
	for(int i=0;i<m;++i){
		cout << gcd(w[i] + v[0],now) << space;
	}
	return ;
}

int32_t main (){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int T=1;
	int _____=0;
	if(__Q){
		cin >> T;
	}
	do{
		if(__writecase){
			writeCase(_____++);
		}
		solution();	
		cout << '\n';
	}while(--T);
	return 0;
}
