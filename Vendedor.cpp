#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

   
double Vendedor::getquotaTotalAnual(){
	  return getquotaMensalVendas() * 12;
	}
void Vendedor::setqoutaTotalAnual(double valor){
    quotaTotalAnual = valor;
  }
