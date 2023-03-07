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
int main() {
    int n, i;
    
    printf("Digite o número de caracteres: \n");
    scanf("%d", &n);
    
    int vet[n];
    
    for(i = 0 ; i < n ; i++){
        printf("Digite o caractere: \n");
        scanf("%d", &vet[i]);
    }
    
    int prod = 1;
    
    for(i = 0 ; i < n ; i++){
        prod *= vet[i];
    }
    
    int v[n];
    
    for(i = 0 ; i < n ; i++){
        v[i] = prod / vet[i];
        printf("%d\n", v[i]);
    }
    
    return 0;
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
    int vet[TAM];
    
    printf("Digite o número de caracteres: \n");
    scanf("%d", &n);
    
    for(i = 0 ; i < n ; i++){
        printf("Digite o caractere: \n");
        scanf("%d", &vet[i]);
    }
    
    for(i = n - 1 ; i <= 0 ; i--){
        printf("%d", vet[i]);
    }
    return 0;
}


/////////////
//Ex 9:


/////////////
//Ex 10:
