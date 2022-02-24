#include "domain.h"
#include "test_domain.h"
#include "entity.h"
#include "test_entity.h"

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");
    TUCidade testeCidade;
    switch (testeCidade.run()) {
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
            break;
        case TUCidade::FALHA: cout << "FALHA - CIDADE" << endl;
            break;
    };

    TUCodigo testeCodigo;
    switch (testeCodigo.run()) {
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCodigo::FALHA: cout << "FALHA - CODIGO" << endl;
            break;

    };

    TUDescricao testeDescricao;
    switch (testeDescricao.run()) {
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
            break;
        case TUDescricao::FALHA: cout << "FALHA - DESCRICAO" << endl;
            break;
    };

    TUDuracao testeDuracao;
    switch (testeDuracao.run()) {
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
            break;
        case TUDuracao::FALHA: cout << "FALHA - DURACAO" << endl;
            break;
    };
    
    TUData testeData;
    switch (testeData.run()) {
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
            break;
        case TUData::FALHA: cout << "FALHA - DATA" << endl;
            break;
    };
    
    TUEmail testeEmail;
    switch (testeEmail.run()) {
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
            break;
        case TUEmail::FALHA: cout << "FALHA - EMAIL" << endl;
            break;
    };

    TUEndereco testeEndereco;
    switch (testeEndereco.run()) {
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
            break;
        case TUEndereco::FALHA: cout << "FALHA - ENDERECO" << endl;
            break;
    };

    TUHorario testeHorario;
    switch (testeHorario.run()) {
        case TUHorario::SUCESSO: cout << "SUCESSO - HORARIO" << endl;
            break;
        case TUHorario::FALHA: cout << "FALHA - HORARIO" << endl;
            break;
    };
    
    TUIdioma testeIdioma;
    switch (testeIdioma.run()) {
        case TUIdioma::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
            break;
        case TUIdioma::FALHA: cout << "FALHA - IDIOMA" << endl;
            break;
    };

    TUNome testeNome;
    switch(testeNome.run()) {
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
            break;
        case TUNome::FALHA: cout << "FALHA - NOME" << endl;
            break;
    };
    
    TUNota testeNota;
    switch (testeNota.run()) {
        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
            break;
        case TUNota::FALHA: cout << "FALHA - DURAÇÃO" << endl;
            break;
    };

    TUSenha testeSenha;
    switch (testeSenha.run()) {
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
            break;
        case TUSenha::FALHA: cout << "FALHA - SENHA" << endl;
            break;
    };
    
    TUTitulo testeTitulo;
    switch (testeTitulo.run()) {
        case TUTitulo::SUCESSO: cout << "SUCESSO - TITULO" << endl;
            break;
        case TUTitulo::FALHA: cout << "FALHA - TITULO" << endl;
            break;
    };

    TUAvaliacao testeAvaliacao;
    switch (testeAvaliacao.run()) {
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - AVALIACAO" << endl;
            break;
        case TUAvaliacao::FALHA: cout << "FALHA - AVALIACAO" << endl;
            break;
    };

    TUExcursao testeExcursao;
    switch (testeExcursao.run()) {
        case TUExcursao::SUCESSO: cout << "SUCESSO - EXCURSAO" << endl;
            break;
        case TUExcursao::FALHA: cout << "FALHA - EXCURSAO" << endl;
            break;
    };

    TUSessao testeSessao;
    switch (testeSessao.run()) {
        case TUSessao::SUCESSO: cout << "SUCESSO - SESSAO" << endl;
            break;
        case TUSessao::FALHA: cout << "FALHA - SESSAO" << endl;
            break;
    };

    TUUsuario testeUsuario;
    switch (testeUsuario.run()) {
        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO" << endl;
            break;
        case TUUsuario::FALHA: cout << "FALHA - USUARIO" << endl;
            break;
    };
};
