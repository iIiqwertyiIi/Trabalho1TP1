#include "controladorasapresentacao.h"

void CntrApresentacaoControle::executar(){

    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione uma das opções: ";
    char texto2[]="1 - Fazer login.";
    char texto3[]="2 - Cadastrar uma conta.";
    char texto4[]="3 - Acessar dados de excursões.";
    char texto5[]="4 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de  seleção de serviço p/ usuários autenticados.

    char texto6[]="Selecione um dos servicos: ";
    char texto7[]="1 - Selecionar servicos de excursão.";
    char texto8[]="2 - Selecionar servicos de conta.";
    char texto9[]="3 - Encerrar sessao.";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        // Mensagem a ser apresentada.
    // Mensagens a serem apresentadas na tela de seleção de serviço p/ usuários não autenticados.

    char texto11[]="Selecione um dos serviços: ";
    char texto12[]="1 - Listar excursões.";
    char texto13[]="2 - Acessar uma excursão.";
    char texto14[]="3 - Encerrar sessão.";


    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela inicial.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                             // Imprime nome do campo.

        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
        echo();

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->autenticar(&email)){                         // Solicita autentica��o.
                        bool apresentar = true;                                                 // Controle de la�o.
                        while(apresentar){

                            // Apresenta tela de sele��o de servi�o p/ usuários autenticados.

                            clear();                                                            // Limpa janela.
                            mvprintw(linha/4,coluna/4,"%s",texto6);                             // Imprime nome do campo.
                            mvprintw(linha/4 + 2,coluna/4,"%s",texto7);                         // Imprime nome do campo.
                            mvprintw(linha/4 + 4,coluna/4,"%s",texto8);                         // Imprime nome do campo.
                            mvprintw(linha/4 + 6,coluna/4,"%s",texto9);                         // Imprime nome do campo.                                    // Apresenta tela de sele��o de servi�o.
                            noecho();
                            campo = getch() - 48;                                               // Leitura do campo de entrada e convers�o de ASCII.
                            echo();

                            switch(campo){
                                case 1: cntrApresentacaoExcursao->executar(email);                 // Solicita servi�o de pessoal.
                                        break;
                                case 2: cntrApresentacaoConta->executar(email);     // Solicita servi�o de produto financeiro.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        clear();                                                                // Limpa janela.
                        mvprintw(linha/4,coluna/4,"%s",texto10);                                // Imprime mensagem.
                        noecho();                                                               // Desabilita eco.
                        getch();                                                                // Leitura de caracter digitado.
                        echo();                                                                 // Habilita eco.
                    }
                    break;
            case 2: cntrApresentacaoConta->cadastrar(); //apresenta tela de cadatro
                    break;
            case 3: 
                    bool apresentar = true;                                                 // Controle de la�o.
                        while(apresentar){

                            // Apresenta tela de sele��o de servi�o p/ usuários não autenticados.

                            clear();                                                            // Limpa janela.
                            mvprintw(linha/4,coluna/4,"%s",texto11);                             // Imprime nome do campo.
                            mvprintw(linha/4 + 2,coluna/4,"%s",texto12);                         // Imprime nome do campo.
                            mvprintw(linha/4 + 4,coluna/4,"%s",texto13);                         // Imprime nome do campo.
                            mvprintw(linha/4 + 6,coluna/4,"%s",texto14);                         // Imprime nome do campo.                                    // Apresenta tela de sele��o de servi�o.
                            noecho();
                            campo = getch() - 48;                                               // Leitura do campo de entrada e convers�o de ASCII.
                            echo();

                            switch(campo){
                                case 1: cntrApresentacaoExcursao->listarExcursoes();                 // Solicita servi�o de pessoal.
                                        break;
                                case 2: cntrApresentacaoExcursao->acessarExcursoes();     // Solicita servi�o de produto financeiro.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    break;
            case 4: apresentar = false;
                    break;
        }
    }
    return;
}

//------------Tela de autenticação--------------------------------------------------------------------------------

bool cntrApresentacaoAutenticacao::autenticar(Email *email){

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o email  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Tente novamente.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    Senha senha;                                                                                // Instancia a classe Senha.

    echo();                                                                                     // Habilita eco.

    while(true){

        // Apresenta tela de autentica��o.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        getstr(campo1);                                                                         // L� valor do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        getstr(campo2);                                                                         // L� valor do campo.

        try{
            email->setEmail(string(campo1));                                                      // Atribui valor ao CPF.
            senha->setSenha(string(campo2));                                                     // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
            clear();                                                                            // Limpa janela.
            mvprintw(linha/4,coluna/4,"%s",texto3);                                             // Informa formato incorreto.
            noecho();
            getch();                                                                            // L� caracter digitado.
            echo();
        }
    }
    return (cntr->autenticar(*email, senha));                                                     // Solicita servi�o de autentica��o.
}

//----------------Tela de serviços p/ usuários autenticados----------------------------------------------------------------------------

void CntrApresentacaoExcursao::executar(Email email){

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Listar excursões.";
    char texto3[]="2 - Acessar dados de uma excursão";
    char texto4[]="3 - Cadastrar excursão.";
    char texto5[]="4 - Editar excursão.";
    char texto6[]="5 - Excluir excursão";
    char texto7[]="6 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    bool apresentar = true;                                                                     // Controle de la�o.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela de sela��o de servi�o.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                             // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
        echo();

        switch(campo){
            case 1: listarExcursoses();
                    break;
            case 2: acessarExcursao();
                    break;
            case 3: cadastrarExcursao();
                    break;
            case 4: editarExcursao();
                    break;
            case 5: descadastrarExcursao();
                    break;
            case 6: apresentar = false;
                    break;
        }
    }
}

//------Serviço de conta p/ usuários autenticados--------------------------------------------------------------------------------------

void CntrApresentacaoConta::executar(Email email){

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Editar dados da conta.";
    char texto3[]="2 - Deletar conta";
    char texto4[]="3 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    bool apresentar = true;                                                                     // Controle de la�o.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela de sela��o de servi�o de conta.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
        echo();

        switch(campo){
            case 1: editarConta();
                    break;
            case 2: descadastrarConta();
                    break;
            case 3: apresentar = false;
                    break;
        }
    }
}

//--------------Tela de cadastro------------------------------------------------------------------------------

void CntrApresentacaoConta::cadastrar(){

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome            :";
    char texto3[] ="Email           :";
    char texto4[] ="Senha           :";
    char texto5[]="Dados em formato incorreto. Digite algo.";
    char texto6[]="Sucesso no cadastramento. Digite algo.";
    char texto7[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80];                            // Cria campos para entrada dos dados.

    // Instancia os dom�nios.

    Nome nome;
    Email email;
    Senha senha;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    // Apresenta tela de cadastramento.

    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    getstr(campo2);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    getstr(campo3);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.
    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                                // Imprime nome do campo.
    mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                                // Imprime nome do campo.

    try{
        nome.setNome(string(campo1));
        email.setEmail(string(campo2));
        senha.setSenha(string(campo3));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto5);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }

    // Instancia e inicializa entidades.

    Usuario usuario;

    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(senha);


    // Cadastra usu�rio e conta.

    if(cntrServicoConta->cadastrarUsuario(usuario)){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto6);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;
        }

    mvprintw(linha/4 + 18,coluna/4,"%s",texto7);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;
}

//----Lista excursões para usuário não autenticado

void CntrApresentacaoExcursao::listarExcursoses(){


    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    char texto[]="Servico consultar dados pessoais nao implementado. Digite algo.";             // Mensagem a ser apresentada.
    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto);                                                      // Imprime nome do campo.
    noecho();
    getch();
    echo();
}

//---- Acessa uma excursão - usuário não autenticado

void CntrApresentacaoExcursao::listarExcursoses(){



    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    char texto[]="Servico consultar dados pessoais nao implementado. Digite algo.";             // Mensagem a ser apresentada.
    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto);                                                      // Imprime nome do campo.
    noecho();
    getch();
    echo();
}

//-----Cadastrar uma excursão---------------------------------------------------------------------------------------

void CntrApresentacaoExcursao::cadastrarExcursao(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Digite os seguintes dados da excursão: ";
    char texto2[]="Código: ";
    char texto3[]="Título: ";
    char texto4[]="Cidade: ";
    char texto5[]="Duração: ";
    char texto6[]="Descrição: ";
    char texto7[]="Endereço: ";
    char texto8[]="Dados em formato incorreto. Digite algo.";
    char texto9[]="Sucesso no cadastramento. Digite algo.";
    char texto10[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80], campo6[80];                                                                        // Campo de entrada.

    Codigo codigo;
    Titulo titulo;
    Cidade cidade;
    Duracao duracao;
    Descricao descricao;
    Endereco endereco;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    clear();                                                                                     // Habilita eco.

        // Apresenta tela com informações necessárias p/ cadastro de excursão.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                             // Imprime nome do campo.

        try{
            codigo.setCodigo(string(campo1));
            titulo.setTitulo(string(campo2));
            cidade.setCidade(string(campo3));
            duracao.setDuracao(string(campo4));
            descricao.setDescricao(string(campo5));
            endereco.setEndereco(string(campo6));
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 14,coluna/4,"%s",texto8); 
            noecho();                                                                               // Desabilita eco.
            getch();                                                                                // Leitura de caracter digitado.
            echo();                                                                                 // Habilita eco.
            return;                                            // Imprime nome do campo.
        }

        //instancia e inicializa entidades.

        Excursao excursao;

        excursao.setCodigo(codigo);
        excursao.setTitulo(titulo);
        excursao.setCidade(cidade);
        excursao.setDuracao(duracao);
        excursao.setDescricao(descricao);
        excursao.setEndereco(endereco);

        //cadastra excursão

    if(cntrServicoExcursao->cadastrarExcursao(excursao)){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto9);                                               // Informa sucesso.
        noecho();
        getch();
        echo();
        return;
    }

    mvprintw(linha/4 + 18,coluna/4,"%s",texto10);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoExcursao::editarExcursao(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Digite os seguintes dados que serão alterados: ";
    char texto2[]="Título: ";
    char texto3[]="Cidade: ";
    char texto4[]="Duração: ";
    char texto5[]="Descrição: ";
    char texto6[]="Endereço: ";
    char texto7[]="Dados em formato incorreto. Digite algo.";
    char texto8[]="Sucesso no cadastramento. Digite algo.";
    char texto9[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80]];                                                                        // Campo de entrada.

    Titulo titulo;
    Cidade cidade;
    Duracao duracao;
    Descricao descricao;
    Endereco endereco;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    clear();                                                                                     // Habilita eco.

        // Apresenta tela com informações necessárias p/ cadastro de excursão.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                             // Imprime nome do campo.

        try{
            titulo.setTitulo(string(campo1));
            cidade.setCidade(string(campo2));
            duracao.setDuracao(string(campo3));
            descricao.setDescricao(string(campo4));
            endereco.setEndereco(string(campo5));
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 14,coluna/4,"%s",texto7); 
            noecho();                                                                               // Desabilita eco.
            getch();                                                                                // Leitura de caracter digitado.
            echo();                                                                                 // Habilita eco.
            return;                                            // Imprime nome do campo.
        }

        //instancia e inicializa entidades.

        Excursao excursao;

        excursao.setCodigo(codigo);
        excursao.setTitulo(titulo);
        excursao.setCidade(cidade);
        excursao.setDuracao(duracao);
        excursao.setDescricao(descricao);
        excursao.setEndereco(endereco);

        //cadastra excursão

    if(cntrServicoExcursao->editarExcursao(excursao)){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto8);                                               // Informa sucesso.
        noecho();
        getch();
        echo();
        return;
    }

    mvprintw(linha/4 + 18,coluna/4,"%s",texto9);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoExcursao::descadastrarExcursao(){

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Digite o código da excursão que seja excluir: ";
    char texto2[] ="Código: ";
    char texto3[]="Dados em formato incorreto. Digite algo.";
    char texto4[]="Sucesso na deleção. Digite algo.";
    char texto5[]="Falha na deleção. Digite algo.";


    int campo; 
    
    Codigo codigo;                                                                                 // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    //apresenta tela de deletar

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo);  

    try{
        codigo.setCodigo(string(campo));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }

    if(cntrServicoExcursao->descadastrarExcursao()){
            mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;
        }

    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;

}

//-------Editar dados da conta-------------------------------------------------------------------------------------

void CntrApresentacaoConta::editarConta(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Digite os seguintes dados que serão alterados: ";
    char texto2[]="Nome: ";
    char texto3[]="Senha: ";
    char texto4[]="Dados em formato incorreto. Digite algo.";
    char texto5[]="Sucesso no cadastramento. Digite algo.";
    char texto6[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80];                                                                        // Campo de entrada.

    Nome nome;
    Senha senha;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    clear();                                                                                     // Habilita eco.

        // Apresenta tela com informações necessárias p/ cadastro de excursão.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.

        try{
            nome.setNome(string(campo1));
            senha.setSenha(string(campo2));
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 6,coluna/4,"%s",texto4); 
            noecho();                                                                               // Desabilita eco.
            getch();                                                                                // Leitura de caracter digitado.
            echo();                                                                                 // Habilita eco.
            return;                                            // Imprime nome do campo.
        }

        //instancia e inicializa entidades.

        Usuario usuario;

        usuario.setNome(nome);
        usuario.setTitulo(titulo);
        usuario.setCidade(cidade);
        usuario.setDuracao(duracao);
        usuario.setDescricao(descricao);
        usuario.setEndereco(endereco);

        //eduta dados do usuário

    if(cntrServicoConta->editarConta(conta)){
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                               // Informa sucesso.
        noecho();
        getch();
        echo();
        return;
    }

    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;
}
//--------------------------------------------------------------------------------------------


void CntrApresentacaoConta::descadastrarConta(){

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Digite o email da conta que deseja excluir: ";
    char texto2[] ="Email: ";
    char texto3[]="Dados em formato incorreto. Digite algo.";
    char texto4[]="Sucesso na deleção. Digite algo.";
    char texto5[]="Falha na deleção. Digite algo.";


    int campo; 
    
    Email email;                                                                                 // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    //apresenta tela de deletar conta

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo);  

    try{
        email.setEmail(string(campo));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }

    if(cntrServicoConta->descadastrarConta())
            mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;
        }

    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;

}