#include <stdio.h>
#include <stdlib.h>

// Função para obter o tamanho do arquivo
long get_file_size(FILE *file) {
    fseek(file, 0L, SEEK_END);
    long size = ftell(file);
    fseek(file, 0L, SEEK_SET);
    return size;
}

int main() {
    // Nome do arquivo da Bíblia em formato de texto
    const char *filename = "bible.txt";

    // Abre o arquivo em modo leitura
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Obtém o tamanho do arquivo
    long file_size = get_file_size(file);
    printf("Tamanho do arquivo: %ld bytes\n", file_size);

    // Aloca memória suficiente para armazenar todo o conteúdo do arquivo
    char *bible_content = (char *)malloc(file_size + 1); // +1 para o terminador nulo
    if (bible_content == NULL) {
        perror("Erro ao alocar memória");
        fclose(file);
        return 1;
    }

    // Lê o conteúdo do arquivo para a memória alocada
    fread(bible_content, 1, file_size, file);
    bible_content[file_size] = '\0'; // Adiciona o terminador nulo

    // Exibe o início do conteúdo (para evitar imprimir tudo de uma vez)
    /*printf("Início do conteúdo da Bíblia:\n");
    printf("%.1000s\n", bible_content); // Mostra os primeiros 1000 caracteres
    */

    // Exibe todo o conteúdo da Bíblia
    printf("Conteúdo completo da Bíblia:\n");
    printf("%s\n", bible_content); // Mostra todo o conteúdo

    // Fecha o arquivo
    fclose(file);

    // Libera a memória alocada
    free(bible_content);

    return 0;
}