#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <iostream>
#include <string>

class Funcionario{
    protected:
        std::string nome;
        int id;
        static double salarioBase;
    public:
        Funcionario(std::string nome, int id): nome(nome), id(id){};
        virtual double calcularSalarioTotal() = 0;
};

double Funcionario::salarioBase = 1000;

#endif