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
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<li> arr;
		
		for(int i=0;i<n;i++)
		{
			li temp;
			cin>>temp;
			arr.pb(temp);
		}
		
		sort(arr.begin(),arr.end());
		
		li a=arr[0];
		li b=arr[n-1];
		li c;
		if(n%2==0)
		{
			c=(abs(a-arr[n/2])>abs(b-arr[n/2+1])) ?  arr[n/2]: arr[n/2+1]  ;
		}
		else
		{
			c=arr[n/2];
		}
		
		li sum=abs(a-b)+abs(b-c)+abs(a-c);
		
		cout<<sum<<endl;
		
	}
	
	
}
