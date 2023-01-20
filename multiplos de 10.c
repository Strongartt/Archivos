#include <stdio.h>
int main(){
    FILE *programa=NULL;
    FILE *programa2=NULL;
     int a;
    programa=fopen("vector.txt","r");
    programa2=fopen("final.txt", "w");
    if (programa==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    int cont=1;
    while(!feof(programa)){
        fscanf(programa, "%d", &a); 
        if(a% 10==0 ){ 
        fprintf(programa2, "a\n");
        }else{
            fprintf(programa2, "%d \n", a);
        }
        cont++;
   
    }
      fclose(programa);
      fclose(programa2);
     return 0;
    

      
    }