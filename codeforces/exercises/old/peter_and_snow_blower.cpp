#include <stdio.h>
#include <math.h>
struct Vector;
struct Point;
struct Vector{
    double x, y;
    double operator^(const Vector &b) const//叉积
    {
        return x * b.y - y * b.x;
    }
    double operator *(const Vector &b) const//点积
    {
        return x*b.x+y*b.y;
    }
    double len2(){return x*x+y*y;}//长度的平方
};
struct Point{
    double x, y;
    Vector operator -(const Point & b)const{
        return {x-b.x,y-b.y};
    }
};

int main()
{
    int n;
    Point p;
    Point s, pre,cur;
    //freopen("test.in","r",stdin);
    scanf("%d%lf%lf%lf%lf", &n, &p.x, &p.y,&s.x,&s.y);
    pre=s;
    double mx = (s-p).len2(), mn = mx;
    while (n--)
    {
        if(n)
        {
            scanf("%lf%lf", &cur.x, &cur.y);
            double temp = (cur-p).len2();
            if (temp > mx)
                mx = temp;
            if (temp < mn)
                mn = temp;
        }
        else
        {
            cur=s;
        }
        
        Vector sc=cur-pre,ps=pre-p,pc=cur-p;
        double flag=(ps*sc)*(pc*sc);
        if(flag<0)//最短距离在垂足
        {
            double temp=(ps^pc);
            temp*=temp;
            temp/=sc.len2();
            if (temp < mn)
                mn = temp;
        }
        pre=cur;
    }
    printf("%.18lf\n", acos(-1) * (mx - mn));
    return 0;
}
