#include "domain.h"

void Cidade::validar(string cidade) {
    int valido = 0;
    for (int i = 0; i < CIDADES.size(); i++)
        if (cidade == CIDADES[i])
            valido = 1;
    if (valido == 0)
        throw invalid_argument("Cidade " + cidade + " inválida");
};

void Cidade::setCidade(string cidade) {
    validar(cidade);
    this->cidade = cidade;
};

void Codigo::validar(string codigo) {
    vector<int> array = {};
    int soma = 0;
    int verificador = 0;
    if (codigo.length() != 7)
        throw invalid_argument("Código " + codigo + " com tamanho diferente de 7");
    for (int i = 0; i < codigo.length(); i++) {
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

void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
};

void Descricao::validar(string descricao) {
    if (descricao.length() > TAMANHO)
        throw invalid_argument("Descrição " + descricao + " com tamanho inválido");
    if (descricao.find("  ") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois espaços consecutivos");
    if (descricao.find("..") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois pontos consecutivos");
};

void Descricao::setDescricao(string descricao) {
    validar(descricao);
    this->descricao = descricao;
};

void Idioma::validar(string idioma) {
    bool verifica = false;
    for (int i = 0; i < IDIOMAS.size(); i++) {
        if (idioma == IDIOMAS[i])
            verifica = true;
    };
    if (verifica == false) 
        throw invalid_argument("Idioma " + idioma + " inválido");
};

void Idioma::setIdioma(string idioma) {
    validar(idioma);
    this->idioma = idioma;
};

void Data::validar(string data) {
    int dia, ano;
    string mes;
    bool verifica = false;
  
    dia = stoi(data.substr(0, 2));
    mes = data.substr(3, 3);
    ano = stoi(data.substr(7, 4));

    if (ano >= 2000 && ano <= 9999) {
        if ((dia >= 1 && dia <= 31) && (mes == "Jan" || mes == "Mar" ||
            mes == "Mai" || mes == "Jul" || mes == "Ago" || mes == "Out" || mes == "Dez"))
          
            verifica = true;

        else if ((dia >= 1 && dia <= 30) && (mes == "Abr" || mes == "Jun" || mes == "Set" || mes == "Nov"))
            verifica = true;

        else if ((dia >= 1 && dia <= 28) && (mes == "Fev"))
            verifica = true;

        else if ((dia == 29 && mes == "Fev") && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
            verifica = true;

        else verifica = false;

    }
    
    else verifica = false;

    if (verifica == false) {
        throw invalid_argument("Data " + data + " inválida");
    }

};

void Data::setData(string data) {
    validar(data);
    this->data = data;
}

void Nome::validar(string nome) {

    if (nome.length() < MIN || nome.length() > MAX) 
        throw invalid_argument("Nome " + nome + " contém caracteres menor que 5 ou maior que 20");
    
    // if (!all(nome, boost::algorithm::is_alpha())) 
    //     throw invalid_argument("Nome " + nome + " não possui caracteres válidos");
    // Isso não funciona, tentando verificar se todos os caracteres são alpha numeric

    // if (nome.find("  ") != std::string::npos)
    //     throw invalid_argument("Nome " + nome + " possui caracteres em sequencia");

    if (nome.size() && std::isupper(nome[0]))
        throw invalid_argument("Nome " + nome + " precisa ter a primeira letra maiúscula");

    // if ((nome[nome.length() - 1] != '.') || (nome[nome.length() - 2] + nome[nome.length() - 1] != '. '))
    //     throw invalid_argument("Nome " + nome + " não termina com '.' ou '. '");
    // Isso n funcioina, tentando verifica se tem um ponto e espaço no final da string
};

void Nome::setNome(string nome) {
    validar(nome);
    this->nome = nome;
};
