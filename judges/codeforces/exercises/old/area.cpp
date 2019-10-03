#include<bits/stdc++.h>
using namespace std;

#define double long double
#define vi vector<int>
#define mi map<int,int>
#define si set<int>
#define pi pair<int,int>

#define pb push_back
#define f first
#define s second

#define fast ios::sync_with_stdio(0); cin.tie(0)

double sq(double n){
    return n*n;
}

int32_t main(){
  
    double x1,y1,r1; cin >> x1 >> y1 >> r1;
    double x2,y2,r2; cin >> x2 >> y2 >> r2;

    double d=sq(x2-x1)+sq(y2-y1);
    double PI=acos(-1);


    if(d>=sq(r1+r2)){
        cout << 0;
    }
    else if(d<=sq(r1-r2)){
        double min_radii = min(r1,r2);
        cout << setprecision(12) << PI*sq(min_radii);
        
    }
    else{

        double x1=(sq(r1)-sq(r2)+d)/(2*sqrt(d)); 
        double theta1=acos(x1/r1);
        double sector_area1=(sq(r1)*theta1);
        double trianle_area1=sq(r1)*cos(theta1)*sin(theta1);
        double area1=sector_area1-trianle_area1;

        double x2=sqrt(d)-x1;
        double theta2=acos(x2/r2);
        double sector_area2=(sq(r2)*theta2);
        double trianle_area2=sq(r2)*cos(theta2)*sin(theta2);
        double area2=sector_area2-trianle_area2;
        cout << setprecision(12) << area1+area2;        
    }

    return 0;
} 

