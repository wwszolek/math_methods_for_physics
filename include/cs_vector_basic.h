#ifndef CS_VECTOR_BASIC_H
#define CS_VECTOR_BASIC_H

class cs_vector{
	private:
	double x,y,z;
	
	public:
	cs_vector(){}
	cs_vector(double x_=0,double y_=0,double z_=0):x(x_),y(y_),z(z_){}
	
	double operator*(cs_vector const&)const;//dot product
	double magnitude()const;//magnitude
	cs_vector operator+(cs_vector const&);//adding vectors
	cs_vector operator-(cs_vector const&);//subtracting vectors
	cs_vector operator*(double const&);//scalar multiplication (vector*scalar)
	cs_vector operator%(cs_vector const&);//cross product
	bool unit();//normalizing
	bool operator==(cs_vector const&);//vector equality
	
	double getX()const;
	double getY()const;
	double getZ()const;
};

cs_vector operator*(double,cs_vector const&);//scalar multiplication (scalar*cs_vector)

#endif
