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

void con12_24(string str, string r)
{
    // Get hours
    int str_h1 = (int)str[1] - '0';
    int str_h2 = (int)str[0] - '0';
    int str_hh = (str_h2 * 10 + str_h1 % 10);
 	int str_m1 = (int)str[3] - '0';
 	int str_m2 = (int)str[4] - '0';
 	int str_mm = (str_m1 * 10 + str_m2 % 10);
 	
 	
    // If time is in "AM"
    //12:00 AM 12:00 AM
    if (str[6] == 'A')
    {
        if (str_hh == 12)
        {
           str_hh=0;  
        }
    }
 
    // If time is in "PM"
    else
    {
        if (str_hh != 12)
        {
        	str_hh = str_hh + 12;
        }
        
    }
    float str1 = (float) str_hh + (float) str_mm/60.0 ;
  //  cout<<str_hh<<" : "<<str_mm<<endl;
    //----------------------------------------------------------------------------------------------------
    
	int r1_h1 = (int)r[1] - '0';
    int r1_h2 = (int)r[0] - '0';
    int r1_hh = (r1_h2 * 10 + r1_h1 % 10);
 	int r1_m1 = (int)r[3] - '0';
 	int r1_m2 = (int)r[4] - '0';
 	int r1_mm = (r1_m1 * 10 + r1_m2 % 10);
 	
 
 	
 	if (r[6] == 'A')
    {
        if (r1_hh  == 12)
        {
           r1_hh =0;  
        }
    }
 
    // If time is in "PM"
    else
    {
        if (r1_hh  != 12)
        {
        	r1_hh  = r1_hh  + 12;
        }
        
    }
    float range1 = (float) r1_hh + (float) r1_mm/60.0 ;
   //	cout<<r1_hh<<" : "<<r1_mm<<endl;
//----------------------------------------------------------------------------------------------------

	int r2_h1 = (int)r[10] - '0';
    int r2_h2 = (int)r[9] - '0';
    int r2_hh = (r2_h2 * 10 + r2_h1 % 10);
 	int r2_m1 = (int)r[12] - '0';
 	int r2_m2 = (int)r[13] - '0';
 	int r2_mm = (r2_m1 * 10 + r2_m2 % 10);
 	
 	
 	
 	if (r[15] == 'A')
    {
        if (r2_hh  == 12)
        {
           r2_hh =0;  
        }
    }
 
    // If time is in "PM"
    else
    {
        if (r2_hh  != 12)
        {
        	r2_hh  = r2_hh  + 12;
        }
        
    }
    float range2 = (float) r2_hh + (float) r2_mm/60.0 ;
   // cout<<r2_hh<<" : "<<r2_mm<<endl;
     
     
     if(str1>=range1 && str1<=range2)
     {
     	cout<<"1";
	 }
	 else
	 cout<<"0";
     

};


int main() 
{	

	fast;
	
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string tm;
		getline(cin, tm); 
		int n;
		cin>>n;
		cin.ignore();
		for(int i=0;i<n;i++)
		{
			string r;
			getline(cin,r);
			con12_24(tm,r);
		}
		cout<<endl;
	
	}
}
