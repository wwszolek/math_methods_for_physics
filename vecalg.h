#ifndef __VECALG_H_INCLUDED__
#define __VECALG_H_INCLUDED__
class vector{
	public:
	double x,y,z;
	
	vector(double x_=0.0,double y_=0.0,double z_=0.0):x(x_),y(y_),z(z_){}
	double operator*(vector const&)const;//iloczyn skalarny
	double len()const;//długość
	vector operator+(vector const&);//dodawanie
	vector operator-(vector const&);//odejmowanie
	vector operator*(double const&);//mnożenie przez skalar
	vector operator%(vector const&);//iloczyn wektorowy
	vector operator/(vector const&);//rzut na wektor docelowy
	void norm();//normalizacja
	void operator=(vector const&);//równość wektorów
	void print();
};

vector operator*(double,vector const&);

#endif