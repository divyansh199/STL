//generic means fuction work with diff data type//

//algo as generic//

#include<bits/stdc++.h>
using namespace std;

template<typename t>


int search(t arr[],int n,t key)
{
for(int p=0;p<n;p++)
	{
		if(arr[p]==key)
		return p;
		
		
		}	
		return n;
}

template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key)
{
	while(start!=end)
	{
		if(*start == key)
		{
			return start;
	
		}
		start++;
	}
	return end;
}
	
int main(){
	/*
	int a[]= {1,2,3,4 ,10,12};
	int n= sizeof(a)/sizeof(int);
	int key =10;
	cout<<search(a,n,key)<<endl;
	float b[]={1.1,1.2,1.3};
	float k= 1.2;
	cout<<search(b,3,k);
	*/
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(5);
	l.push_back(3);
	
	auto it = search(l.begin(),l.end(),5);
	
	if(it == l.end())
	{
		cout<<"list is empty";
	}
	else{
		cout<<*it<<endl;
	}
}
