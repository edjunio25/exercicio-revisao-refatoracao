#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:    
	  double getquotaTotalAnual(){
	    return getquotaMensalVendas() * 12;
	  }
    void setqoutaTotalAnual(double valor){
      quotaTotalAnual = valor;
    }

  private:
    double quotaTotalAnual;
	
};

