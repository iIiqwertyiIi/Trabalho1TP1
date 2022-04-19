#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

/**
 * @file controladorasapresentacao.h
 * @author Nícolas Paulin Benatto
 * @author Gabriel Xavier Cardoso
 * @author Vanessa Paixão Costa
 * @brief Controladoras de apresentação
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) Nícolas, Gabriel e Vanessa 2022
 * 
 */

#include <string.h>
#include "courses.h"
#include "dominios.h"
#include "entity.h"
#include "interfaces.h"

/**
 * @brief Classe Avaliacao
 * @class Avaliacao
 * @author Vanessa 200028286
 * 
 * Avaliacao contém domínios Codigo, Nota e Descricao
 */

 class CntrApresentacaoControle{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoAvaliacao *cntrApresentacaoAvaliacao;
        IApresentacaoConta *cntrApresentacaoConta;
        IApresentacaoExcursao *cntrApresentacaoExcursao;
        IApresentacaoSessao *cntrApresentacaoSessao;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoAvaliacao(IApresentacaoAvaliacao*);
        void setCntrApresentacaoConta(IApresentacaoConta*);
        void setCntrApresentacaoExcursao(IApresentacaoExcursao*);
        void setCntrApresentacaoSessao(IApresentacaoSessao*);
 };

 /**
 * @brief Classe Excursao
 * @class Excursao
 * @author Gabriel 200046390
 * 
 * Excursao contém domínios Codigo, Titulo, Nota, Cidade, Duracao, Descricao e Endereco
 */

 inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
     cntrApresentacaoAutenticacao = cntr;
 }

 inline void CntrApresentacaoControle::setCntrApresentacaoAvaliacao(IApresentacaoAvaliacao *cntr){
     cntrApresentacaoAvaliacao = cntr;
 }

inline void CntrApresentacaoControle::setCntrApresentacaoConta(IApresentacaoConta *cntr){
    cntrApresentacaoConta = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoExcursao(IApresentacaoExcursao *cntr){
    cntrApresentacaoExcursao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoSessao(IApresentacaoSessao *cntr){
    cntrApresentacaoSessao = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

class cntrApresentacaoAvaliacao:public IApresentacaoAvaliacao{
    private:
        IServicoAvaliacao *cntr;
        void cadastrarAvaliacao();
        void acessarAvaliacao();
        void descadastrarAvaliacao();
        void editarAvaliacao();
    public:
        void executar();
        void executar(Email);
        void setCntrApresentacaoAvaliacao(IServicoAvaliacao*);
};

inline void CntrApresentacaoAvaliacao::setCntrServicoAvaliacao(IServicoAvaliacao *cntr){
    this->cntr = cntr;
}

class cntrApresentacaoConta:public IApresentacaoConta{
    private:
        IServicoConta *cntr;
        void descadastrarConta();
        void editarConta();
    public:
        void cadastrarConta();
        void executar(Email);
        void setCntrServicoConta(IServicoConta*);
};

inline void CntrApresentacaoConta::setCntrServicoConta(IServicoConta *cntr){
    this->cntr = cntr;
}

class cntrApresentacaoExcursao:public IApresentacaoExcursao{
    private:
        IServicoExcursao *cntrServicoExcursao;
        IServicoSessao *cntrServicoSessao;
        IServicoAvaliacao *cntrServicoAvaliacao;
        void cadastrarExcursao();
        void editarExcursao();
        void descadastrarExcursao();
    public:
        executar();
        executar(Email);
        void listarExcursoses();
        void acessarExcursao();
        void setCntrServicoExcursao(IServicoExcursao*);
        void setCntrServicoAvaliacao(IServicoAvaliacao*);
        void setCntrServicoSessao(IServicoSessao*);
}

class cntrApresentacaoSessao:public IApresentacaoSessao{
    private:
        IServicoSessao *cntr;
        void cadastrarSessao();
        void editarSessao();
        void descadastrarSessao();
    public:
        executar();
        executar(Email);
        void acessarSessao();
        void setCntrServicoSessao(IServicoSessao*);
}
#endif