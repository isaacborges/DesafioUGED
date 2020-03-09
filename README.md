# DesafioUGED

## Link do desafio escolhido

[Desafio do Maior Número](https://olimpiada.ic.unicamp.br/pratique/pj/2012/f1/maior/)

## Explicação da solução

1) Variável **numero** para receber a sequencia digitada pelo usuário e variável  **maiorNumero** iniciada com -1.

2) Como a solução é do tipo **EOF** (End of FIle), ou seja, ler a quantidade de inteiros dentro do intervalo especificado com o último número sendo 0, podemos colocar a entrada de dados dentro do **while** junto com o operador **&&** que verifica se a variável ainda é verdadeira, caso não for a entrada de dados é interrompida.

3) A condição **if** serve para verificar os números entrados pelo usuário. Dessa forma a variável "maiorNumero" sempre receberá o maior valor digitado pelo usuário no intervalo definido inicialmente.

4) Com a entrada de dados concluída, o programa imprime na tela o maior número digitado pelo usuário.

## Parâmetros da máquina local

- Sistema operacional Linux Mint
- Editor de texto padrão do sistema para escrita do código
- Linha de compilação utilizada para compilar o código com flags de warning:
  - ```shell 
    g++ -g -o prog -W -Wall -pedantic -ansi -I. MaiorNumero_DesafioEstagio.cpp -lm
    
## Imagens

Solução na maquina local com os casos de testes do site

![](https://i.imgur.com/tuoSFWc.png)

Solução submetida ao site

![](https://i.imgur.com/l64mEZw.png)
