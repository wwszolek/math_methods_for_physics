# MMFP
**MMFP** is C++ library containing functionality allowing creating simple physics environments and models.
## Contents
**mmfp.h**  
- includes all headers

**relation.h**
- *formula*, *data_set* classes
- *binary_search*, *linear_approximation* functions
- *evaluation_type* enum types  

**function.h**  
- includes **relation.h**
- template class *function*

**cs_vector_basic.h**
- *cs_vector* class

**cs_vector_transformation.h**
- includes **cs_vector_basic.h**
- *project_orthogonal* function

**cs_vector_vd.h**
- includes **function.h**
- *cs_vector_vd* template class
