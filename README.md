# Sistema de Biblioteca

Trabalho de Prog II — Miguel Angelo Martins Sousa.

## Estrutura do projeto

```
include/
  Livro.hpp        -> struct Livro (titulo, autor, codigo, disponivel)
  Biblioteca.hpp    -> declaracao das funcoes do sistema
src/
  Biblioteca.cpp    -> implementacao das funcoes (com TODOs)
  main.cpp          -> menu principal, ja funcional
```

## O que falta implementar

As assinaturas das funcoes ja estao definidas em `include/Biblioteca.hpp`
e o menu em `src/main.cpp` ja chama todas elas. Falta implementar o corpo
de cada uma em `src/Biblioteca.cpp` (marcado com `// TODO`):

- `cadastrarLivro` — cadastrar livro no acervo;
- `listarLivros` — listar todos os livros cadastrados;
- `pesquisarPorCodigo` — pesquisar livro por codigo;
- `realizarEmprestimo` — marcar livro como emprestado;
- `realizarDevolucao` — marcar livro como devolvido.

## Como compilar

```
g++ src/main.cpp src/Biblioteca.cpp -o biblioteca
```
