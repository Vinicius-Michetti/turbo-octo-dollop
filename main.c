#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Peça ao usuário que crie uma senha. Utilize vetores para armazenar a senha. Valide se a senha
atende aos critérios de segurança, como ter pelo menos 8 caracteres, conter pelo menos uma
letra maiúscula, uma letra minúscula, um número e um caractere especial. Imprima se a senha
é válida ou não.
*/

int main()
{
    char senha[50];
    char numero[] = {'0','1','2','3','4','5','6','7','8','9'};
    char letra_minuscula[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','w'};
    char letra_maiscula[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','W'};
    int qtd_numero, qtd_minuscula, qtd_maiscula;

    printf("Crie uma senha: ");
    fgets(senha, 50, stdin);
    fflush(stdin);

    for (int i = 0; i < strlen(senha); i++){
        for (int j = 0, k = 0; j < 10, k < 26; j++, k++){
            if (senha[i] == numero[j]){
               qtd_numero++;
            }
            if (senha[i] == letra_maiscula[j]){
               qtd_maiscula++;
            }
            if (senha[i] == letra_minuscula[j]){
               qtd_minuscula++;
            }
        }
    }

    if (strlen(senha) > 8 && qtd_numero > 0 && qtd_maiscula > 0 && qtd_minuscula > 0){
        printf("Senha Valida");
    }
    else {
        printf("Senha Invalida");
    }
}
