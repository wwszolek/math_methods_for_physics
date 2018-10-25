#include "cs_vector_basic.h"
#include "cs_vector_transformation.h"	

#include "math.h"

cs_vector project_ortho(cs_vector const&v,cs_vector const&w){
	return ((v*w)/pow(w.magnitude(),2))*w;
}
