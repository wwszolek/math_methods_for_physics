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
		data_set(){}
		data_set(std::vector<double>&x_,std::vector<double>&y_,evaluation_type type):x(x_),y(y_),eval_type(type){}
		
		double value(double);
		data_set operator+(data_set const&);
};

class formula{
	private:
		std::vector<double(*)(double)>value_sum;
	public:
		formula(){}
		formula(double(*func)(double)){
			value_sum.push_back(func);
		}
		formula(std::vector<double(*)(double)>&values){
			value_sum=values;
		}
		double value(double);
		formula operator+(formula const&);
};
#endif
