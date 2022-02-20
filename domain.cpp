#include "domain.h"


void Descricao::validar(string descricao) {
    if (descricao.length() > LIMITE) throw invalid_argument("Descrição inválida");
}

void Descricao::setDescricao(string descricao) {
    validar(descricao);
    this->descricao = descricao;
}
