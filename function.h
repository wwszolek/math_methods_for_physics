#ifndef FUNCTION_H
#define FUNCTION_H
#include "relation.h"

template <class algorithm_type>
class function{
	private:
		algorithm_type algorithm;
		
	public:
		function(algorithm_type type):algorithm(type){}
		
		double value(double);
			
};

#endif
