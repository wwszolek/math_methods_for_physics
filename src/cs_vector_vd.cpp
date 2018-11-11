#include "cs_vector_vd.h"

template <class algorithm_type>
cs_vector cs_vector_vd<algorithm_type>::value(double var){
	return cs_vector(x.value(var),y.value(var),z.value(var));
}

template class cs_vector_vd<formula>;
template class cs_vector_vd<data_set>;
