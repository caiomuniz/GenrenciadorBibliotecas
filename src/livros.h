#ifndef LIVROS_H
#define LIVROS_H

typedef struct Livro
{
    /* data */
    char *nome;
    char *autor;
    int ano;
} livro;

int adicionarLivro( char *nome, char *autor, int ano);

#endif