#include<iostream>
#include<cmath>

using namespace std;

typedef long double ld;
typedef long long ll;

const ld pi = 3.14159265359;

struct Point{
	ll x, y;

	Point() : x(0), y(0){}

	Point(ll _x, ll _y) : x(_x), y(_y){}

	Point(const Point& p){
		x = p.x;
		y = p.y;
	}

	Point operator-(const Point& p) const{
		return Point(x - p.x, y - p.y);
	}

	Point operator+(const Point& p) const{
		return Point(x + p.x, y + p.y);
	}

	Point operator/(ll factor) const{
		return Point(x / factor, y / factor);
	}

	Point operator/=(ll factor){
		x /= factor;
		y /= factor;
		return *this;
	}

	Point operator+=(const Point& p){
		x += p.x;
		y += p.y;
		return *this;
	}

	//Dot Product
	ll operator*(const Point& p) const{
		return (x * p.x + y * p.y);
	}

	//2D Cross Product
	ll operator^(const Point& p) const{
		return (x * p.y - y * p.x);
	}

	bool operator==(const Point& p) const{
		return (x == p.x && y == p.y);
	}

	bool operator!=(const Point& p) const{
		return (x != p.x || y != p.y);
	}

	bool operator<(const Point& p) const{
		return (x != p.x ? x < p.x : y < p.y);
	}
};

istream& operator>>(istream& in, Point& p){
	in >> p.x >> p.y;
	return in;
}

ostream& operator<<(ostream& out, const Point& p){
	out << p.x << ' ' << p.y;
	return out;
}

struct Line{
	Point a, ab;

	Line() : a(Point()), ab(Point()){}

	Line(Point _a, Point _b) : a(_a), ab(_b - _a){}

	Point b(){
		return ab + a;
	}
};

bool on_line(const Line& line, const Point& p){
	return (line.ab ^ (p - line.a)) == 0;
}

bool is_the_same(const Line& line1, const Line& line2){
	return (line1.ab ^ (line2.a - line1.a)) == 0;
}

bool is_parallel(const Line& line1, const Line& line2){
	return (line1.ab ^ line2.ab) == 0;
}

int next(int i, int n){
	return (i != n - 1 ? i + 1 : 0);
}

ll abs(const Point& p1, const Point& p2){
	return (p2 - p1) * (p2 - p1);
}

ld norm(const Point& p1, const Point& p2){
	return sqrt(abs(p1, p2));
}

bool valid(Point* begin, Point* end, Line& line){
	int cnt = 0;
	Point *p1, *p2, *i = begin;
	p1 = p2 = 0;
	while(i != end){
		if(on_line(line, *i)){
			++cnt;
		}else if(p1 == 0){
			p1 = i;
		}else if(p2 == 0){
			p2 = i;
		}
		++i;
	}
	if(p1 != 0 && p2 != 0){
		Line line1(*p1, *p2);
		if(!is_parallel(line, line1) || is_the_same(line, line1)){
			return false;
		}
		i = begin;
		while(i != end){
			if(on_line(line1, *i)){
				++cnt;
			}
			++i;
		}
		return (cnt == end - begin);
	}else if(p1 != 0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int n;
	cin >> n;
	Point p[n];
	for(int i = 0 ; i < n ; i++){
		cin >> p[i].y;
		p[i].x = i + 1;
	}
	for(int i = 1 ; i < n ; i++){
		Line line(p[0], p[i]);
		if(valid(p, p + n, line)){
			cout << "YES";
			return 0;
		}
	}
	Line line(p[1], p[2]);
	if(valid(p, p + n, line)){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
