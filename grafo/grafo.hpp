#ifndef GRAFO
#define GRAFO

#include <vector>
class Grafo {
    public:
        Grafo(int numVertices);
        ~Grafo();
        void listaGrafo();
        void insereAresta(int vertice1, int vertice2);
        int  vizinho(int vertice1, int vertice2);
        std::vector<int> listaVizinhos(int vertice);
    private:
        std::vector<int> vertices;
        std::vector<std::vector<int>> arestas;
        int numVertices;
};

#endif