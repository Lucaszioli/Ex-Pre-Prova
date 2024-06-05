#ifndef GERENTE
#define GERENTE

#include "funcionario.hpp"

class Gerente : public Funcionario{
    private:
        double bonus;
    public:
        Gerente(std::string nome, int id, double bonus): Funcionario(nome,id),bonus(bonus){};
        double calcularSalarioTotal() override{
            return salarioBase + bonus;
        }
};

#endif