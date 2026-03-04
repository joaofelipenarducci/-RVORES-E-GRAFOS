/* ================= QUESTÃO 1 =================
O HeapSort possui complexidade O(n log n) garantida em todos os casos
porque a estrutura heap é uma árvore binária completa, cuja altura
é sempre proporcional a log n. A construção da heap custa O(n) e
cada remoção da raiz custa O(log n). Como essa remoção ocorre n vezes,
o custo total é O(n log n). Já o ShellSort não possui complexidade
previsível, pois seu desempenho depende da sequência de gaps utilizada.
Dependendo da escolha desses intervalos, o tempo pode variar entre
O(n log n) e O(n²), não havendo garantia fixa.
*/

/* ================= QUESTÃO 2 =================
Dado o vetor [30, 12, 45, 6, 18, 3], ao construir o Max-Heap,
organizamos os elementos para que cada pai seja maior que seus filhos.
O Max-Heap correspondente fica representado no vetor como:

[45, 18, 30, 6, 12, 3]

Representação em forma de árvore:

        45
       /   \
     18     30
    /  \    /
   6   12  3

Após a primeira extração da raiz, removemos o 45,
colocamos o último elemento (3) na raiz e reorganizamos
a heap. O vetor resultante fica:

[30, 18, 3, 6, 12]
*/

/* ================= QUESTÃO 3 =================
A afirmativa I é falsa porque ShellSort não é estável.
A afirmativa II é verdadeira porque HeapSort utiliza
uma árvore binária completa.
A afirmativa III é falsa porque quem depende da sequência
de gaps é o ShellSort.
A afirmativa IV é verdadeira porque ShellSort é uma
melhoria do Insertion Sort.
Portanto, a alternativa correta é:
A) Apenas II e IV.
*/

/* ================= QUESTÃO 4 =================
Em um sistema que processa milhões de registros diariamente,
o HeapSort é mais indicado, pois possui complexidade garantida
O(n log n) e comportamento previsível, independentemente
da organização inicial dos dados.
*/

/* ================= QUESTÃO 5 =================
A estrutura Heap pode ser utilizada como fila de prioridade
em algoritmos de grafos. Um exemplo é o algoritmo de Dijkstra,
onde uma Min-Heap é usada para selecionar rapidamente o
vértice com a menor distância acumulada, tornando o
algoritmo mais eficiente.
*/