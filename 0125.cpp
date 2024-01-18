#include <iostream>
#include <cmath>

using namespace std;

int snt(int a){
	if(a==0||a==1){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a,b;
	cin >> a >> b;
	if(a<b){
		for(int i=a;i<=b;i++){
			if(snt(i)==1){
				cout << i << " ";
			}
		}
	}
	else{
		for(int i=b;i<=a;i++){
			if(snt(i)==1){
				cout << i << " ";
			}
		}
	}
}
