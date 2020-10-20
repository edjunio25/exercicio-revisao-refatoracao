#include <string>
#include "Empregado.hpp"

std::string Empregado::getnome(){
    return this->nome;
  }    
double Empregado::getsalarioHora(){
    return this->salarioHora;
  }  
double Empregado::getquotaMensalVendas(){
    return this->quotaMensalVendas;
  }  
void Empregado::setnome(std::string valor){
    this->nome = valor;
  }
void Empregado::setsalarioHora(double valor){
    this->salarioHora = valor;
  }
void Empregado::setquotaMensalVendas(double valor){
    this->quotaMensalVendas = valor;
  }
double Empregado::pagamentoMes(double horasTrabalhadas){   
    double t = horasTrabalhadas;	  
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
      double x = horasTrabalhadas - 8;
      t += x / 2;
    }
    double salarioHora_temp = this->getsalarioHora(); 
  return t * salarioHora_temp;
  }


