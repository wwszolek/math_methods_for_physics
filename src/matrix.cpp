#include "matrix.h"
#include <iostream>
using namespace std;

double& matrix_2d::operator()(int j,int k){
	return mat[(j-1)*cols+(k-1)];
}

matrix_2d matrix_2d::T(){
	matrix_2d Tmatrix(cols,rows);
	for(int i=0;i<Tmatrix.rows;i++){
		for(int j=0;j<Tmatrix.cols;j++)Tmatrix(i+1,j+1)=(*this)(j+1,i+1);
	}
	return Tmatrix;
}

matrix_2d matrix_2d::operator+(matrix_2d &matr){
	if((*this).rows==matr.rows&&(*this).cols==matr.cols){
		matrix_2d sum((*this).rows,(*this).cols);
		for(int i=0;i<sum.rows;i++){
			for(int j=0;j<sum.cols;j++)sum(i+1,j+1)=(*this)(i+1,j+1)+matr(i+1,j+1);
		}
		return sum;
	}else return matrix_2d();
}

matrix_2d matrix_2d::operator-(matrix_2d &matr){
	if((*this).rows==matr.rows&&(*this).cols==matr.cols){
		matrix_2d sum((*this).rows,(*this).cols);
		for(int i=0;i<(*this).rows;i++){
			for(int j=0;j<(*this).cols;j++)sum(i+1,j+1)=(*this)(i+1,j+1)-matr(i+1,j+1);
		}
		return sum;
	}else return matrix_2d();
}
