#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "Livro.hpp"

// TODO: implementar cada função em src/Biblioteca.cpp

// Pede os dados de um livro ao usuario e adiciona ao acervo.
void cadastrarLivro(std::vector<Livro>& acervo);

// Exibe todos os livros cadastrados no acervo.
void listarLivros(const std::vector<Livro>& acervo);

// Procura um livro pelo codigo. Retorna ponteiro para o livro
// encontrado, ou nullptr caso nao exista nenhum com esse codigo.
Livro* pesquisarPorCodigo(std::vector<Livro>& acervo, int codigo);

// Marca um livro como emprestado (disponivel = false).
void realizarEmprestimo(std::vector<Livro>& acervo);

// Marca um livro como devolvido (disponivel = true).
void realizarDevolucao(std::vector<Livro>& acervo);

#endif
