# include <iostream>
# define llt long long int
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		llt ans = 0;
		int start = 25;
		while(start <= n){
			ans += n/start;
			start *= 5;
		}
		cout<<n/5+ans<<endl;
	}
	return 0;
}