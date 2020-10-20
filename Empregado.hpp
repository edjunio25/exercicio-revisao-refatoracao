#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:

    std::string getnome();
    double getsalarioHora();
    double getquotaMensalVendas();
    void setnome(std::string valor);
    void setsalarioHora(double valor);
    void setquotaMensalVendas(double valor);
    double pagamentoMes(double horasTrabalhadas);

  private:
    std::string nome;
    double salarioHora;  
    double quotaMensalVendas;  

	
};

#endif