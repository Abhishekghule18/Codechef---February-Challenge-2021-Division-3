# include<bits/stdc++.h>
# define fast ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
# define limit 1000000007
# define ll long long 
# define li long int
# define ulli unsigned long long int 
# define ff first
# define ss second
# define pb push_back
# define vi vector <int>
# define mii map <int,int>
# define pii pair <int,int>
# define endl "\n"

using namespace std;

int main() 
{	

	fast;
	
	int n;
	cin>>n;
	
	int max_=1;

	for(int i=10;i>0;i--)
	{
		if(n%i==0)
		{
			max_=i;
			break;
		}
	}
	
	cout<<max_<<endl;
	
	
	
}
