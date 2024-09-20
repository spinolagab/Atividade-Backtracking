## Atividade exigida
Considere uma partida de futebol entre duas equipes A × B, cujo placar final é m × n, em que m e n são número de gols marcados por A e B, respectivamente. Escreva um algoritmo recursivo que imprima todas as possíveis sucessões de gols marcados. Por exemplo, para um placar final de 3 × 1, as possíveis sucessões de gols são “AAAB”, “AABA”, “ABAA” e “BAAA”.

## Solução apresentada
Criei 2 funções, 1 delas sendo apenas para apresentar os vetores criados e a outra sendo o processo de backtracking em si.
\
Para fazer essa função foram precisos:
- Array (char) de origem contendo os dados dos gols (3 do time A e 1 do B)
- Array (char) de destino que receberá os dados da origem
- Array auxiliar para verificar se uma posição já foi testada (decidi manter em char mesmo por ocupar apenas 1 byte, mas pode ser muito bem um valor int)
- 2 inteiros, sendo eles 0 (i) e o total de gols feitos (n = 4 nesse caso) para saber qual será o range trabalhado
O array auxiliar é marcado onde houve alguma modificação no vetor de destino para que os valores não fossem pegos da mesma posição
\
i é incrementado nas chamadas recursivas para que o vetor de destino não tenha sobreposições e atinja a condição de parada da recursão (i == n).
\
No final a função tem um tempo de execução de O(n!) pois está gerando todas as combinações possíveis dentro daquele vetor; fiz uma verificação de valores repetidos para que não aparecessem todas as 24 permutações possíveis, mas apenas aquelas que são diferentes umas das outras.
