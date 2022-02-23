#include "domain.h"

void Cidade::validar(string cidade)
{
    int valido = 0;
    for (int i = 0; i < CIDADES.size(); i++)
        if (cidade == CIDADES[i])
            valido = 1;
    if (valido == 0)
        throw invalid_argument("Cidade " + cidade + " inválida");
};

void Cidade::setCidade(string cidade)
{
    validar(cidade);
    this->cidade = cidade;
};

void Codigo::validar(string codigo)
{
    vector<int> array = {};
    int soma = 0;
    int verificador = 0;
    if (codigo.length() != 7)
        throw invalid_argument("Código " + codigo + " com tamanho diferente de 7");
    for (int i = 0; i < codigo.length(); i++)
    {
        int a = codigo[i];
        if (a < 48 || a > 57)
            throw invalid_argument("Código " + codigo + " com dígitos diferentes de números");
        array.push_back(codigo[i] - '0');
    };
    for (int j = 0; j < 6; j++)
        soma += array[j];
    verificador = soma % 10;
    if (codigo == INVALIDO)
        throw invalid_argument("Código " + codigo + " não existe");
    if (verificador != array[6])
        throw invalid_argument("Código " + codigo + " com verificador errado");
};

void Codigo::setCodigo(string codigo)
{
    validar(codigo);
    this->codigo = codigo;
};

void Descricao::validar(string descricao)
{
    if (descricao.length() > TAMANHO)
        throw invalid_argument("Descrição " + descricao + " com tamanho inválido");
    if (descricao.find("  ") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois espaços consecutivos");
    if (descricao.find("..") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois pontos consecutivos");
};

void Descricao::setDescricao(string descricao)
{
    validar(descricao);
    this->descricao = descricao;
};

void Idioma::validar(string idioma)
{
    bool verifica = false;
    for (int i = 0; i < IDIOMAS.size(); i++)
    {
        if (idioma == IDIOMAS[i])
            verifica = true;
    };
    if (verifica == false)
        throw invalid_argument("Idioma " + idioma + " inválido");
};

void Idioma::setIdioma(string idioma)
{
    validar(idioma);
    this->idioma = idioma;
};

void Titulo::validar(string titulo)
{
    int qtdLetras = 0;
    for (int i = 0; i < titulo.length(); i++)
    {
        if (isalpha(titulo[i]))
            qtdLetras++;

        if (qtdLetras > 20)
            throw invalid_argument("O titulo precisa ter menos de 20 letras");
    }

    if (qtdLetras < 5)
        throw invalid_argument("O titulo precisa ter mais de 5 letras");

    for (int i = 0; i < titulo.length(); i++)
        if ((!isalpha(titulo[i])) and (titulo[i] != '.') and (titulo[i] != ' '))
            throw invalid_argument("Contém caracteres inválidos");

    for (int i = 0; i < titulo.length(); i++)
        if ((titulo[i] == '.') and (titulo[i + 1] == '.'))
            throw invalid_argument("O título não pode conter '.' em sequencia");

    for (int i = 0; i < titulo.length(); i++)
        if ((titulo[i] == ' ') and (titulo[i + 1] == ' '))
            throw invalid_argument("O título não pode conter espaços em branco em sequência");
};

void Titulo::setTitulo(string titulo)
{
    validar(titulo);
    this->titulo = titulo;
};