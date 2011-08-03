#include<iostream>
#include<cmath>

using namespace std;

long double dt=86400;

const long double a= 10.0; //akceleracija u metrima/s^2
const long double ly= 9.4608e+15; //u metrima
const long double pc= 30856802500000000.0; //parsek u metrima
const long double c= 3.0e+08; //brzina svjetlosti u metrima po danu



int main(){



long double M,m,T,s,x,y,y1,y11,y12;
	volatile long double tr,dt,v,T2,rt;
cout<<"Udaljenost u svjetlosnim godinama?"; cin>>x;
	s=ly*x;
	T=2.0*sqrt(s/a); //ako nema relativizma, vrijeme cijelog puta
	M=100.0; //u kg tereta
	




	m=2*(M*s*s)/(c*c*T*T); //masa goriva potrebna
	dt=0.0;tr=0.0; //dt je trenutak u kojem se nalazimo , tr je vrijeme gledano sa Zemlje
	v=0.0; //trenutačna brzina ako relativizma nema
	rt=0.0;




cout<<"Ako nema ograničenja brzine i relativističkih efekata:"<<endl;
cout<<"Vrijeme potrebno za putovanje: "<<T/(365*86400)<<" godina "<<T<<" s"<<endl;
cout<<"Maksimalna brzina bi bila: " <<(sqrt(a*s))/c<<" c"<<endl;

cout<<"Sa relativističkim efektima:\n";
cout<<"Gledano sa Zemlje:\n";
cout<<"Vrijeme putovanja koje mjeri promatrač sa Zemlje:"<<tr<<"dana"<<endl;
cout<<"Masa potrebnog goriva za putovanje:"<<m<<"kg"<<endl; 

cout<<"Gledano iz broda:\n";
cout<<s;
cout<<sqrt(3e+20/10);


char z;
cin>>z;

return 0;}
float sqrt( float x);
//funkcija koja nam za brzinu v vraća Lorentzov faktor
int L(long double v){
	return sqrt(1.0-((v*v)/(c*c))); 

}
