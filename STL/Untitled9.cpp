/* Submitted by - Divyansh Waghmare
	Roll.No-3149
	Division-A2;
	PRN-0120180448
*/


/*Q. In an I.C engine mechanism the crank is 200mm long and connecting rod is 750mm long 
when the angle turned by the crank is 60 degree from 1DC and angular velocity of the crank is 20 rad/sec. 
and it is increasing at the rate of 15 rad/sec^2 find.
1) Veclocity and acceleration of piston.
2).Angular velocity and angular acceleration of connecting rod. */

#include<bits/stdc++.h>
using namespace std;

int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		
		double r,l;
		double angle,omega,alpha;
		double n,vp,ap,wc,ac;
		cout<<"enter value of radius in meters"<<endl;
		cin>>r;
		cout<<"enter value of crank's length in meters "<<endl;
		cin>>l;
		cout<<"enter value of angle turend by crank in degree "<<endl;
		cin>>angle;
		cout<<"enter value of angular velocity in rad/sec"<<endl;
		cin>>omega;
		cout<<"enter value of angular velocity in rad/sec^2"<<endl;
		cin>>alpha;
		
		// calculate obliquity ratio and velocity of piston//
		
		n = l/r; // obliquity ratio
		cout<<"value of Obliquity ratio is ="<<n<<endl;
		
		//calculation of velocity of piston//
		
		double k;
		k=(angle * 3.14159/180);
		vp= r*omega*(sin(k)+ (sin(2*k) / 2*n));
		cout<<"value of velocity of piston is="<<vp<<" m/sec"<<endl;
		
		//calculate acceleration of piston
		
		// if angular velocity of crank is not uniform then acceleration of piston is
		//given by
		ap= r*omega*omega*(cos(k)+cos(2*k)/n) + r*alpha*(sin(k)+sin(2*k)/2*n);
		cout<<"value of acceleration of piston= "<<ap<<" m/sec^2"<<endl;
		
		//calculate angular velocity and angular acceleration of connecting rod;
		
		// Angular velocity of connectng rod is given by,
		
		wc= ((omega*cos(k)/n)); //in rad/sec;
		
		cout<<"value of angular velocity of connecting rod ="<<wc<<" rad/sec"<<endl;
		
		
		//angular acceleration of connecting rod, when angular velocity of crank is not uniform is given by,
		
		ac= (-(omega*omega* (sin(k)))/n)+ ((alpha*cos(k))/n) ;
		cout<<"value of angular acceleration of connecting rod =" <<ac<<"rad/sec^2"<<endl;
		
		
				
		
		
	}
