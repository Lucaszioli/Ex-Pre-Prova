#include "grafo.hpp"
#include <iostream>

using std::cout;
using std::endl;


Grafo::Grafo(int numVertices){
    for(int i = 0; i<numVertices; i++){
        vertices.push_back(i);
        std::vector<int> arestasVertice(numVertices, 0);
        arestas.push_back(arestasVertice);
        this->numVertices = numVertices;
    }
}

Grafo::~Grafo() {
    vertices.clear();
    arestas.clear();
    cout<<"Grafo destruido\n";
}

void Grafo::listaGrafo(){
    for(int i = 0; i<numVertices; i++){
        cout<<"Vertice "<<i+1<<": ";
        for(int j = 0; j<numVertices; j++){
            if(arestas[i][j] == 1){
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
}



void Grafo::insereAresta(int vertice1, int vertice2){
    if(vertice1 == vertice2){
        cout<<"Nao e possivel inserir aresta entre um vertice e ele mesmo\n";
        return;
    }else if(vertice1 > numVertices || vertice2 > numVertices){
        cout<<"Vertice nao existe\n";
        return;
    }else{
        arestas[vertice1-1][vertice2-1] = 1;
        arestas[vertice2-1][vertice1-1] = 1;
        cout<<"Aresta inserida\n";
    }
}


int Grafo::vizinho(int vertice1, int vertice2){
    if(arestas[vertice1-1][vertice2-1] == 1){
        return 1;
    }else{
        return 0;
    }
}

std::vector<int> Grafo::listaVizinhos(int vertice){
    std::vector<int> vizinhos;
    for(int i = 0; i<numVertices; i++){
        if(arestas[vertice-1][i] == 1){
            vizinhos.push_back(i+1);
        }
    }
    return vizinhos;
}