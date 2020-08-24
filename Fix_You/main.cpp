/*
 * AUTHOR : _IceBorworntat926
 * OS     : Ubuntu
 * TASK   : CodeForces
 * */

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define space " "
#define endl '\n'
#define dec(a,b) fixed<<setprecision(b)<<a 

template <class A> void read(vector<A>& v);
template <class A,size_t S> void read(array <A, S>& a);
template <class T> void read(T& x)
{
	cin >> x;
}
void read(double& d)
{
	string t;
	read(t);
	d = stod(t);
}
void read(long double& d)
{
	string t;
	read(t);
	d = stold(t);
}
template <class H,class... T> void read(H& h,T&... t)
{
	read(h);
	read(t...);
}
template <class A> void read(vector <A>& x)
{
	for(auto& a : x)
	{
		read(a);
	}
}
template <class A,size_t S> void read(array<A, S>& x)
{
	for(auto& a : x)
	{
		read(x);
	}
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	read(q);
	while(q--)
	{
		int n,ans,m;
		ans = 0;
		read(n,m);
		vector <string> v(n);
		read(v);
		for(int i=0;i<n-1;++i)
		{
			if(v[i][m-1]=='R')
			{
				ans++;
			}
		}
		for(int i=0;i<m-1;++i)
		{
			if(v[n-1][i]=='D')
			{
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
