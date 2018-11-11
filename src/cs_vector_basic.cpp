#include "cs_vector_basic.h"

#include <math.h>

double cs_vector::operator*(cs_vector const&v)const{
	return x*v.x+y*v.y+z*v.z;
}
double cs_vector::magnitude()const{
	return sqrt((*this)*(*this));
}
cs_vector cs_vector::operator+(cs_vector const&v){
	return cs_vector(x+v.x,y+v.y,z+v.z);
}
cs_vector cs_vector::operator-(cs_vector const&v){
	return cs_vector(x-v.x,y-v.y,z-v.z);
}
cs_vector cs_vector::operator*(double const&k){
	return cs_vector(k*x,k*y,k*z);
}
cs_vector operator*(double k,cs_vector const&v){
	return cs_vector(k*v.getX(),k*v.getY(),k*v.getZ());
}
cs_vector cs_vector::operator%(cs_vector const&v){
	return cs_vector(y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x);
}
bool cs_vector::unit(){
	double d=(*this).magnitude();
	if(d){
		(*this)=(*this)*(1/d);
		return 1;
	}else return 0;
}
bool cs_vector::operator==(cs_vector const&v){
	return (x==v.x&&y==v.y&&z==v.z);
}

double cs_vector::getX()const{
	return x;
}
double cs_vector::getY()const{
	return y;
}
double cs_vector::getZ()const{
	return z;
}
