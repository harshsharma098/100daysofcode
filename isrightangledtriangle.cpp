#include <iostream>
#include <cmath>
using namespace std;
struct Point{
	int x;
	int y;
};
int distance(Point p1,Point p2){
	return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
int isrighttriangle(Point p1,Point p2, Point p3){
	int d1=distance(p1,p2);
	int d2=distance(p2,p3);
	int d3=distance(p3,p1);
	return(d1==d2+d3 || d2==d1+d3 || d3==d1+d2);
}
int main(){
	Point p1,p2,p3;
	cin>>p1.x>>p1.y;
	cin>>p2.x>>p2.y;
	cin>>p3.x>>p3.y;
	cout<<isrighttriangle(p1,p2,p3)<<endl;
	return 0;
}
