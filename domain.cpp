#include "domain.h"

void Cidade::validar(string cidade) {
    int valido = 0;
    for (int i = 0; i < CIDADES.size(); i++)
        if (cidade == CIDADES[i])
            valido = 1;
    if (valido == 0)
        throw invalid_argument("Cidade inválida");
};

void Cidade::setCidade(string cidade) {
    validar(cidade);
    this->cidade = cidade;
};

void Codigo::validar(string codigo) {
    vector<int> array = {};
    int soma = 0;
    int verificador = 0;
    for (int i = 0; i < codigo.length(); i++)
        array.push_back(codigo[i] - '0');
    for (int j = 0; j < 6; j++)
        soma += array[j];
    verificador = soma % 10;
    if (codigo == INVALIDO || verificador != array[6])
        throw invalid_argument("Código inválido");
};

void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
}