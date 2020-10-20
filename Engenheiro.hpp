#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
 
  public:
    int getprojetos();
    void setprojetos(int valor);

	private:
	  int projetos;
    
};

