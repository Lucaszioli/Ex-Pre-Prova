#include "grafo.hpp"
#include <string>
#include <iostream>
using std::string;
using std::cout;
int main(){
    int opcao;
    string texto = "\nDigite a opcao desejada:\n1 - Criar grafo\n2 - Inserir aresta\n3 - Verificar vizinhanca\n4 - Listar vizinhos\n5 - Listar grafo\n6 - Sair\n";
    Grafo* grafo = nullptr;
    while(true){
        cout<<texto;
        std::cin>>opcao;
        switch(opcao){
            case 1:{
                if (grafo != nullptr){
                    cout<<"Grafo ja criado\n";
                    continue;
                }else{
                    int numVertices;
                    cout<<"Digite o numero de vertices do grafo: ";
                    std::cin>>numVertices;
                    grafo = new Grafo(numVertices);
                    cout<<"Grafo criado\n";
                    break;
                }
                
            }
            case 2:{
                if (grafo == nullptr){
                    cout<<"Grafo nao criado\n";
                    continue;
                }else{
                    int vertice1, vertice2;
                    cout<<"Digite o vertice 1: ";
                    std::cin>>vertice1;
                    cout<<"Digite o vertice 2: ";
                    std::cin>>vertice2;
                    grafo->insereAresta(vertice1, vertice2);
                    break;
                }
            }
            case 3:{
                if (grafo == nullptr){
                    cout<<"Grafo nao criado\n";
                    continue;
                }else{
                    int vertice1, vertice2;
                    cout<<"Digite o vertice 1: ";
                    std::cin>>vertice1;
                    cout<<"Digite o vertice 2: ";
                    std::cin>>vertice2;
                    if (grafo->vizinho(vertice1, vertice2)){
                        cout<<"Sao vizinhos\n";
                    }else{
                        cout<<"Nao sao vizinhos\n";
                    }
                    break;
                }
            }
            case 4:{
                if (grafo == nullptr){
                    cout<<"Grafo nao criado\n";
                    continue;
                }else{
                    int vertice;
                    cout<<"Digite o vertice: ";
                    std::cin>>vertice;
                    auto vizinhos = grafo->listaVizinhos(vertice);
                    cout<<"Vizinhos: ";
                    for(auto vizinho : vizinhos){
                        cout<<vizinho<<", ";
                    }
                    cout<<'\n';
                    break;
                }
            }
            case 5:{
                if (grafo == nullptr){
                    cout<<"Grafo nao criado\n";
                    continue;
                }else{
                    grafo->listaGrafo();
                    break;
                }
            }
            case 6:{
                if (grafo != nullptr){
                    delete grafo;
                }
                return 0;
            }
            default: {
                cout<<"Opcao invalida\n";
            }
        }
    }
}
