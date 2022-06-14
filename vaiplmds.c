#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 typedef struct lista{
     char nome[40];
     char endereco[40];
  unsigned long int codigo;
     struct lista* prox;
   }Lista;

   //Declaração de funções.
   Lista* inserir_restaurantes(Lista* primeiro);
   void listar_restaurantes(Lista* primeiro);
   Lista* excluir_restaurantes(Lista* primeiro);
   void alterar_restaurantes(Lista* primeiro);

int main()
{
   //Declaração de variáveis
   Lista *primeiro= NULL;
   char opcao;

   //Artifício para repetir o programa.
   while(opcao!='s')
   {
     //Menu de opcoes
      printf(" %c----------------------------------------------------------------------------%c\n",201,187);
      printf(" | ");printf("\t\t\t   HOT DOGUERIA  GOURMET ");printf("\t\t\t      |\n");
     printf(" %c----------------------------------------------------------------------------%c\n",200,188);
    printf("\t       %c-----------%c\t\t\t\t      \n ",201,187);
      printf("\t\t|   MENU   ");printf("|\t\t\t\t      \n");
      printf("   %c-----------%c----------%c------------%c \n",201,200,188,187);
      printf("   | <H>  Como Utilizar                |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <A>  Novo CADASTRO                |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <P>  Novo PEDIDO                  |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <L>  Listar PEDIDO                |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <X>  Excluir PEDIDO               |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <T>  Alterar PEDIDO               |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <B>  Listar CADASTRO              |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <C>  Excluir CADASTRO             |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <D>  Alterar CADASTRO             |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <S>  Sair                         |\n");
      printf("   %c-----------------------------------%c",200,188);
      printf("\n\n\n\n");
  

      //Lendo a opcao do menu
      fflush(stdin);
      opcao= getchar();

      //Menu de opcoes
      switch(opcao)
      {
        
         case 'H':
         case 'h':
         printf("\013");
         printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t           MODO AJUDA       \n");
              printf(" %c----------------------------------------------------------------------------%c\n\n\n",200,188);
              printf(" | ");printf("\t\tEscolha sua opcao desejada da lista \n");
              printf(" %c----------------------------------------------------------------------------%c\n\n\n",200,188);
              printf("\tSeu menu funciona com letras-chaves de selecao \n");
              printf("\tBasta escolher a opcao desejada digitando a Letra que esta dentro do <> \n");
              printf("\tEm seguida pressione ENTER para acessar a opcao escolhida \n");
              printf(" %c----------------------------------------------------------------------------%c\n\n\n",200,188);
        
        printf("\n\n \t TENTE AGORA MESMO NO MENU PRINCIPAL.\n");
        getchar();
        
        
         break;
         
         case 'A':
         case 'a':
              //Inserindo os clientes.
              printf("\033[H\033[J");
             
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t          NOVO CADASTRO     ");printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);
              primeiro= inserir_restaurantes(primeiro);
         getchar();
        printf("\033[H\033[J");
         break;

         case 'B':
         case 'b':
              //Listando os clientes.
             printf("\033[H\033[J");
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t     CLIENTES CADASTRADOS");printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);
              listar_restaurantes(primeiro);
         getchar();
        printf("\033[H\033[J");
         break;

         case 'C':
         case 'c':
              //Excluindo restaurantes da lista.
             printf("\033[H\033[J");
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t        EXCLUIR CADASTROS");printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);
              primeiro= excluir_restaurantes(primeiro);
         getchar();
        printf("\033[H\033[J");
         break;

         case 'D':
         case 'd':
              //Alterando restaurantes da lista.
          printf("\033[H\033[J");
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t       ALTERAR CADASTRADOS");printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);
              alterar_restaurantes(primeiro);
         getchar();
                printf("\033[H\033[J");
         break;
         
          case 'P':
         case 'p':
              //Inserindo os clientes.
              printf("\033[H\033[J");
             
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t          NOVO PEDIDO     ");printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);
              primeiro= inserir_restaurantes(primeiro);
         getchar();
        printf("\033[H\033[J");
         break;
         
          case 'L':
         case 'l':
              //Inserindo os clientes.
              printf("\033[H\033[J");
             
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t          LISTAR PEDIDOS     ");printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);
              primeiro= inserir_restaurantes(primeiro);
         getchar();
        printf("\033[H\033[J");
         break;
         
          case 'X':
         case 'x':
              //Inserindo os clientes.
              printf("\033[H\033[J");
             
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t          EXCLUIR PEDIDO     ");printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);
              primeiro= inserir_restaurantes(primeiro);
         getchar();
        printf("\033[H\033[J");
         break;

         case 'S':
         case 's':
              //Artifício para sair do programa.
              opcao='s';
         break;

         default:
              //Artifício que previne a situação de um usuário qualquer, digitar uma opcão inexistente no menu.
                 printf("\033[H\033[J");
         break;
         
      }
   }
}

Lista* inserir_restaurantes (Lista *primeiro){
     Lista restaurante;
     Lista *atual= primeiro;
     char identificador= 'F';

     //Lendo as informações do restaurante.
     printf("  Nome: ");
     fflush (stdin); fgets(restaurante.nome, 40, stdin); printf ("\n");
     fflush (stdin); fgets(restaurante.nome, 40, stdin); printf ("\n");
     printf("  Mesa: ");
     fflush (stdin); fgets(restaurante.endereco, 40, stdin); printf ("\n");
     printf("  C%cdigo: ",162);
     scanf("%lu",&restaurante.codigo);printf ("\n");

     //Verificando se o cadastro já existe.
     for(atual=primeiro; atual!=NULL; atual=atual->prox){
        if(atual->codigo==restaurante.codigo){
            identificador= 'V';
            break;
        }
     }

     if(identificador!='V' && (strlen(restaurante.nome)!=1 && strlen(restaurante.endereco)!=1)){
         //Alocando os espaços e guardando as informações do restaurante.
         Lista* NovoRestaurante=(Lista*) malloc (sizeof(Lista));
         strcpy(NovoRestaurante->nome, restaurante.nome);
         strcpy(NovoRestaurante->endereco, restaurante.endereco);
         NovoRestaurante->codigo= restaurante.codigo;
         NovoRestaurante->prox= primeiro;
         printf("  Cadastro realizado com sucesso.");
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.\n");
         return NovoRestaurante;
     }else{
         printf("  Cadastro inv%clido.",160);
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.\n");
         return primeiro;
     }
}

void listar_restaurantes (Lista* primeiro){
     Lista* atual;//Ponteiro para percorrer a lista sem perder a referência do primeiro elemento da lista.

     //Imprimindo os clientes da lista, e suas repectivas informações.
     for(atual= primeiro ; atual!= NULL; atual= atual->prox){
        printf("\n  Nome: ");
        printf("%s", atual->nome);
        printf("\n  Mesa: ");
        printf("%s", atual->endereco);
        printf("\n  C%cdigo: ",162 );
        printf("%lu", atual->codigo);
        printf("\n\n");
     }
     if(primeiro==NULL)
        printf("  Nenhum cliente cadastrado.\n");
     printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.\n");
}

Lista* excluir_restaurantes(Lista *primeiro){

     Lista *anterior= NULL;//Ponteiro para saber o elemento anterior ao elemento atual da lista.
     Lista *atual= primeiro;//Ponteiro para percorrer a lista sem perder o primeiro elemento da lista.
     unsigned long int codigo=0;

     //Requisitando e lendo o código do cliente a ser excluído.
     printf("  C%cdigo do cliente a ser exclu%cdo: ", 162,161);
     fflush(stdin);
     scanf("%lu",&codigo);

     //Procurando o cliente na lista.
     while(atual!= NULL && atual->codigo!=codigo){
        anterior= atual;
        atual= atual->prox;
     }

     //Mensagem caso o cliente não seja encontrado.
     if(atual==NULL){
        printf("\n  Cliente n%co encontrado.", 198);
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
        return primeiro;
     }

     //Excluindo o primeiro cliente da lista.
     if(anterior==NULL){
        printf("\n  Conte%cdo exclu%cdo com sucesso.", 163,161);
        primeiro= atual->prox;
     //Excluindo um cliente do meio da lista.
     }else{
        printf("\n  Conte%cdo exclu%cdo com sucesso.", 163,161);
        anterior->prox= atual->prox;
     }

     //Desalocando o espaço da memória.
     free(atual);
     printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
     return primeiro;
}

//Função para alterar cliente.
void alterar_restaurantes(Lista* primeiro){
     char nome_substituto[40], endereco_substituto[40];
     unsigned long int codigo;
     Lista* atual=primeiro;

     //Requisitando e lendo o código do cliente a ser alterado.
     printf("  C%cdigo do cliente a ser alterado: ", 162);
     fflush(stdin);
     scanf("%lu",&codigo);

     //Procurando o restaurante na lista.
     while(atual!= NULL && atual->codigo!=codigo){
        atual= atual->prox;
     }

     //Alterando os dados do restaurante.
     if(atual!=NULL){
        printf("\n  Novo nome: ");
        fflush (stdin); fgets(nome_substituto, 40, stdin);
        strcpy(atual->nome,nome_substituto);
        printf("\n  Nova Mesa: ");
        fflush (stdin); fgets(endereco_substituto, 40, stdin); printf ("\n");
        strcpy(atual->endereco,endereco_substituto);
        printf("  Dados alterados com sucesso.");
     }else{
        printf("\n  Cliente n%co encontrado.",198);
     }
     printf("\n\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
}
