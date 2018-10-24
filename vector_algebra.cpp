#include "vecalg.h"
#include <math.h>
#include <iostream>
using namespace std;

double vector::operator*(vector const&v)const{
	return x*v.x+y*v.y+z*v.z;
}
double vector::len()const{
	return sqrt((*this)*(*this));
}
vector vector::operator+(vector const&v){
	return vector(x+v.x,y+v.y,z+v.z);
}
vector vector::operator-(vector const&v){
	return vector(x-v.x,y-v.y,z-v.z);
}
vector vector::operator*(double const&k){
	return vector(k*x,k*y,k*z);
}
vector operator*(double k,vector const&v){
	return vector(k*v.x,k*v.y,k*v.z);
}
vector vector::operator%(vector const&v){
	return vector(y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x);
}
vector vector::operator/(vector const&v){
	return (((*this)*v)/pow(v.len(),2))*v;
}
void vector::norm(){
	double d=(*this).len();
	if(d)(*this)=(*this)*(1/d);
}
void vector::operator=(vector const&v){
	x=v.x;
	y=v.y;
	z=v.z;
}
void vector::print(){
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
