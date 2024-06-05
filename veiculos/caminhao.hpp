#ifndef CAMINHAO
#define CAMINHAO
#include "veiculo.hpp"

class Caminhao : public Veiculo {
private:
    int eixos;
public:
    Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos): Veiculo(marca, modelo, capacidade), eixos(eixos) {}
    void exibirDados() const override {
        std::cout << "Caminhao - ";
        Veiculo::exibirDados();
        std::cout << "Eixos: " << eixos << "\n";
    }
};




#endif