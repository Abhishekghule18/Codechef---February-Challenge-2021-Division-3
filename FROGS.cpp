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

int find_index(vector<int> w,int x)
{
	auto itr=find(w.begin(), w.end(), x);
	if(itr != w.end())
	{
		return (itr-w.begin());
	}
	else
	{
		return -1;
	}
	
}

int main() 
{	

	fast;
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int temp,taps=0;
		vector<int> w,l,arr;
		
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			w.push_back(temp);
			arr.push_back(temp);
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			l.push_back(temp);
		}
		
		/*for(int i=0;i<n;i++)
		{
			cout<<w[i]<<" "<<arr[i]<<" : "<<l[i]<<endl;
		}*/
		sort(arr.begin(),arr.end());
		int pos[5]={0,1,2,3,4};
		
		for(int i=1;i<n;i++)
		{
			int index = find_index(w,arr[i]);
			int iops = pos[find_index(w,arr[i-1])]; 	//index of previous smaller
			int temp= index;
			
			while(temp<=iops)
			{
				temp += l[index];
				taps++;
				pos[index]=temp;
				
			}
		}
		
		cout<<taps<<endl;
	}
	
	
	
	
}
