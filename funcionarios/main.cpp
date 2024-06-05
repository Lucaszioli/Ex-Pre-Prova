#include "funcionarioRegular.hpp"
#include "estagiario.hpp"
#include "gerente.hpp"


int main(){
    Funcionario *f1 = new FuncionarioRegular("Joao", 1);
    Funcionario *f2 = new Estagiario("Maria", 2);
    Funcionario *f3 = new Gerente("Jose", 3, 1000);

    std::cout << f1->calcularSalarioTotal() << std::endl;
    std::cout << f2->calcularSalarioTotal() << std::endl;
    std::cout << f3->calcularSalarioTotal() << std::endl;
    return 0;
}