#ifndef Retangulo_hpp
#define Retangulo_hpp


#include "FormaGeometrica.hpp"

class Retangulo : public FormaGeometrica {


public:

	Retangulo(int l, int a);

	virtual float CalculaArea();


private:

	int Largura_ret;
	int Altura_ret;


};





#endif