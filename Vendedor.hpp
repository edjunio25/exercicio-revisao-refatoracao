#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:    
	  double getquotaTotalAnual();
    void setqoutaTotalAnual(double valor);

  private:
    double quotaTotalAnual;
	
};

