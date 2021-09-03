#include <stdio.h>

int main (void){
    int nrOfRecords ;
    float grundPris = 9.90f,total;
    char val ='j';

    printf("\n\"Valkommen!\"\nHur manga skivor vill du kopa?");
    scanf("%d",&nrOfRecords);

    printf("Vill du kopa %d skivor?(j eller n):",nrOfRecords);
    scanf(" %c",&val);

    if (val == 'j')
    {
      if(nrOfRecords < 11)
      {
           total = grundPris * nrOfRecords;
           printf("%d skivor kommer kostar %.2fkr\n\n",nrOfRecords,total);
      }

      else if( nrOfRecords < 51)
      {
           total = 0.95 * grundPris * nrOfRecords;
           printf("%d skivor kommer kostar %.2fkr\n\n",nrOfRecords,total);
      }
      else if(nrOfRecords > 51)
      {
          total = nrOfRecords * grundPris *0.9;
          printf("%d skivor kommer kostar %.2fkr\n\n",nrOfRecords,total);
      }

     
    }
    else{
     printf("Okej Tack och valkommen ater igen.\n\n");
    }
    

   

   return 0;

}
