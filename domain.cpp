#include "domain.h"
#include <regex>
#include <string>
#include <iostream>

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

void Email::validar(string email)
{
    cout << "\nTá entrando aqui 1 ";

    int i = 0;
    while ((i < email.length()) or (email[i] != '@'))
    {
        i++;
    }
    if (i == email.length())
    {
        throw invalid_argument("Fomato inválido");
    }

    string locale = email.substr(0, i);
    string domain = email.substr(i + 1, -1);

    if (locale.length() > 64)
        throw invalid_argument("Parte local precisa ter no máximo 64 caracteres");

    if (domain.length() > 253)
        throw invalid_argument("Domínio precisa ter no máximo 250 caracteres");

    if ((locale[0] == '.') or (locale[-1] == '.'))
        throw invalid_argument("Parte local não pode conter '.' no primeiro ou ultimo caractere");

    if (domain[0] == '.')
        throw invalid_argument("Dominio não pode conter '.' no primeiro caractere");

    // for (int i = 0; i < locale.length() - 1; i++)
    // {
    //     if ((locale[i] == '.') and (locale[i + 1] == '.'))
    //         throw invalid_argument("Parte local não pode conter '.' seguidos");
    // }

    // for (int i = 0; i < domain.length() - 1; i++)
    // {
    //     if ((domain[i] == '.') and (domain[i + 1] == '.'))
    //         throw invalid_argument("Dominio não pode conter '.' seguidos");
    // }

    if (!regex_match(locale, regex("[a-zA-Z0-9!#$%&'+-/=?^_`{|}~.]")))
        ;
    throw invalid_argument("Parte local contém caracteres não permitidos");

    if (!regex_match(domain, regex("[a-zA-Z0-9!#$%&'+-/=?^_`{|}~.]")))
        ;
    throw invalid_argument("Domínio contém caracteres não permitidos");
};

void Email::setEmail(string email)
{
    validar(email);
    this->email = email;
};