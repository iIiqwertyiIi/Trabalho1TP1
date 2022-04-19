#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "domain.h"
#include "entity.h"

class IServicoAutenticacao;
class IServicoConta;
class IServicoExcursao;
class IServicoSessao;
class IServicoAvaliacao;

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoConta {
    public:
        virtual void executar(Email) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoConta(IServicoConta*) = 0;
        virtual void setCntrServicoExcursao(IServicoExcursao*) = 0;
        virtual void setCntrServicoSessao(IServicoSessao*) = 0;
        virtual void setCntrServicoAvaliacao(IServicoAvaliacao*) = 0;
        virtual ~IApresentacaoConta(){}
};

class IApresentacaoExcursao {
    public:
        virtual void executar() = 0;
        virtual void executar(Email) = 0;
        virtual void setCntrServicoExcursao(IServicoExcursao*) = 0;
        virtual void setCntrServicoSessao(IServicoSessao*) = 0;
        virtual void setCntrServicoAvaliacao(IServicoAvaliacao*) = 0;
        virtual ~IApresentacaoExcursao(){}
};

class IApresentacaoSessao {
    public:
        virtual void executar() = 0;
        virtual void executar(Email) = 0;
        virtual void setCntrServicoSessao(IServicoSessao*) = 0;
        virtual ~IApresentacaoSessao(){}
};

class IApresentacaoAvaliacao {
    public:
        virtual void executar() = 0;
        virtual void executar(Email) = 0;
        virtual void setCntrServicoAvaliacao(IServicoAvaliacao*) = 0;
        virtual ~IApresentacaoAvaliacao(){}
};

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoConta {
    public:
        virtual bool cadastrarConta(Usuario) = 0;
        virtual bool editarConta(Usuario) = 0;
        virtual bool descadastrarConta(Email) = 0;
        virtual ~IServicoConta(){}
};

class IServicoExcursao {
    public:
        virtual bool listarExcursoses() = 0;
        virtual bool acessarExcursao(Codigo) = 0;
        virtual bool cadastrarExcursao(Excursao) = 0;
        virtual bool editarExcursao(Excursao) = 0;
        virtual bool descadastrarExcursao(Codigo) = 0;
        virtual ~IServicoExcursao(){}
};

class IServicoSessao {
    public:
        virtual bool acessarSessao(Codigo) = 0;
        virtual bool cadastrarSessao(Sessao) = 0;
        virtual bool editarSessao(Sessao) = 0;
        virtual bool descadastrarSessao(Codigo) = 0;
        virtual ~IServicoSessao(){}
};

class IServicoAvaliacao {
    public:
        virtual bool acessarAvaliacao(Codigo) = 0;
        virtual bool cadastrarAvaliacao(Avaliacao) = 0;
        virtual bool editarAvaliacao(Avaliacao) = 0;
        virtual bool descadastrarAvaliacao(Codigo) = 0;
        virtual ~IServicoAvaliacao(){}
};

#endif