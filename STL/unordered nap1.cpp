#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int ,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>PBDS;

int main()
{/*
	#indef ONLINE_JUDGE
		freopen("input.txt","r"stdin);
		freopen("output.txt","w",stdout);
		
	#endif
*/	
		PBDS st;
		st.insert(1);
		st.insert(5);
		st.insert(16);
		st.insert(13);
		//insertion takes logn time(in vector it take nlogn)
		for(int i=0;i<st.size();i++)
			{
				cout<<i<<" "<<*st.find_by_order(i)<<"\n";
				
			}
		//work as lower_bound
		cout<<st.order_of_key(5)<<"\n";
		cout<<st.order_of_key(6)<<"\n";
}
