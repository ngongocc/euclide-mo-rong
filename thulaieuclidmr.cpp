#include<iostream>
using namespace std;
// dung de quy theo cach tan dung bien so
int euclidemr(int m, int n, int &x, int &y){
	if(n==0){
		x=1;
		y=0;
		return m;
	}
	int x1,y1;
	int ucln = euclidemr(n, m%n,x1,y1);
	x=y1;
	y=x1-m/n*y1;
	return ucln;
}

int main(){
	int m,n,x,y;
	cout<<"nhap 2 so bat ki: ";
	cin>>m>>n;
	int ucln=euclidemr(m,n,x,y);
	cout<<"cap so thoa man: m*x+n*y=k la (x,y,k)= ("<<x<<", "<<y<<", "<<ucln<<")";
	return 0;
}
