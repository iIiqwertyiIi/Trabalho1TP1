#include "domain.h"


void Descricao::validar(string descricao) {
    if (descricao.length() > LIMITE) throw invalid_argument("Descrição inválida");
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
  
    if (verifica == false) throw invalid_argument("Idioma Inválido");
}

void Idioma::setIdioma(string idioma) {
    validar(idioma);
    this->idioma = idioma;
}