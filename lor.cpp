#include<iostream>
#include<cmath>
using namespace std;
long double c=300000000;

long double L(long double v){
	return sqrt(1.0-((v*v)/(c*c))); 
}

int main(){
long double v;

cin>>v;
cout<<L(v);
char z;
cin>>z;

return 0;}

