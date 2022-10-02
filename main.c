#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>


int main (){

// Nome de Usuario GitHub: AnthonyRibeiro10

// Apresentacao:

        printf("\n\t\t\t\tNome do Autor: Anthony Thiago da Cruz Ribeiro\n");
        printf("\t\t\t\tCursando: Analise e Desenvolvimento de Sistemas\n");
        printf("\t\t\t\tMatricula: 202220465\n");
        printf("\t\t\t\tUniversidade La Salle - Polo Sapucaia do Sul.\n");

// Peguei dicas em videos-aulas do canal "eXcript" no YOUTUBE.

// Somente a parte de potenciacao e de raiz quadrada que foi vista no canal do "GuiTec", também no YOUTUBE.

//VARIAVEIS
float num1, num2,raiz, resultado, resultadorq;
char op = '0';

do{

            printf("\n\n\t\t\t\t>>> Seja Bem-Vindo a Calculadora <<<");

    num1, num2, resultado = 0; // Resetando as Variaveis.

    // Opções da Calculadora:

    printf("\n\n\n\t\t> Digite (1) Para Somar. (Necessarios 2 valores para o resultado final) <\n");
    printf("\t\t> Digite (2) Para Subtrair. (Necessarios 2 valores para o resultado final.) <\n");
    printf("\t\t> Digite (3) Para Multiplicar. (Necessarios 2 valores para o resultado final.) <\n");
    printf("\t\t> Digite (4) Para Dividir. (Necessarios 2 valores para o resultado final.) <\n");
    printf("\t\t> Digite (5) Para Potencia. (Necessarios 2 valores para o resultado final.) <\n");
    printf("\t\t> Digite (6) Para Raiz Quadrada. (Necessario 1 valor para o resultado final.) <\n");
    printf(" \t\t> Digite (0) Para encerrar. <\n");

    printf("\n\t\t\tInforme a operacao que deseja realizar conforme o numero correspondente.\n\t\t>>> ");

    op = getche(); //Incluindo a biblioteca <conio.h> -> Nao sendo necessario pressionar o ENTER para selecionar as opções.

    if((op!='0'&&op<='5'))//Somente até a opcao 5. (Como se trata de raiz quadrada, não são necessarios digitar2 numeros...)
        {
    printf("\n\n\tDigite o primeiro valor: \n\t>>> ");
    scanf("\n\t\t%f", &num1);
    printf("\n\tDigite o segundo valor: \n\t>>> ");
    scanf("\n\t\t%f", &num2);

        if(op=='1'){ // Somar
            resultado = num1+num2;
        }else
            {if (op=='2'){ // Subtrair
        resultado = num1-num2;
        }else
                {if (op =='3'){ // Multiplicar
        resultado = num1*num2;
        }else
                    {if(op =='4'){ // Dividir
        resultado = num1/num2;
        }else
                        {if(op=='5'){ // Potenciacao
        resultado = pow(num1,num2);
        }
            }
                }
            }
        }
        printf("\n\t\tO resultado e = %f\n\n", resultado);
    }else{
    if (op=='6'){ // Raiz Quadrada
    printf("\n\n\tDigite o valor que deseja descobrir a raiz quadrada.\n\t\t>>> ");
        scanf("\n\t\t%f",&num1 );
        resultado = sqrt(num1);
        printf("\n\t\tO resultado = %f\n\n", resultado);
    }else{
        if(op>='6'){ // Definindo uma opcao caso o usuario digite uma opcao invalida de operacao.
            printf("\n\n\tOpcao invalida, tente novamente com as operacoes disponiveis.\n\n");
        }
     }
    }

    system("pause"); // Para prosseguir deve pressionar uma tecla.
    system("cls"); // Para limpar a tela.

} while (op !='0'); //Definindo o 0 como opção de saída.

        return 0;
}
