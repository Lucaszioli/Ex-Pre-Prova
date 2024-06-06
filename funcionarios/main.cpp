#include "funcionarioRegular.hpp"
#include "estagiario.hpp"
#include "gerente.hpp"


int main(){
    Funcionario *f1 = new FuncionarioRegular("Joao", 1);
    Funcionario *f2 = new Estagiario("Maria", 2);
    Funcionario *f3 = new Gerente("Jose", 3, 1000);

    std::cout << "O salario anual do "<<f1->getNome()<<": "<<f1->calcularSalarioTotal() << std::endl;
    std::cout << "O salario anual do "<<f2->getNome()<<": "<<f2->calcularSalarioTotal() << std::endl;
    std::cout << "O salario anual do "<<f3->getNome()<<": "<<f3->calcularSalarioTotal() << std::endl;
    
    return 0;
}