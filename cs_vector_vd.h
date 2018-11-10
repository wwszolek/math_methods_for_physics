#ifndef CS_VECTOR_VD_H
#define CS_VECTOR_VD_H
#include "function.h"
#include "cs_vector_basic.h"

//cartesian vector dependent on variable
template <class algorithm_type>
class cs_vector_vd{
	private:
		function<algorithm_type> x,y,z;
	public:
		cs_vector_vd(){}
		cs_vector_vd(function<algorithm_type> funcx,function<algorithm_type> funcy,function<algorithm_type> funcz):x(funcx),y(funcy),z(funcz){}
		cs_vector value(double);
	
};


#endif
