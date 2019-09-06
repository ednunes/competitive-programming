#include<iostream>
using namespace std;
double a,b,m,vx,vy,vz;
void func()
{
double x=a/2-m/vy*vx;
double y=-m/vy*vz;
while(x<0||x>a)
x=-x+((x>a)?(a*2):0);
while(y<0||y>b)
y=-y+((y>b)?(b*2):0);
cout<<x<<" "<<y<<endl;
}

int main()
{
ios_base::sync_with_stdio(false);
cout<<fixed;
cout.precision(10);
cin>>a>>b>>m>>vx>>vy>>vz;
func();
return 0;
}
