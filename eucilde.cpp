#include<iostream>
using namespace std;

int euclide(int m, int n){
	if(n==0){
		return m;
	}
	
	int r=m%n;
	int ucln= euclide(n,r);
	return ucln;
} 
int main(){
	int m,n;
	cout<<"nhap 2 so bat ki: ";
	cin>>m>>n;
	int ucln=euclide(m,n);
	cout<<"uoc chung lon nhat cua: ("<<m<<", "<<n<<")= "<<ucln;
	return 0;
}
