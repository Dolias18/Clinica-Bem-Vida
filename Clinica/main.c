#include <stdio.h> // entrada e saida
#include <stdlib.h>  //entrada e saida de dados
#include <string.h>  //cadeia de caracteres

//                     codigo     Valor
//sangue                100         60
//tomografia            101       374.99
//eletrocardiograma     102        200
//resonancia            103        890
//cintilografia         104        720
//glicemia              105         80
//urina                 106         60
//mamografia            107       158.99

//* inicio do bloco
int main(void)
{

    //* declarando variaveis
    char conf1, valor;
    int hora, soma, tot=1;
    float ctotal;

    //* Declarando a struct
    struct ficha_pac
    {
        char email[50], nome[10];
        int celular[10], cpf[10];
    };

    struct ficha_pac pc;

    //* criando variavel para o arquivo txt
    FILE *DB;
    char palavra[20];


    //* Tela de apresentação

    printf("        ---------------------------------------------------------------   \n");
    printf("                        C L I N I C A   B E M   V I D A                   \n");
    printf("        ---------------------------------------------------------------   \n");

    //* Criação da pasta em .txt
    DB = fopen("dados_paciente.txt", "a");

    //* Caso apresentar Erro na criação do arquivo
    if(DB == NULL)
    {
        printf("erro Ao Salvar");
        return 1;
    }

    //* se for criado com sucesso
    else
    {
        printf("\n\n");
        printf("Nome: ");
        scanf("%s", &pc.nome);
        system("cls");

        //* Area dos dados do paciente
        printf("------------------------- \n");
        printf("    ACESSO AO PACIENTE    \n");
        printf("-------------------------\n\n");

        printf("Seja Bem vindo %s", pc.nome);
        printf("\n\n");

        printf("-------------\n");
        printf("Email: \n");
        scanf("%s", &pc.email);

        printf("------------\n");
        printf("CPF: \n");
        scanf("%i", &pc.cpf);

        printf("-------------------\n");
        printf("Numero celular: \n");
        scanf("%i", &pc.celular);
        system("cls");

        //* Gravação dos dados no arquivo
        fprintf(DB, "\nNome:\n%s \nEmail:\n %s \nCPF:\n %i \nNumero Celular:\n %i", pc.nome, pc.email, pc.cpf, pc.celular);
        fprintf(DB, "\n----------------------\n");
        fclose(DB);
    }

    //* Menu 1
    printf("        ---------------------------------------------------------------   \n");
    printf("                        C L I N I C A   B E M   V I D A                   \n");
    printf("        ---------------------------------------------------------------   \n");

    printf("(1) Excluir dados \n");
    printf("\n\n");
    printf("(2) Agendar exames \n");
    printf("\n\n");
    printf("(3) Calcular orcamento \n");
    scanf("%d", &valor);
    system("cls");


    switch(valor)
    {
    case 1:
        printf("Entre na pasta (\PIM clinica) entre no \narquivo texto (dados_paciente.txt) e apague seus dados.");
        printf("\n");
        break;

//* ------------------------------    Agendamento     --------------------------------- *//

    case 2:
        printf("                ---------------------------------------------------\n");
        printf("                                     AGENDAMENTO             \n");
        printf("                ---------------------------------------------------\n");
        printf("\n\n");
        printf("(13) Marcar as 13:30\n");
        printf("------------------------------\n");
        printf("(15) Marcar as 15:30\n");
        printf("------------------------------\n");
        printf("(17) Marcar as 17:30\n");

        printf("\n\n");
        printf("Informe a hora: ");
        scanf("%d", &valor);

    case 13:
        printf("Confirme o Horario: ");
        scanf("%s", &conf1);
        printf("Marcado para 13:30, Obrigado por entrar em contato conosco !!");
        printf("\n\n");
        return 0;
        break;

    case 15:
        printf("Confirme o Horario: ");
        scanf("%s", &conf1);
        printf("\n\n");
        printf("Marcado para 15:00, obrigado por entrar em contato conosco !!");
        printf("\n\n");
        return 0;
        break;

    case 17:
        printf("Confirme o horario: ");
        scanf("%s", &conf1);
        printf("\n\n");
        printf("Marcado para 17:30, obrigado por entrar em contato conosco !!");
        printf("\n\n");
        return 0;
        break;

//* -----------------------------------------   Orçamento dos exames ----------------------------------------- *//
    //* Tabela de valores
    case 3:
        system("cls");
        printf("(100)Exame De sangue simples R$60,00                 105)cintilografia R$720,00\n");
        printf("--------------------------------------             ----------------------------\n");
        printf("\n\n");
        printf("(102)Tomografia cerebral R$374,90         (106)Exame de sangue glicemia R$80,00\n");
        printf("-----------------------------------      --------------------------------------\n");
        printf("\n\n");
        printf("(103)Eletrocardiograma R$200,00                     (107)Exame de urina R$60,00\n");
        printf("---------------------------------                  ----------------------------\n");
        printf("\n\n");
        printf("(104)ressonancia magnetica R$890,00                    (108)Mamografia R$158,99\n");
        printf("-------------------------------------                 -------------------------\n");
        printf("\n\n");

        //* adicionando a função de repetição para um carrinho de compras
        while(tot!=0)
        {
            printf("Digite o Codigo De Exame: ");
            scanf("%d",&tot);

            //* Função para selecionar o exame de acordo com seu codigo descrito acima
            switch(tot)
            {
            case 100:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(60.00);
                printf("\n\n");
                break;

            case 102:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(374.90);
                printf("\n\n");
                break;

            case 103:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(200.00);
                printf("\n\n");
                break;

            case 104:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(890.00);
                printf("\n\n");
                break;

            case 105:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(720.00);
                printf("\n\n");
                break;

            case 106:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(80.00);
                printf("\n\n");
                break;

            case 107:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(60.00);
                printf("\n\n");
                break;

            case 108:
                printf("Adicionado ao carrinho !!\n");
                ctotal=ctotal+(158.99);
                printf("\n\n");
                break;

            //* Finalizando, com o total do valor selecionado logo acima
            default:
                printf("\n-------------------------------------");
                printf("\nValor total dos exames R$%.2f",ctotal);
                printf("\n-------------------------------------");
                tot=0;
                break;
            }
        }
    }
return 0;
}
