//Inverson count
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int> ,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>PBDS;

int main()
{/*
	#indef ONLINE_JUDGE
		freopen("input.txt","r"stdin);
		freopen("output.txt","w",stdout);
		
	#endif
*/	

		
		//{value,index}
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int c[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		
	}
	
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]-b[i];
		
	}
			PBDS st;
			int ans=0;
		//insertion takes logn time(in vector it take nlogn)
		

		
		for(int i=0;i<n;i++)
			{
					ans += st.size()-st.order_of_key({-c[i],1e5});
					st.insert({c[i],i});
			}
			
			cout<<ans;
		//work as lower_bound
		/*
		cout<<st.order_of_key(5)<<"\n";
		cout<<st.order_of_key(6)<<"\n";
		*/
}
