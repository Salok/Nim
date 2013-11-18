#include <stdio.h>
int lineas;
int *init(){
	int palos_l;
	bool random_init;
    puts("Desea inicializar al azar?[S/n]");
    char r;
    r = getchar();

    while(!(r == 'S' || r == 's' || r == 'N' || r == 'n' || r == '\n')) 
    {
        puts("Desea inicializar al azar?[S/n]");
        r = getchar();
    }
    random_init = (r == 'S' || r == 's' || r == '\n');
    
    if(not(random_init))
    {
		puts("¿Cuantas lineas quieres?");
		scanf("%i", &lineas);
		int palos[lineas];
		for(int i = 0; i<lineas; i++)
		{
			printf("¿Cuantos palos quieres en la línea %i?",i);
			scanf("%i", &palos_l);
			while (palos_l < 0)
			{
				printf("¿Cuantos palos quieres en la línea %i?",i);
				scanf("%i", &palos_l);
			}
			palos[i] = palos_l; 	
		}
    }
    
    else
    {
    	int palos[4];
    	for(int i = 0; i<4; i++)
    	{
    		palos[i] = 2*i+1;
    	}
    }
    return *palos;
}
//int 
int palos[];
int main() {
	// your code goes here
	return 0;
}
