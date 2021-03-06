/*
 * AUTHOR : _IceBorworntat926
 * OS     : Ubuntu
 * TASK   : CodeForces
 * */

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(),(x).end()
#define space " "
#define endl '\n'
#define dec(a,b) fixed<<setprecision(b)<<a 

typedef long long ll;

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
long long _gcd(long long a,long long b)
{
	if(!a)
	{
		return b;
	}
	if(!b)
	{
		return a;
	}
	if(a%b==0)
	{
		return b;
	}
	return _gcd(b,a%b);
}
long long _lcm(long long a,long long b)
{
	/*a*b = gcd*lcm*/
	return ((a*b)/_gcd(a,b));
}

int32_t main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	for(read(T);T--;)
	{
		int n,ch;
		ch = 0;
		read(n);
		vector <int> v(n);
		read(v);
		sort(all(v));
		for(int i=0;i<n-1;++i)
		{
			if(v[i+1]-v[i]>1)
			{
				cout << "No" << endl;
				ch = 1;
				break;
			}
		}
		if(!ch)
		{
			cout << "Yes" << endl;
		}
	}	

	return 0;
}
