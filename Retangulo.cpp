#include "Retangulo.hpp"

Retangulo::Retangulo(int l, int a) {

	Largura_ret = l;
	Altura_ret = a;
}

float Retangulo::CalculaArea() {

	area = Largura_ret * Altura_ret;

	return area;

}