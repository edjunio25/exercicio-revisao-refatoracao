#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
 
  public:
    int getprojetos(){
      return projetos;
    }
    void setprojetos(int valor){
      projetos = valor;
    }

	private:
	  int projetos;
    
};

