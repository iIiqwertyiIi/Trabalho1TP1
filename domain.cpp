#include "domain.h"


void Descricao::validar(string descricao) {
    if (descricao.length() > TAMANHO)
        throw invalid_argument("Descrição " + descricao + " com tamanho inválido");
    if (descricao.find("  ") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois espaços consecutivos");
    if (descricao.find("..") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois pontos consecutivos");
}

void Descricao::setDescricao(string descricao) {
    validar(descricao);
    this->descricao = descricao;
}

void Idioma::validar(string idioma) {
    bool verifica = false;
    
    for (int i = 0; i < IDIOMAS.size(); i++) {
        if (idioma == IDIOMAS[i]) {
            verifica = true;
        }
    }
    
    if (verifica == false) throw invalid_argument("Idioma " + idioma + " inválido");
}

void Idioma::setIdioma(string idioma) {
    validar(idioma);
    this->idioma = idioma;
}
