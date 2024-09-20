#include <stdio.h>

// Mostra os vetores criados
void mostrar(char* arr, int n){
  for (int i = 0; i < n; i++){
    printf("%c  ", arr[i]);
  }
  printf("\n");
}

void combinacoes(char* origem, char* destino, char* aux, int i, int n){
  if(i == n){
    mostrar(destino, n);
  }
  else{
    for(int j = 0; j < n; j++){
      if(aux[j] == '0'){
        // Verificação que pula repetições
        if (j > 0 && origem[j] == origem[j-1] && aux[j-1] == '0'){
          continue; 
        }
        destino[i] = origem[j];
        aux[j] = '1';
        combinacoes(origem, destino, aux, i+1, n);
        aux[j] = '0';
      }
    }
  }

}

int main(void){

  char origem[4] = {'A','A','A','B'}, destino[4] = {'0','0','0','0'}, aux[4] = {'0','0','0','0'};
  printf("Combinações possíveis: \n");
  combinacoes(origem, destino, aux, 0, 4);

  return 0;
}