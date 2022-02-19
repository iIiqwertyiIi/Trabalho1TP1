#include "domain.h"

void Cidade::validar(string cidade){
    int valido = 0;
    for (int i = 0; i < CIDADES.size(); i++)
        if (cidade == CIDADES[i])
            valido = 1;
    if (valido == 0)
        throw invalid_argument("Argumento inválido");
};

void Cidade::setCidade(string cidade){
    validar(cidade);
    this->cidade = cidade;
};