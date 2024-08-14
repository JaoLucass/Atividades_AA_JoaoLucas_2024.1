# Leitor de Bíblia em C

Este projeto é um simples programa em C que lê o conteúdo de um arquivo de texto da Bíblia (`bible.txt`) e exibe todo o seu conteúdo no terminal. O código faz uso de funções básicas de manipulação de arquivos e alocação de memória dinâmica.

## Funcionalidades

- Lê um arquivo de texto (`bible.txt`) que contém a Bíblia.
- Aloca dinamicamente memória suficiente para armazenar todo o conteúdo do arquivo.
- Exibe o conteúdo completo da Bíblia no terminal.

## Requisitos

- Compilador C (como GCC)
- Um arquivo de texto da Bíblia (`bible.txt`) no mesmo diretório do código-fonte.

## Compilação e Execução

### Passo 1: Compilar o Código

Abra um terminal e navegue até o diretório onde o código-fonte está localizado. Compile o código com o seguinte comando:

```bash
gcc read_bible.c -o read_bible

### Passo 2: Executar o Programa

Após a compilação, execute o programa com o seguinte comando:

```bash
./read_bible

### Redirecionar a Saída (Opcional)

Se o conteúdo da Bíblia for muito extenso para o seu terminal, você pode redirecionar a saída para um arquivo:

```bash
./read_bible > output.txt
