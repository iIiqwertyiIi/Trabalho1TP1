#include "domain.h"


void Descricao::validar(string descricao) {
    if ((descricao.length() > LIMITE) || (descricao.find("  ") != std::string::npos)
        || (descricao.find("..") != std::string::npos))
      
        throw invalid_argument(descricao + " -> INVÁLIDO");

    else cout << "Tudo certo, descricao válida!" << endl;
}
