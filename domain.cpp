#include "domain.h"

void Cidade::validar(string cidade) {
    int valido = 0;
    for (int i = 0; i < CIDADES.size(); i++)
        if (cidade == CIDADES[i])
            valido = 1;
    if (valido == 0)
        throw invalid_argument("Cidade " + cidade + " inválida");
};

void Cidade::setCidade(string cidade) {
    validar(cidade);
    this->cidade = cidade;
};

void Codigo::validar(string codigo) {
    vector<int> array = {};
    int soma = 0;
    int verificador = 0;
    if (codigo.length() != 7)
        throw invalid_argument("Código " + codigo + " com tamanho diferente de 7");
    for (int i = 0; i < codigo.length(); i++) {
        int a = codigo[i];
        if (a < 48 || a > 57)
            throw invalid_argument("Código " + codigo + " com dígitos diferentes de números");
        array.push_back(codigo[i] - '0');
    };
    for (int j = 0; j < 6; j++)
        soma += array[j];
    verificador = soma % 10;
    if (codigo == INVALIDO)
        throw invalid_argument("Código " + codigo + " não existe");
    if (verificador != array[6])
        throw invalid_argument("Código " + codigo + " com verificador errado");
};

void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
};

void Endereco::validar(string endereco) {
    vector<int> array = {};
    if (endereco.length() > LIMITE)
        throw invalid_argument("Endereço " + endereco + " maior que o limite");
    if (endereco.length() > 1) {
        for (int i = 1; i < endereco.length(); i++) {
            if (endereco[i] == ESPACO[0] && endereco[i] == endereco[i - 1])
                throw invalid_argument("Endereço " + endereco + " contém dois espaços consecutivos");
            else if (endereco[i] == PONTO[0] && endereco[i] == endereco[i - 1])
                throw invalid_argument("Endereço " + endereco + " contém dois pontos consecutivos");
        };
    };
};

void Endereco::setEndereco(string endereco) {
    validar(endereco);
    this->endereco = endereco;
}