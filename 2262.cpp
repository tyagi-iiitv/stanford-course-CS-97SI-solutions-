#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool isPrime[1000001];
void generate_primes(bool isPrime[], int len){
	isPrime[1]=false;
	isPrime[0]=false;
	for(int i=2;i<=sqrt((double)len);i++){
		if(isPrime[i]==true){
			for(int j=i*i;j<=len;j=j+i){
				isPrime[j]=false;
			}
		}
	}
}

void solve(int n){
	for(int i=3;i<=n;i++){
		if(isPrime[i] && isPrime[n-i]){
			cout<<n<<" = "<<i<<" + "<<n-i<<endl;
			break;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	fill_n(isPrime, 1000001, true);
	generate_primes(isPrime, 1000001);
	int n;
	cin>>n;
	while(n != 0){
		solve(n);
		cin>>n;
	}
	return 0;
}
