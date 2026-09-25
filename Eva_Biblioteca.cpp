#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

struct livro
{
    string Titulo;
    string Subtitulo;
    string Autor;
    string Editora;
    bool Disponibilidade;
    int Ano_Publicacao;
    int Codigo;
};

int totalLivros = 0;
livro* acervo = nullptr;

void Cadastrar_Livro() { 
    livro Guardar;

    cout << "Insira o Titulo do Livro:  "; 
    getline(cin, Guardar.Titulo); 
    cout << "Insira O Subtitulo:  ";
    getline(cin,Guardar.Subtitulo);
    cout<<"Insira o Autor:  ";
    getline(cin,Guardar.Autor);
    cout<<"Insira a Editora:  ";
    getline(cin,Guardar.Editora);
    cout<<"Insira a Disponibilidade:  ";
    cin>>Guardar.Disponibilidade;
    cout<<"Insira O Ano De Publicacao:  ";
    cin>>Guardar.Ano_Publicacao;
    cout<<"Insira o Codigo Do Livro:  ";
    cin>>Guardar.Codigo;
}