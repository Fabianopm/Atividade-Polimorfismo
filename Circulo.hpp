#ifndef Circulo_hpp
#define Circulo_hpp

#include "FormaGeometrica.hpp"

class Circulo : public FormaGeometrica {

public:

	Circulo(int r);

	virtual float CalculaArea();

private:

	int raio_circulo;

		

};








#endif


