#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "funcionario.hpp"

class Estagiario : public Funcionario{
    public:
        Estagiario(std::string nome, int id): Funcionario(nome, id){};
        double calcularSalarioTotal() override{
            return salarioBase * 0.8;
        }
};

#endif