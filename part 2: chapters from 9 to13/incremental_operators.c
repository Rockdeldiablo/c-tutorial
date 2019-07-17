 
 
#include <stdio.h>
int main(void)
{ int i = 2;
int j = 5;
int l=2;
int m =5;
int postfixtotal;
int prefixtotal;
postfixtotal = i++ *j;
printf("%d \n",postfixtotal);
printf("%d \n ",i);
printf(" la i è aggiornata dopo aver eseguito tutto il resto sulla linea \n ");
// la i è aggiornata dopo aver eseguito tutto il resto sulla linea,
prefixtotal = ++l *m;
printf("%d \n",prefixtotal);
printf("%d \n ",l);

printf(" la l è aggiornata prima di aver eseguito tutto il resto sulla linea \n ");
// la l è aggiornata prima aver eseguito tutto il resto sulla linea,




return 0;
}