#include "matrix.h"
#include <iostream>
using namespace std;

double& matrix_2d::operator()(int j,int k){
	return mat[(j-1)*cols+(k-1)];
}

matrix_2d matrix_2d::T(){
	matrix_2d Tmatrix(cols,rows);
	for(int i=1;i<=Tmatrix.rows;i++){
		for(int j=1;j<=Tmatrix.cols;j++)Tmatrix(i,j)=(*this)(j,i);
	}
	return Tmatrix;
}

matrix_2d matrix_2d::operator+(matrix_2d &matr){
	if((*this).rows==matr.rows&&(*this).cols==matr.cols){
		matrix_2d sum((*this).rows,(*this).cols);
		for(int i=1;i<=sum.rows;i++){
			for(int j=1;j<=sum.cols;j++)sum(i,j)=(*this)(i,j)+matr(i,j);
		}
		return sum;
	}else return matrix_2d();
}

matrix_2d matrix_2d::operator-(matrix_2d &matr){
	if((*this).rows==matr.rows&&(*this).cols==matr.cols){
		matrix_2d sum((*this).rows,(*this).cols);
		for(int i=1;i<=(*this).rows;i++){
			for(int j=1;j<=(*this).cols;j++)sum(i,j)=(*this)(i,j)-matr(i,j);
		}
		return sum;
	}else return matrix_2d();
}

matrix_2d matrix_2d::operator*(double d){
	matrix_2d ret(rows,cols);
	for(int i=1;i<=ret.rows;i++){
		for(int j=1;j<=ret.cols;j++)ret(i,j)=(*this)(i,j)*d;
	}
	return ret;
}

matrix_2d operator*(double d,matrix_2d &mat){
	matrix_2d ret(mat.getRows(),mat.getCols());
	for(int i=1;i<=ret.getRows();i++){
		for(int j=1;j<=ret.getCols();j++)ret(i,j)=d*mat(i,j);
	}
	return ret;
}

matrix_2d matrix_2d::operator%(matrix_2d &mat){
	if((*this).cols==mat.rows){
		matrix_2d ret((*this).rows,mat.cols);
		for(int i=1;i<=ret.rows;i++){
			for(int j=1;j<=ret.cols;j++){
				for(int k=1;k<=(*this).cols;k++)ret(i,j)+=(*this)(i,k)*mat(k,j);
			}
		}
		return ret;
	}else return matrix_2d();
}

inline int matrix_2d::getRows(){
	return rows;
}
inline int matrix_2d::getCols(){
	return cols;
}
