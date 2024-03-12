# Linguagem_C_Projects
Este programa primeiro solicita ao usuário a quantidade de troco devida e verifica se é um valor não negativo. 
Em seguida, converte esse valor de dólares para centavos e calcula o número mínimo de moedas necessárias 
para representar esse valor de troco. Finalmente, imprime o número mínimo de moedas necessárias.
Implemente, em um arquivo chamado cash.c em um diretório ~/pset1/cash, um programa que primeiro pergunta ao usuário quanto dinheiro é devido e depois imprime o número mínimo de moedas com as quais essa mudança pode ser feita.

Use get_float para obter a entrada do usuário e printf para gerar sua resposta. Suponha que as únicas moedas disponíveis sejam de 25, 10, 5 e 1 centavo(s).

Pedimos que você use get_float para que possa lidar com reais e centavos, embora sem o cifrão. Em outras palavras, se algum cliente deve R$9.75 (como no caso em que um jornal custa 25 centavos, mas o cliente paga com uma nota de R$10), suponha que a entrada de seu programa será de 9.75 e não de R$9.75 ou 975 . No entanto, se algum cliente deve exatamente R$9, suponha que a entrada de seu programa será 9.00 ou apenas 9, mas, novamente, não R$9 ou 900 . É claro que, pela natureza dos valores de ponto flutuante, seu programa provavelmente funcionará com entradas como 9.0 e 9.000 também; você não precisa se preocupar em verificar se a entrada do usuário está “formatada” como o dinheiro deveria estar.

Você não precisa tentar verificar se a entrada de um usuário é muito grande para caber em um float. Usar get_float sozinho garantirá que a entrada do usuário seja realmente um valor de ponto flutuante (ou integral), mas não que seja não negativo.

Se o usuário não fornecer um valor não negativo, seu programa deve solicitar novamente ao usuário uma quantia válida até que o usuário concorde.

Para que possamos automatizar alguns testes do seu código, certifique-se de que a última linha de outpt do seu programa seja apenas o número mínimo de moedas possível: um inteiro seguido por \n.

Cuidado com a imprecisão inerente aos valores de ponto flutuante. Lembre do floats.c da aula, em que, se x é 2 , e y é 10 , x / y não é precisamente dois décimos! E assim, antes de fazer a alteração, você provavelmente desejará converter os dólares inseridos pelo usuário em centavos (ou seja, de um float para um int) para evitar pequenos erros que poderiam se acumular!

Tome cuidado para arredondar seus centavos até o último centavo mais próximo, por exemplo usando o round, que é declarado na math.h. Por exemplo, se o real é um float com input do usuário (por exemplo, 0.20 ), então uma linha como:

int centavos = round(reais * 100);

irá converter com segurança 0.20 (ou mesmo 0.2000002980232238769531250 ) em 20.

Utilize o ponto final ao invés de vírgula!!

Seu programa deve se comportar de acordo com os exemplos abaixo.

$ ./cash
Troca devida: 0.41
4

 

$ ./cash
Troca devida: -0.41
Troca devida: foo
Troca devida: 0.41
4
