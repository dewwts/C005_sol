#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		x^=a; //bitwise XOR
	}
	cout<<x;
}