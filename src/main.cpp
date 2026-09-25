#include <iostream>
#include <vector>
#include "../include/Biblioteca.hpp"

using namespace std;

int main()
{
    vector<Livro> acervo;
    int opcao = -1;

    while (opcao != 0)
    {
        cout << "\n===== Sistema de Biblioteca =====\n";
        cout << "1 - Cadastrar livro\n";
        cout << "2 - Listar livros\n";
        cout << "3 - Pesquisar por codigo\n";
        cout << "4 - Realizar emprestimo\n";
        cout << "5 - Realizar devolucao\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao)
        {
        case 1:
            cadastrarLivro(acervo);
            break;
        case 2:
            listarLivros(acervo);
            break;
        case 3:
        {
            cout << "Codigo do livro: ";
            int codigo;
            cin >> codigo;
            Livro* encontrado = pesquisarPorCodigo(acervo, codigo);
            if (encontrado != nullptr)
                cout << "Encontrado: " << encontrado->titulo << " - " << encontrado->autor << "\n";
            else
                cout << "Livro nao encontrado.\n";
            break;
        }
        case 4:
            realizarEmprestimo(acervo);
            break;
        case 5:
            realizarDevolucao(acervo);
            break;
        case 0:
            cout << "Encerrando...\n";
            break;
        default:
            cout << "Opcao invalida.\n";
        }
    }

    return 0;
}
