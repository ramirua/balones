/*balones*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int cantidad_total=0, rechazado=0, balonf=0;
	float cae, rebote,porcentaje;
	char codigo[4], resp;
	
	printf("\n hay balones para ser evaluados S/N: \n");
  resp=tolower(getch());
	
	while(resp=='s')
	{
		cantidad_total+=1;
		printf("\n Ingrese el codigo del balon: ");
		fflush(stdin);
	    gets(codigo);
		printf(" Altura que se deja caer en metros: ");
		scanf("%f",&cae);
		printf(" Altura de rebote en centimetros: ");
		scanf("%f",&rebote);
		
		if(cae<1 && rebote>=35 && rebote<=55)
		{
			printf("\n\t El balon fue ACEPTADO\n");
		}
		else 
		{
	    	if(cae>1 && rebote>58 && rebote<74)
		   {
			 printf("\n\t El balon fue ACEPTADO\n");
			 
		   }
		   	else
			  {
		   		printf("\n\t El balon fue RECHAZADO\n");
		   		rechazado+=1;
		   	 }
		       
		}
        
        if(cae>1 && rebote==66)
        {
        	balonf+=1;
        	printf("\n\t\t El balon %s fue ACEPTADO para la final \n",codigo);
        }
           porcentaje=(rechazado*100)/cantidad_total;
		 	printf("\n hay balones para ser evaluados S/N: ");
            resp=tolower(getch());
	}
	
				printf("\n Porcentaje de balones rechazados %.2f%%", porcentaje);
				printf("\n La cantidad de balones aceptado para la final es: %d",balonf);
	return 0;
}
