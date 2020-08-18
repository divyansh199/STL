#include<bits/stdc++.h>
using namespace std;

int main()
	{ //method1
		map<string,int>m;
		
		m.insert(make_pair("mango",100));
	//method 2	 
		 pair<string,int >p;
		p.first="Apple";
		p.second=120;
		
		m.insert(p);
		
	//method 3
		m["Banana"]=20;
		
		//search
	
		string fruit;
		cin>>fruit;
		
		auto it =m.find(fruit);
		if(it!=m.end()){
			cout<<"price of"<<fruit<<"is"<<m[fruit]<<endl;
			
		}
		else{
			cout<<"fruit is not present";
		}
		
		//another way to find key
		
		//it stores uniquw key only once
		
		if(m.count(fruit))
		    {
		        cout<<"Price is"<<m[fruit]<<endl;
		    }
		//erase
		m.erase(fruit);
		
		//update Price
		m[fruit] += 20;
		
		//interate over every fruit
		
		m["liches"]=60;
		m["pineapple"]=80;
		
		
		for(auto it =m.begin();it!=m.end();it++)
		{
		    cout<<it->first<<" "<<it->second;
		    
		}
		
		for(auto p:m)
		{
		    cout<<p.first<<","<<p.second<<endl;
		}
		return 0;
	}
