//how to use a class in a vector//

//sort the based upon distance,distance is equal then name
#include<bits/stdc++.h>
using namespace std;



class Car{
	public:
		string car_name;
		int x,y;
		Car(){
			
		}
		Car(string n,int x,int y)
			{
				car_name=n;
				this->x=x;
				this->y=y;	
			}
			int dist()
			{
				return x*x +y*y;
			}
	};
	
		bool compare(Car A,Car B)
{
	int da =A.dist();
	int db =B.dist();
	
	if(da==db)
	{
		return A.car_name.length()<B.car_name.lenght();
	}
	return da<db;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,x,y;
		cin>>n;
		vector<car>v;
		for(i=0;i<n;i++)
		{
			cin>>car_name>>x>>y;
			car temp(car_name,x,y)
			v.push_back(temp);
	
				}
				sort(v.begin(),v.end(),compare);
				
				for(auto c: v)
					{
						cout<<"car"<<c.car_name<<"dist"<<c.dist()<<"location"<<c.x<<c.y<<endl;
					}
				
	
	return 0;

	
}
