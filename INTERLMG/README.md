# 11085. Interligando a Sildávia
# Problema: INTERLMG

Uma das grandes vantagens da Internet é que ela permite comunicação em longa distância a custo baixíssimo. De fato, é provável que a maioria dos serviços que você acessa via Internet sejam providos por servidores a milhares de quilômetros da sua casa.

Os habitantes da Sildávia, porém, são estranhos. Eles não gostam de se comunicar com o restante do mundo, e limitam essas comunicações ao mínimo necessário. Na verdade, eles nem gostam muito de se comunicar com o restante do país: preferem estar em contato apenas com os seus vizinhos mais próximos, tanto quanto for possível.

O governo do país resolveu levar isso em conta na hora de projetar a nova rede de fibra ótica que interligará todas as cidades. Será escolhida uma distância `d` e para todo par de cidades tal que a distância entre elas é menor ou igual a `d` construir-se-á um canal de fibra ótica direto entre essas cidades.

Se `d` for muito grande, toda cidade será ligada diretamente a toda outra cidade, o que é caro. Se `d` for muito pequeno, porém, podem haver pares de cidades que não conseguem se comunicar nem de forma indireta (passando por outras cidades intermediárias) --- e, por mais que os Sildavianos não gostem de se comunicar com pessoas distantes, às vezes isso é necessário. Sua tarefa é escolher o menor valor possível para `d` tal que entre qualquer par de cidades haja um caminho de comunicação direto ou indireto entre elas.

## Observações
A distância entre duas cidades `c1` e `c2` de coordenadas `(x1, y1)` e `(x2, y2)` é dada por `dist(c1, c2)` = `sqrt((x1-x2)^2 + (y1-y2)^2)`

## Entrada

A entrada contém múltiplos casos de teste. A primeira linha de cada caso de teste contém um inteiro `N (1 ≤ N ≤ 1000)`, o número de cidades. Em seguida, há `N` linhas, uma para cada cidade. Cada uma dessas linhas contém dois números de ponto flutuante, respectivamente as coordenadas `x` e `y` daquela cidade `-104 ≤ x, y ≤ 104`.

A entrada termina com `N=0`, que não deve ser processado.

## Saída
Para cada caso de teste, imprima o menor valor para `d` que garante que há caminho entre qualquer par de cidades, com 4 casas decimais de precisão.
