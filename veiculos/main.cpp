#include "caminhao.hpp"
#include "van.hpp"
#include <vector>
using std::vector;


int main() {
    vector<Veiculo*> veiculos;
    veiculos.push_back(new Caminhao("Mercedes", "Actros", 50000, 3));
    veiculos.push_back(new Van("Fiat", "Ducato", 2000, 10));
    veiculos.push_back(new Caminhao("Volvo", "FH", 60000, 3));
    veiculos.push_back(new Van("Renault", "Master", 2500, 16));
    for (auto veiculo : veiculos) {
        veiculo->exibirDados();
    }
}