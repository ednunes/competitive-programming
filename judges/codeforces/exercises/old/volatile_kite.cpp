#include <bits/stdc++.h>
using namespace std;
int n,x[2000],y[2000];
double a1,b1,a2,b2,a3,b3,a,b,c,h,ans=1000000000000000;
main ()
{
	cin>>n;
	
	for (int i=1; i<=n; i++)
		cin>>x[i]>>y[i];
		
	n++;	
	x[n]=x[1];
	y[n]=y[1];
	n++;
	x[n]=x[2];
	y[n]=y[2];	
		
	for (int i=1; i<=n-2; i++)
	{
		a1=x[i];
		b1=y[i];
	    a2=x[i+1];
		b2=y[i+1];	
		a3=x[i+2];
		b3=y[i+2];
		
		a=((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
		b=((a2-a3)*(a2-a3)+(b2-b3)*(b2-b3));
		c=((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3));
		
		h=(a-b+c)/(2*sqrt(c));	
		
		h=sqrt(a-h*h);
		
		h=h/2;
		
		ans=min(ans,h);
	}
	
	printf("%.12f",ans);
}
