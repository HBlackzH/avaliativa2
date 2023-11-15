#include <stdio.h>

char Classifica(float salario){
    char acima , igual, abaixo;

    if (salario>1400){
        return 'A' ;
    }else if(salario<1400){
        return 'B' ;
    }else{
        return 'I';
    }
}
void mostraClassifica(char Classifica , float salario , char sexo ){
    int pessoasAcima;
    int pessoasAbaixo;
    
    printf("\nSalario é : R$ %.4f",salario);
    switch (Classifica)
    {
    case 'A':
        printf("\nAcima");
        pessoasAcima++;
        break;
    case 'B':
        printf("\nAbaixo");
        pessoasAbaixo++;
        break;
    case 'I':
        printf("\nIgual");
        break;
    
    default:
        break;
    }
    if (sexo == 'M'){
        printf("\nMasculino");
    }else{
        printf("\nFeminino");
    }
    
}

void pessoas(int pessoasAcima, int pessoasAbaixo ){
    
    printf("\nPessoas acima do salário minimo : %d" , pessoasAcima);
    printf("\nPessoas abaixo do salário minimo : %d" , pessoasAbaixo);
}

int main(){
    char sexo;
    float salario; 
    int saida , pessoasAcima = 0 , pessoasAbaixo = 0;

    do{
        printf("Digite seu Sexo : M / F ");
        scanf("%c", &sexo);
        fflush(stdin);
        printf("\nDigite o valor do seu salário:");
        scanf("%f", &salario);
        fflush(stdin);

        char classificar = Classifica(salario);

        mostraClassifica(classificar , salario , sexo);

        if (classificar == 'A') {
            pessoasAcima++;
        } else if (classificar == 'B') {
            pessoasAbaixo++;
        }
        
        printf ("\nDeseja adicionar mais um cadastro ? 1 - Sim / 2 - Nao");
        scanf("\n%d", &saida);
        fflush(stdin);

    } while (saida != 2);
    

    pessoas(pessoasAcima , pessoasAbaixo);

return 0 ;
}   
