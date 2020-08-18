#include<bits/stdc++.h>
using namespace std;

void query_print(priority_queue<int,vector<int>,greater<int>>pq)

{  
   while(!pq.empty())
   {
   
	cout<<pq.top()<<",";
	pq.top();
	
}
cout<<endl;

int main()
{
	int no;
	
	priority_queue<int,vector<int>,greater<int>>pq;
	
	int cs=0;
	int k=3
	
	while(scanf("%d",&no)!=EOF)
		{
			if(n==-1)
			{
				query_print(pq);
				
			}
			else if(cs<k)
				{
					pq.push(no);
					cs++;
				}
				
				else if(no>pq.top())
					{
						pq.pop();
						pq.push(no);
					}
				
				
		}
}

return 0;

}
