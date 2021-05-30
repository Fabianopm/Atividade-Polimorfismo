#include "Triangulo.hpp"

Triangulo::Triangulo(int b, int a) {

	Base_Tri = b;
	Altura_Tri = a;


}

float Triangulo::CalculaArea() {

	area = (Base_Tri * Altura_Tri) / 2;

	return area;

}