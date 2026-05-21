#include <iostream>
using namespace std;

int euclidmr(int m, int n, int &x, int &y){
	if(n==0){
		x=1;
		y=0;
		return m;
	}
	
	int x1,y1, ucln;
	ucln = euclidmr(n, m%n ,x1,y1);
	x=y1;
	y=x1- (m/n)*y1;
	return ucln;
// di nguoc lai: truy xuat nguoc nen moi co x=y1; nay la de quy ko phai vong lap	
} 

int main(){
	int m,n,x,y;
	cout<<"nhap m: ";
	cin>>m;
	cout<<"nhap n: ";
	cin>>n;
	int k=euclidmr(m,n,x,y);
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"k= "<<k;
	return 0;
	
}
