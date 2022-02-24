#include "test_entity.h"

void TUAvaliacao::setUp() {
    avaliacao = new Avaliacao();
    estado = SUCESSO;
};

void TUAvaliacao::tearDown() {
    delete avaliacao;
};

void TUAvaliacao::testarSucesso() {
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    avaliacao->setCodigo(codigo);
    if (avaliacao->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;
    
    Nota nota;
    nota.setNota(NOTA_VALIDA);
    avaliacao->setNota(nota);
    if (avaliacao->getNota().getNota() != NOTA_VALIDA)
        estado = FALHA;
    
    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    avaliacao->setDescricao(descricao);
    if (avaliacao->getDescricao().getDescricao() != DESCRICAO_VALIDA)
        estado = FALHA;
};

int TUAvaliacao::run() {
    setUp();
    testarSucesso();
    tearDown();
    return estado;
};

void TUExcursao::setUp() {
    excursao = new Excursao();
    estado = SUCESSO;
};

void TUExcursao::tearDown() {
    delete excursao;
};

void TUExcursao::testarSucesso() {
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    excursao->setCodigo(codigo);
    if (excursao->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;
    
    Titulo titulo;
    titulo.setTitulo(TITULO_VALIDO);
    excursao->setTitulo(titulo);
    if (excursao->getTitulo().getTitulo() != TITULO_VALIDO)
        estado = FALHA;
    
    Nota nota;
    nota.setNota(NOTA_VALIDA);
    excursao->setNota(nota);
    if (excursao->getNota().getNota() != NOTA_VALIDA)
        estado = FALHA;
    
    Cidade cidade;
    cidade.setCidade(CIDADE_VALIDA);
    excursao->setCidade(cidade);
    if (excursao->getCidade().getCidade() != CIDADE_VALIDA)
        estado = FALHA;
    
    Duracao duracao;
    duracao.setDuracao(DURACAO_VALIDA);
    excursao->setDuracao(duracao);
    if (excursao->getDuracao().getDuracao() != DURACAO_VALIDA)
        estado = FALHA;
    
    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    excursao->setDescricao(descricao);
    if (excursao->getDescricao().getDescricao() != DESCRICAO_VALIDA)
        estado = FALHA;
    
    Endereco endereco;
    endereco.setEndereco(ENDERECO_VALIDO);
    excursao->setEndereco(endereco);
    if (excursao->getEndereco().getEndereco() != ENDERECO_VALIDO)
        estado = FALHA;
};

int TUExcursao::run() {
    setUp();
    testarSucesso();
    tearDown();
    return estado;
}

void TUSessao::setUp() {
    sessao = new Sessao();
    estado = SUCESSO;
};

void TUSessao::tearDown() {
    delete sessao;
};

void TUSessao::testarSucesso() {
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    sessao->setCodigo(codigo);
    if (sessao->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Data data;
    data.setData(DATA_VALIDA);
    sessao->setData(data);
    if (sessao->getData().getData() != DATA_VALIDA)
        estado = FALHA;
    
    Horario horario;
    horario.setHorario(HORARIO_VALIDO);
    sessao->setHorario(horario);
    if (sessao->getHorario().getHorario() != HORARIO_VALIDO)
        estado = FALHA;
    
    Idioma idioma;
    idioma.setIdioma(IDIOMA_VALIDO);
    sessao->setIdioma(idioma);
    if (sessao->getIdioma().getIdioma() != IDIOMA_VALIDO)
        estado = FALHA;
};

int TUSessao::run() {
    setUp();
    testarSucesso();
    tearDown();
    return estado;
};

void TUUsuario::setUp() {
    usuario = new Usuario;
    estado = SUCESSO;
};

void TUUsuario::tearDown() {
    delete usuario;
};

void TUUsuario::testarSucesso() {
    Nome nome;
    nome.setNome(NOME_VALIDO);
    usuario->setNome(nome);
    if (usuario->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Email email;
    email.setEmail(EMAIL_VALIDO);
    usuario->setEmail(email);
    if (usuario->getEmail().getEmail() != EMAIL_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setSenha(SENHA_VALIDA);
    usuario->setSenha(senha);
    if (usuario->getSenha().getSenha() != SENHA_VALIDA)
        estado = FALHA;
};

int TUUsuario::run() {
    setUp();
    testarSucesso();
    tearDown();
    return estado;
};