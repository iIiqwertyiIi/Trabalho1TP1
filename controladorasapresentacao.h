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
#include "curses.h"
#include "domain.h"
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

/**
 * @brief Classe Sessao
 * @class Sessao
 * @author Nícolas 200025627
 * 
 */

class cntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void cntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

class cntrApresentacaoAvaliacao:public IApresentacaoAvaliacao{
    private:
        IServicoAvaliacao *cntr;
        void cadastrarAvaliacao();
        void acessarAvaliacao();
        void descadastrarAvaliacao();
        void editarAvaliacao();
        void setCntrServicoAvaliacao();
    public:
        void executar();
        void executar(Email);
        void setCntrApresentacaoAvaliacao(IServicoAvaliacao*);
};

inline void cntrApresentacaoAvaliacao::setCntrServicoAvaliacao(IServicoAvaliacao *cntr){
    this->cntr = cntr;
}

/**
 * @brief Classe Avaliacao
 * @class Avaliacao
 * @author Vanessa 200028286
 * 
 * Avaliacao contém domínios Codigo, Nota e Descricao
 */

class cntrApresentacaoConta:public IApresentacaoConta{
    private:
        IServicoConta *cntr;
        void descadastrarConta();
        void editarConta();
        void setCntrServicoConta();
    public:
        void cadastrarConta();
        void executar(Email);
        void setCntrServicoConta(IServicoConta*);
};

inline void cntrApresentacaoConta::setCntrServicoConta(IServicoConta *cntr){
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
        void setCntrApresentacaoExcursao();
        void setCntrServicoSessao();
        void setCntrServicoAvaliacao();
    public:
        executar();
        executar(Email);
        void listarExcursoes();
        void acessarExcursao();
        void setCntrServicoExcursao(IServicoExcursao*);
        void setCntrServicoAvaliacao(IServicoAvaliacao*);
        void setCntrServicoSessao(IServicoSessao*);
};

inline void cntrApresentacaoExcursao::setCntrApresentacaoExcursao(IApresentacaoExcursao *cntr){
    cntrApresentacaoExcursao = cntr;
}

inline void cntrApresentacaoExcursao::setCntrServicoSessao(IApresentacaoSessao *cntr){
    cntrApresentacaoSessao = cntr;
}

inline void cntrApresentacaoExcursao::setCntrServicoAvaliacao(IApresentacaoAvaliacao *cntr){
    cntrApresentacaoAvaliacao = cntr;
}

/**
 * @brief Classe Sessao
 * @class Sessao
 * @author Nícolas 200025627
 * 
 */

class cntrApresentacaoSessao:public IApresentacaoSessao{
    private:
        IServicoSessao *cntr;
        void cadastrarSessao();
        void editarSessao();
        void descadastrarSessao();
    public:
        void executar();
        void executar(Email);
        void acessarSessao();
        void setCntrServicoSessao(IServicoSessao*);
};

inline void cntrApresentacaoSessao::setCntrServicoSessao(IServicoSessao *cntr){
    cntrApresentacaoSessao = cntr;
}

#endif