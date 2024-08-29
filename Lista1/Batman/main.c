/*
* Programa: batman.c
* Descrição: pergunta sobre a identidade do batman
* Autor: Lucas Lemos
* Data de criação: 28/08/2024
* Última modificação: 28/08/2024
*
* Observações:
* - [Qualquer detalhe adicional ou dica importante.]
*/

char main()
{
    char resposta;
    char respostaCerta = 'a';
    
    printf("Qual é o verdadeiro nome do super-herói Batman? \n\n");
    
    printf("a) Bruce Wayne\n");
    printf("b) Clark Kent\n");
    printf("c) Peter Parker\n");
    printf("d) Tony Stark\n");
    printf("e) Steve Rogers\n\n");
    
    printf("Qual sua resposta? ");
    scanf("%c", &resposta);
    
    if (resposta == respostaCerta){
        printf("Você acertou!!!");
       
    } else {
         printf("Você respondeu alternativa %c. A resposta correta é a alternativa a", resposta);
        
    }
   
}