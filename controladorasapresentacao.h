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
        EMAIL email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoAvaliacao *cntrApresentacaoAvaliacao;
        IApresentacaoConta *cntrApresentacaoConta;
        IApresentacaoExcursao *cntrApresentacaoExcusao;
        IApresentacaoSessao *cntrApresentacaoSessao;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoAvaliacao(IApresentacaoAvaliacao*);
        void setCntrApresentacaoConta(IApresentacaoConta*);
        void setCntrApresentacaoExcursao(IApresentacaoExcursao*);
        void setCntrApresentacaoSessao(IApresentacaoSessao*);
 };

 

