# include <iostream>
# include <math.h>
# include <iomanip>
#define pi 3.141592653589793
using namespace std;

void inter_point(double a, double b, double c, double d, double e, double f, double &x, double &y){
	//Two lines are ax + by + c = 0 and dx + ey + f = 0
	x = (b*f-e*c)/(a*e-b*d);
	y = (d*c-a*f)/(a*e-b*d);	
}

// inter_point(a, b, c, d, e, f, x, y) and x and y should be double along with other variables

double dist(double a, double b, double c, double d){ 
	return sqrt((b-d)*(b-d) + (a-c)*(a-c));	
}
// For the points with cordinates (a, b) and (c, d)

int main(){
	// ios::sync_with_stdio(false);
	double x1, y1, x2, y2, x3, y3;
	while(cin){
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		cout<<"...."<<endl;
		double s_1 = (x2-x1)/(y1-y2);
		double s_2 = (x3-x2)/(y2-y3);
		double pt1_x = (x1+x2)/2;
		double pt1_y = (y1+y2)/2;
		double pt2_x = (x2+x3)/2;
		double pt2_y = (y2+y3)/2;
		double c1 = pt1_y - s_1*pt1_x;
		double c2 = pt2_y - s_2*pt2_x;
		double x, y;
		inter_point(s_1, -1, c1, s_2, -1, c2, x, y);
		double r = dist(x, y, x1, y1);
		cout<<fixed<<setprecision(2)<<2*pi*r<<endl;
	}
	return 0;
}