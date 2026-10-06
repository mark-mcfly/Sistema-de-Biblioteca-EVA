/// Bibliotecas da linguagem
#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

/// Cria um tipo de dado Estruturado que se comporta como um molde, Agrupando informaçoes
/// de um Livro.
struct livro
{
    string Titulo;
    string Autor;
    string Editora;
    bool Disponibilidade;
    int Codigo;
};

/// Aqui o vector ele guarda as informaçoes da struct e permite seu aumento de informaçoes gradualmente a cada novo cadastro gerenciando seu proprio armazenamento de forma automatica.
vector<livro> acervo;

/// Cria uma Funçao Percorre todo o "acervo onde foi atribuido a estrutura dos Livros" em Busca do Codigo Do Livro 
/// que o usuario esta solicitando.
int Buscar_Por_Codigo(int codigo) {
    for (int i = 0; i < acervo.size(); i++) {
        if (acervo[i].Codigo == codigo) {
            return i;
        }
    }
    return -1;
}

/// a funçao de cadastrar Livro insere as informacoes em cada membro da struct atraves do operador tipo ponto .(Ou dot operator)
void Cadastrar_Livro() { 
   /// cria uma variavel temporaria "Guardar do tipo Livro"  para poder chamar cada membro da struct individualmente atraves dot operator
    livro Guardar;
    
    /// pede ao usuario digitar nome do livro
    cout << "\nInsira o Titulo do Livro: ";
    /// le o que o osuario digitou e guarda diretamente no membro da struct tipo Titulo, usando (cin, Guarda.Titulo)
    getline(cin, Guardar.Titulo);
    
    cout << "Insira o Autor: ";
    getline(cin, Guardar.Autor);
    
    cout << "Insira o Codigo Do Livro: ";
    cin >> Guardar.Codigo;
    
    /// serve para limpar o buffer de entrada do teclado. 
    /// Basicamente, ele joga fora qualquer caractere indesejado que tenha ficado na memória do cin até encontrar a quebra de linha (o 'Enter').
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 


    /// aqui ele verifica na funcao Buscar_por_Codigo se a algum livro com codigo iguais e encerra o cadastro
    if (Buscar_Por_Codigo(Guardar.Codigo) != -1) {
        cout << "Ja existe um livro com esse codigo! Cadastro cancelado.\n";
        return;
    }

    cout << "Insira a Editora: ";
    getline(cin, Guardar.Editora);
    
    /// Guardar.Disponibilidade define automaticamente que um livro recem-cadastrado esta disponivel na biblioteca e livre para ser emprestado
    Guardar.Disponibilidade = true; 
    
    ///Salva a ficha preenchida do livro no final da lista do acervo
    acervo.push_back(Guardar);
    
    cout << "Livro cadastrado com sucesso!\n";
}


void listarlivros(){
    /// ele verifica se o vetor(a lista de livros) esta vazio se estiver ele avisa o osuario e encerra funçao
    if (acervo.empty()){
        cout<<"Nao ha livros Cadastrados no Momento... ";
        return; 
    }
     
    ///percorre todo o acervo e verifica a disponibilidade
    for (int i = 0; i < acervo.size(); i++){
        cout << "Titulo: " << acervo[i].Titulo << endl;
        cout << "Autor: " << acervo[i].Autor << endl;
        cout << "Codigo: " << acervo[i].Codigo << endl;

        if (acervo[i].Disponibilidade){
            cout<<"Livro Disponivel..";
        }
        else {
        cout<<"Livro Emprestado..";
        }
        cout << endl;
        }

    }


void PesquisarLivro(){
    int Codigo;
    cout<<"Insira o Codigo do Livro:  ";
    cin>>Codigo;

    int indice = Buscar_Por_Codigo(Codigo);
    if (indice == -1){
        cout<<"Livro nao Encotrado..";
    }
    else {
        cout<<"Titulo: "<<acervo[indice].Titulo<<"|Autor: "<< acervo[indice].Autor;
    
    }
}
void RealizarEmprestimo(){
    int codigo;
    cout << "Digite o codigo do livro: ";
    cin >> codigo;
    
    int indice = Buscar_Por_Codigo(codigo);
    
    if(indice == -1){
    cout<<"Livro Nao Existe";
    
    } else {
        if (acervo[indice].Disponibilidade == false )
        cout << "Livro Esta Emprestado..";
        else {
        acervo[indice].Disponibilidade = false;
        cout << "Emprestimo realizado com sucesso!";
        }
    }
    
}

void RealizarDevolucao(){
    int codigo;
    cout << "Digite o codigo do livro: ";
    cin >> codigo;
    int indice = Buscar_Por_Codigo(codigo);

    if (indice == -1){
    cout<<"Livro Nao Existe.., Nao e Possivel Realizar Devolucao";
    } else {
        if (acervo[indice].Disponibilidade == false){
        acervo[indice].Disponibilidade = true;
        cout<<"Livro Devolvido..!";
        } else {
        cout<<"Livro nao esta emprestado";
        }
    }
}

int main() {
    int opcao;

    do {
        cout << "\n===== BIBLIOTECA EVA Unit 01 =====\n";
        cout << "1 - Cadastrar livro\n";
        cout << "2 - Listar livros\n";
        cout << "3 - Pesquisar por codigo\n";
        cout << "4 - Realizar emprestimo\n";
        cout << "5 - Realizar devolucao\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');


        switch (opcao){
        
            case 1 :
            Cadastrar_Livro();
            break;
            case 2 :
            listarlivros();
            break;
            case 3 :
            PesquisarLivro();
            break;
            case 4:
            RealizarEmprestimo();
            break;
            case 5:    
            RealizarDevolucao();
            break;

            case 0:
            cout<<"Saindo do Programa...\n";
            break;

            default:
            cout << "Opcao invalida! Tente novamente.\n";

        
        }
    }  while (opcao != 0);
 return 0;
}
