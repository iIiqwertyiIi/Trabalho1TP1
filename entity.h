#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

/**
 * @file entity.h
 * @author Nícolas Paulin Benatto
 * @author Gabriel Xavier Cardoso
 * @author Vanessa Paixão Costa
 * @brief Entidades pedidas no trabalho
 * @version 0.1
 * @date 2022-02-24
 * 
 * @copyright Copyright (c) Nícolas, Gabriel e Vanessa 2022
 * 
 */

#include "domain.h"

using namespace std;

/**
 * @brief Classe Avaliacao
 * @class Avaliacao
 * @author Vanessa 200028286
 * 
 * Avaliacao contém domínios Codigo, Nota e Descricao
 */

class Avaliacao {
    private:
        Codigo codigo;
        Nota nota;
        Descricao descricao;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;
        void setNota(const Nota&);
        Nota getNota() const;
        void setDescricao(const Descricao&);
        Descricao getDescricao() const;
};

inline void Avaliacao::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
};

inline Codigo Avaliacao::getCodigo() const {
    return codigo;
};

inline void Avaliacao::setNota(const Nota& nota) {
    this->nota = nota;
};

inline Nota Avaliacao::getNota() const {
    return nota;
};

inline void Avaliacao::setDescricao(const Descricao& descricao) {
    this->descricao = descricao;
};

inline Descricao Avaliacao::getDescricao() const {
    return descricao;
};

/**
 * @brief Classe Excursao
 * @class Excursao
 * @author Gabriel 200046390
 * 
 * Excursao contém domínios Codigo, Titulo, Nota, Cidade, Duracao, Descricao e Endereco
 */

class Excursao {
    private:
        Codigo codigo;
        Titulo titulo;
        Nota nota;
        Cidade cidade;
        Duracao duracao;
        Descricao descricao;
        Endereco endereco;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;
        void setTitulo(const Titulo&);
        Titulo getTitulo() const;
        void setNota(const Nota&);
        Nota getNota() const;
        void setCidade(const Cidade&);
        Cidade getCidade() const;
        void setDuracao(const Duracao&);
        Duracao getDuracao() const;
        void setDescricao(const Descricao&);
        Descricao getDescricao() const;
        void setEndereco(const Endereco&);
        Endereco getEndereco() const;
};

inline void Excursao::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
};

inline Codigo Excursao::getCodigo() const {
    return codigo;
};

inline void Excursao::setTitulo(const Titulo& titulo) {
    this->titulo = titulo;
};

inline Titulo Excursao::getTitulo() const {
    return titulo;
};

inline void Excursao::setNota(const Nota& nota) {
    this->nota = nota;
};

inline Nota Excursao::getNota() const {
    return nota;
};

inline void Excursao::setCidade(const Cidade& cidade) {
    this->cidade = cidade;
};

inline Cidade Excursao::getCidade() const {
    return cidade;
};

inline void Excursao::setDuracao(const Duracao& duracao) {
    this->duracao = duracao;
};

inline Duracao Excursao::getDuracao() const {
    return duracao;
};

inline void Excursao::setDescricao(const Descricao& descricao) {
    this->descricao = descricao;
};

inline Descricao Excursao::getDescricao() const {
    return descricao;
};

inline void Excursao::setEndereco(const Endereco& endereco) {
    this->endereco = endereco;
};

inline Endereco Excursao::getEndereco() const {
    return endereco;
};

/**
 * @brief Classe Sessao
 * @class Sessao
 * @author Nícolas 200025627
 * 
 * Sessao contém domínios Codigo, Data, Horario e Idioma
 */

class Sessao {
    private:
        Codigo codigo;
        Data data;
        Horario horario;
        Idioma idioma;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;
        void setData(const Data&);
        Data getData() const;
        void setHorario(const Horario&);
        Horario getHorario() const;
        void setIdioma(const Idioma&);
        Idioma getIdioma() const;
};

inline void Sessao::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
};

inline Codigo Sessao::getCodigo() const {
    return codigo;
};

inline void Sessao::setData(const Data& data) {
    this->data = data;
};

inline Data Sessao::getData() const {
    return data;
};

inline void Sessao::setHorario(const Horario& horario) {
    this->horario = horario;
};

inline Horario Sessao::getHorario() const {
    return horario;
};

inline void Sessao::setIdioma(const Idioma& idioma) {
    this->idioma = idioma;
};

inline Idioma Sessao::getIdioma() const {
    return idioma;
};

/**
 * @brief Classe Usuario
 * @class Usuario
 * @author Nícolas 200025627
 * 
 * Usuario contém domínios Nome, Email e Senha
 */

class Usuario {
    private:
        Nome nome;
        Email email;
        Senha senha;
    public:
        void setNome(const Nome&);
        Nome getNome() const;
        void setEmail(const Email&);
        Email getEmail() const;
        void setSenha(const Senha&);
        Senha getSenha() const;
};

inline void Usuario::setNome(const Nome& nome){
    this->nome = nome;
};

inline Nome Usuario::getNome() const{
    return nome;
};

inline void Usuario::setEmail(const Email& email){
    this->email = email;
};

inline Email Usuario::getEmail() const{
    return email;
};

inline void Usuario::setSenha(const Senha& senha){
    this->senha = senha;
};

inline Senha Usuario::getSenha() const{
    return senha;
};

#endif