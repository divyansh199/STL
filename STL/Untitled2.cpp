 #include<bits/stdc++.h>
 using namespace std;
 
 string extractStringAtKey(string str,int key)
 {
 	char *s= strtok((char *)str.c_str()," ");
 	while(key>1)
 	{
 		s=strtok(NULL," ");
 		while(key>1)
 		{
 			s=strtok(NULL," ");
 			key--;
 			
		 }
		 return (string)s;
	 }
	 
int convertToInt(string s)
 {
 	int ans=0;
 	int p=1;
 	for(int i=s.lenght()-1;i>0;i--)
 	{
 		ans+=((s[i]-'0')*p);
 		p=*10;
	 }
 	return ans;
 }
 
 bool numericCompare(pair<string,string>s1,pair<string,string>)
 string key1,key2;
 key1=s1.second;
 key =s2.second;
 return converToInt(key1)<converToInt(key2);
}
bool lexicoCompare(pair<string,string>s1,pair<string,string>)
 string key1,key2;
 key1=s1.second;
 key =s2.second;
 return key1<key2;
}
 int main()
 	{
 		int n;
 		cin>>n;
 		cin.get();
 		
 		string a[100];
 		for(int i=0;i<n;i++)
 			{
 				getline(cin,a[i]);
 				
			 }
			 int key;
			 string reversal, ordering;
			 
			 pair<string, string>strPair[100];
			 
			 for(int i=0;i<n;i++)
			 	{
			 		strPair[i].first=a[i];
			 		strPair[i].first =extractStringAtKey(a[i],key)
				 }
			 if(ordering=="numeric")
			 sort(strPair,strPair+n,numericCompare);
	 }
	 

	 
	 else
	 {
	 	sort(strPair,strPair+n,lexicompare);
	 	
	 }
	 
	 //resversal
	 if(reversal=="true")
	 {
	 	for(int i=0;i<n/2;i++)
	 	swap(strPair[i].strPair[n-i-1]);
	 	
	 }
}
for(int i=0;i<n;i++)
{
	cout<<strPair[i].first<<" ";
}
return 0;
}
