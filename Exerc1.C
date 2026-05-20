#include <stdio.h>

int main() {
   float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    
  for(i = 0; i < 9; i++){
      printf("Sua nota é:");
      scanf("%f", &notas[i]);
      printf("Sua frequencia é:");
      scanf("%f" , &frequencia);

      if(notas[i] >= 7 && frequencia >= 75){
          printf("aprovado\n");
          aprovados++;
      }
      else {
          printf("Reprovado");
          reprovados++;
          
      }
      
  }
    for(i = 0; i < 9; i++);{
      
      if(notas[i] , maiorNota){
          maiorNota += notas[i];
      }
      
}
      printf("\nAlunos aprovados: %d" , aprovados);
      printf("\nAlunos reprovados: %d", reprovados);
      printf("\nMaior nota: %d", maiorNota);
      
      
      

    return 0;
}
     
  
 
    
    
