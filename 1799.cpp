# include <iostream>
# include <math.h>
# include <iomanip>
# define pi 3.1415926535897932
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	int temp = t;
	while(t--){
		double r;
		int n;
		cin>>r>>n;
		cout<<"Scenario #"<<temp-t<<":"<<endl;
		if(n == 2)
			cout<<fixed<<setprecision(3)<<r/2<<endl;
		else if(n==1)
			cout<<fixed<<setprecision(3)<<r<<endl;
		else{
			double angle = (2*pi/n);
			double area = (tan(angle/2)*r)*r;
			double angle1 = ((pi-angle)/2);
			double small_r = sqrt(area/(1/tan(angle/2)+1/tan(angle1/2)+1/tan(angle1/2)));
			cout<<fixed<<setprecision(3)<<small_r<<endl;
		}
		cout<<endl;
	}
	return 0;
}