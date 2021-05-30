#ifndef Triangulo_hpp
#define Triangulo_hpp

#include "FormaGeometrica.hpp"

class Triangulo : public FormaGeometrica {

public:

	Triangulo(int b, int a);

	virtual float CalculaArea();

private:

	int Base_Tri;
	int Altura_Tri;


};



#endif