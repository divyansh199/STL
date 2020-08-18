#include<bits/stdc++.h>
using namespace std;

bool compare(pair<string,int>A,pair<string,int>B)
    {
        if(A.second ==B.second)
            {
                return A.first<B.first;
            }
            
            else{
                return A.second>B.second;
            }
    }

int main() {

    int x;
    cin>>x;
	int n;
	cin>>n;
	list<pair<string,int>>l;
	string s;

	int k;
	
	
    

	for(int i=0;i<n;i++)
		{
				cin>>s;
					cin>>k;
					
					if(k>x && k<100)
					{
						l.push_back(make_pair(s,k));
		
					}
					}
		

        l.sort(compare);

		for(auto it:l)
		{
		
			    
			    
			        cout<<it.first<< " "<<it.second<<endl;
			    
		}

	
		return 0;
}
