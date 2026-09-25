#include "../include/Biblioteca.hpp"
#include <iostream>

using namespace std;

void cadastrarLivro(vector<Livro>& acervo)
{
    // TODO: pedir titulo, autor e codigo ao usuario (use getline para
    // strings), definir disponivel = true e adicionar em "acervo".
}

void listarLivros(const vector<Livro>& acervo)
{
    // TODO: percorrer "acervo" e exibir titulo, autor, codigo e
    // disponibilidade de cada livro.
}

Livro* pesquisarPorCodigo(vector<Livro>& acervo, int codigo)
{
    // TODO: percorrer "acervo" procurando o livro com o codigo informado
    // e retornar o endereco dele (&acervo[i]). Se nao encontrar, retornar nullptr.
    return nullptr;
}

void realizarEmprestimo(vector<Livro>& acervo)
{
    // TODO: pedir o codigo do livro, usar pesquisarPorCodigo, checar se
    // esta disponivel e, se estiver, marcar disponivel = false.
}

void realizarDevolucao(vector<Livro>& acervo)
{
    // TODO: pedir o codigo do livro, usar pesquisarPorCodigo e marcar
    // disponivel = true.
}
