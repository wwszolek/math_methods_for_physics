#ifndef RELATION_H
#define RELATION_H
#include <vector>

bool binary_search(std::vector<double>&, double,int&);
inline double linear_approximation(double,double,double,double,double);

class relation{
	private:
		std::vector<double>x;
		std::vector<double>y;
	public:
		relation(std::vector<double>&x_,std::vector<double>&y_):x(x_),y(y_){}
		
		double linear_evaluate(double);
};

#endif
