#ifndef MATRIX_H
#define MATRIX_H
#include <vector>

class matrix_2d{
	private:
		std::vector<double>mat;
		int rows=0,cols=0;
	public:
		matrix_2d(int j=0,int k=0,int val=0):rows(j),cols(k){
			mat.resize(j*k,val);
		}
		
		double& operator()(int,int);
		matrix_2d T();
		matrix_2d operator+(matrix_2d &);
		matrix_2d operator-(matrix_2d &);
		matrix_2d operator*(double);
		matrix_2d operator%(matrix_2d &);
		
		inline int getRows();
		inline int getCols();
};

matrix_2d operator*(double,matrix_2d &);

#endif
