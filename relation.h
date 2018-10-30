#ifndef RELATION_H
#define RELATION_H
#include <vector>

bool binary_search(std::vector<double>&, double,int&);
inline double linear_approximation(double,double,double,double,double);

enum evaluation_type{
	LINEAR=0,
};

class data_set{
	private:
		std::vector<double>x;
		std::vector<double>y;
		evaluation_type eval_type;
	public:
		data_set(std::vector<double>&x_,std::vector<double>&y_,evaluation_type type):x(x_),y(y_),eval_type(type){}
		
		double value(double);
};

class formula{
	public:
		formula(double(*func)(double)):value(func){}
		
		double(*value)(double);
};
#endif
