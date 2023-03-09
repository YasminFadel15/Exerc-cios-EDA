//Ex 1:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Digite o tamanho do vetor: \n");
	scanf("%d", &n);
	int v[n];
	for(int i = 0 ; i < n ; i++){
		printf("Digite v[%d]: \n", i+1);
		scanf("%d", &v[i]);
	}
	
	int k;
	printf("Digite k: \n");
	scanf("%d", &k);

	for(int z = 0 ; z < n ; z++){
		for(int j = 0 ; j < n ; j++){
			if(v[z] + v[j] == k)
				printf("Verdadeiro.");
			else
			    printf("Falso.");
		}
	}
    return 0;
}

//////////
//Ex 2:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,k;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    int r[n];

    int mult = 1;
    
    for (int i = 0; i < n; i++) {
        printf("Informe o número %d do vetor: ", i + 1);
        scanf("%d", &v[i]);
        mult *= v[i];
    }

    printf("[ ");
    for (int i = 0; i < n; i++) {
        r[i] = mult / v[i];

        printf("%d ", r[i]);
    }
    printf("]\n");
}

////////// 
//Ex 3:
#include <stdio.h>
int main() {
  int x;
  printf("Digite um numero: ");
  scanf("%d", &x);
  
  int primo = 0;
  for(int i = 2 ; i <= x / 2 ; i++){
      if (x % i == 0){
        primo++;
        break;
      }
  }
  
  if (primo == 0)
    printf("Sim.");
  else
    printf("Não.");
    
return 0;
}

////////////
// Ex 4:
#include <stdio.h>
int main() {
  int ordem;
  printf("Entre com a ordem da matriz: \n");
  scanf("%d", &ordem);
  
  int m, n;
  printf("Entre com o n° de linhas: \n");
  scanf("%d", &m);
  printf("Entre com o n° de colunas: \n");
  scanf("%d", &n);
  
  int matriz[m][n];
  for(int i = 0 ; i < m ; i++){
      for(int j = 0 ; j < n ; j++){
          printf("Entre com o elemento [%d][%d]: \n", i+1, j+1);
          scanf("%d", &matriz[i][j]);
      }
  }
  
  int princ = 0, sec = 0;
  for(int i = 0 ; i < m ; i++){
      for(int j = 0 ; j < n ; j++){
        if(i == j)
            princ = princ + matriz[i][j];
        if(i + j == ordem - 1)
            sec = sec + matriz[i][j];
      }
  }
  
  printf("Matriz principal = %d\nMatriz secundaria = %d ", princ, sec);
return 0;
}

/////////////
//Ex 5:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 100

void aplic_rle(char entrada[], char saida[]){
    int tamanho = strlen(entrada);
    int i, j = 0, cont = 1;
    char atual = entrada[0];
    
    for(i = 0 ; i < tamanho ; i++){
        if(entrada[i] == atual){
            cont++;
        } else {
            saida[j++] = cont + '0';
            saida[j++] = atual;
            cont = 1;
            atual = entrada[i];
        }
    }
    
    saida[j++] = cont + '0';
    saida[j++] = atual;
    saida[j] = '\0';
}

int main(){
    char entrada[TAM_MAX];
    char saida[TAM_MAX];
    int n, i;
    
    printf("Digite o número de caracteres: \n");
    scanf("%d", &n);
    
    for(i = 0 ; i < n ; i++){
        printf("Digite o caractere: \n");
        scanf(" %c", &entrada[i]);
    }
    
    aplic_rle(entrada, saida);
    
    printf("Entrada original: %s\n", entrada);
    printf("Saida: %s\n", saida);
    
    return 0;
}

/////////////
//Ex 6:
#include <stdio.h>
int main() {
  int x, y;
  printf("Entre com x e y: \n");
  scanf("%d %d", &x, &y);
  
  int soma = 0;
  
  for(int i = 0 ; i < y ; i++)
   soma = soma + x;

  printf("%d", soma);
  
  return 0;
}

/////////////
//Ex 7:
#include <stdio.h>
int main() {
    int num, a = 0, b = 1, c;
    printf("Qual o número do termo da sequência? ");
    scanf("%d", &num);
    
    for(int i = 1 ; i < num ; i++){
        c = a + b;
        a = b;
        b = c;
    }
    
    printf("O termo é %d.", b);
    
    return 0;
}

/////////////
//Ex 8:
#include <stdio.h>
#define TAM 100

int main() {
    int n, i;
    char vet[TAM];
    
    printf("Digite o número de caracteres: \n");
    scanf("%d", &n);
    
    for(i = 0 ; i < n ; i++){
        printf("Digite o caractere: \n");
        scanf(" %c", &vet[i]);
    }
    
    printf("Cadeia de caracteres original: %s\n", vet);
    printf("Cadeia de caracteres invertida: ");
    
    for(i = n - 1 ; i >= 0 ; i--){
        printf("%c", vet[i]);
    }
    printf("\n");
    
    return 0;
}

/////////////
//Ex 9:
#include <stdio.h>
#include <stdbool.h>
#define TAM 100


int main() {
    int n, i;
    char vet[TAM], r1[TAM], r2[TAM];
    
    printf("Digite o número de caracteres: \n");
    scanf("%d", &n);
    
    for(i = 0 ; i < n ; i++){
        printf("Digite o caractere: \n");
        scanf(" %c", &vet[i]);
        r1[i] = vet[i];
    }
    
    for(i = n - 1 ; i >= 0 ; i--){
        r2[i] = vet[i];
    }
    
    int resultado;
    
    for(i = 0 ; i < n ; i++){
        if(r1[i] != r2[i]){
            resultado = 1;
            break;
        } else
            resultado = 0;
    }
    
    if(resultado == 0)
        printf("Verdadeiro.");
    else
        printf("Falso.");
    
    return 0;
}

