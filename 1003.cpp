#include <iostream>
using namespace std;

long long int solve(double c){
	double i = 1;
	double ans = 0.5;
	while(ans <= c){
		i++;
		ans += 1/(i+1);
	}
	return i;
}

int main(){
	ios::sync_with_stdio(false);
	double n;
	cin>>n;
	while(n != 0.00){
		cout<<solve(n)<<" card(s)"<<endl;
		cin>>n;
	}
	return 0;
}