#include "function.h"

template <class algorithm_type> 
double function<algorithm_type>::value(double x){
	return algorithm.value(x);
}

template class function<formula>;
template class function<data_set>;
