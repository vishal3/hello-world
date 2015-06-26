// Vishal Gupta IIIT-H
#include <bits/stdc++.h>
using namespace std;

#define sz(a) int((a).size())
#define all(c) c.begin(),c.end() //all elements of a container
#define rall(c) c.rbegin(),c.rend() 
#define INF		INT_MAX
#define FOR(i,a,b) 	for(int  i= (int )a ; i < (int )b ; ++i)
#define rep(i,n) 	FOR(i,0,n)
#define FORAB(i,a,b)      for(int i=(int)a; i<=b; i++)
#define PB push_back
#define MP make_pair
#define fill(a,b) memset(a,b,sizeof(a))
#define mod (int)(1e9 + 7)
#define F first
#define S second
#define asd(x) cout << "Here for " << #x << " :" <<x << endl
#define asdf(x, y)  cout << "Here FOR " << #x << " :" << x << " " << #y  << " :" << y << endl
#define si(n) scanf("%d",&n)
#define pi(n) printf("%d ",n)
#define pil(n) printf("%d\n",n)
#define pl(n) printf("%lld ",n)
#define pll(n) printf("%lld\n",n)
#define sl(n) scanf("%lld",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)

typedef long long int LL;
typedef vector <int> VI;
typedef pair < int ,int > PII;
LL power(LL a , LL b){
	LL x = 1 , y = a;
	while(b){
<<<<<<< HEAD
			if(b%2==1)
=======
			if(b&1)
>>>>>>> 26af193e9d0981a045220b0fdb172cb16ceb7e7e
				x = x*y;	
			y *= y;
			b/=2;
	}
	return x;
}
int main()
{
	   LL a , b;
	   cin >> a >> b;
	   cout << power(a,b) << endl;	       
<<<<<<< HEAD
       return 0;
=======
      return 0;
>>>>>>> 26af193e9d0981a045220b0fdb172cb16ceb7e7e
}

