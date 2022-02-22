#include "domain.h"


void Descricao::validar(string descricao) {
    if ((descricao.length() > LIMITE) || (descricao.find("  ") != std::string::npos)
        || (descricao.find("..") != std::string::npos))
      
        throw invalid_argument(descricao + " -> INVÁLIDO");

    else cout << "Tudo certo, descricao válida!" << endl;
}

void Descricao::setDescricao(string descricao) {
    validar(descricao);
    this->descricao = descricao;
}

void Idioma::validar(string idioma) {
    bool verifica = false;
    idioma[0] = toupper(idioma[0]);
    
    for (int i = 0; i < IDIOMAS.size(); i++) {
        if (idioma == IDIOMAS[i]) {
            verifica = true;
        }
    }
    
    if (verifica == false) throw invalid_argument("Idioma " + idioma + " -> INVÁLIDO");

    else cout << "Tudo certo, idioma válido!" << endl;
}

void Idioma::setIdioma(string idioma) {
    validar(idioma);
    this->idioma = idioma;
}
