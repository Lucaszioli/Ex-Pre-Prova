#ifndef REGULAR
#define REGULAR

#include "funcionario.hpp"

class FuncionarioRegular : public Funcionario{
    public:
        FuncionarioRegular(std::string nome, int id): Funcionario(nome, id){};
        double calcularSalarioTotal() override{
            return salarioBase;
        }
};

#endif
