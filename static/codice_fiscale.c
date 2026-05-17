#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//#define CODICI ".\\codici.txt"
#define CODICI "codici.txt"
char codice[16];
int c = 0;
void NOME();
void COGNOME();
void DATA();
void LUOGO();
void CONTROLLO();
void INVERSO();
int main()
{
int menu;
printf("inserire 1 per fare il codice, inserire 2 per l'inverso: ");
scanf("%d", &menu);
do
{
switch (menu)
{
case 1:
COGNOME();
NOME();
DATA();
LUOGO();
CONTROLLO();
break;
case 2:
INVERSO();
break;
default:
break;
}
} while ((menu<1)||(menu>2));
}
void COGNOME()
{
char cognome[20];
printf("inserire cognome: ");
scanf("%s", cognome);
//toupper(cognome);
int lenn=strlen(cognome);
for (int i = 0; i < lenn; i++)
{
switch (cognome[i])
{
case 'a':
break;
case 'e':
break;
case 'i':
break;
case 'o':
break;
case 'u':
break;
default:
if (c != 3)
{
codice[c] = cognome[i];
c = c + 1;
}
break;
}
}
if (c<3)
{
for (int i = 0; i < lenn; i++)
{
switch (cognome[i])
{
case 'a':
if (c != 3)
{
codice[c] = cognome[i];
c = c + 1;
}
break;
case 'e':
if (c != 3)
{
codice[c] = cognome[i];
c = c + 1;
}
break;
case 'i':
if (c != 3)
{
codice[c] = cognome[i];
c = c + 1;
}
break;
case 'o':
if (c != 3)
{
codice[c] = cognome[i];
c = c + 1;
}
break;
case 'u':
if (c != 3)
{
codice[c] = cognome[i];
c = c + 1;
}
break;
default:
break;
}
}
}
printf("%s\n", codice);
return;
}
void NOME()
{
int con = 0;
int o;
char nome[20];
printf("inserire nome: ");
scanf("%s", nome);
//toupper(nome);
int lenn=strlen(nome);
for (int i = 0; i < lenn; i++)
{
switch (nome[i])
{
case 'a':
break;
case 'e':
break;
case 'i':
break;
case 'o':
break;
case 'u':
break;
default:
con = con + 1;
break;
}
}
switch (con)
{
case 4:
for (int i = 0; i < lenn; i++)
{
printf("%d\n", i);
switch (nome[i])
{
case 'a':
break;
case 'e':
break;
case 'i':
break;
case 'o':
break;
case 'u':
break;
default:
if ((c != 6)&&(c != 5))
{
codice[c] = nome[i];
c = c + 1;
}
else
{
o = i+1;
while (c != 6)
{
switch (nome[o])
{
case 'a':
break;
case 'e':
break;
case 'i':
break;
case 'o':
break;
case 'u':
break;
default:
if (c != 6)
{
codice[c]=nome[o];
c = c + 1;
}
o = o + 1;
break;
}
}
}
break;
}
}
break;
case 3:
for (int i = 0; i < lenn; i++)
{
switch (nome[i])
{
case 'a':
break;
case 'e':
break;
case 'i':
break;
case 'o':
break;
case 'u':
break;
default:
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
}
}
break;
case 2:
for (int i = 0; i < lenn; i++)
{
switch (nome[i])
{
case 'a':
break;
case 'e':
break;
case 'i':
break;
case 'o':
break;
case 'u':
break;
default:
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
}
}
if (c<6)
{
for (int i = 0; i < lenn; i++)
{
switch (nome[i])
{
case 'a':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'e':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'i':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'o':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'u':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
default:
break;
}
}
}
break;
default:
break;
}
for (int i = 0; i < lenn; i++)
{
switch (nome[i])
{
case 'a':
break;
case 'e':
break;
case 'i':
break;
case 'o':
break;
case 'u':
break;
default:
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
}
}
if (c<6)
{
for (int i = 0; i < lenn; i++)
{
switch (nome[i])
{
case 'a':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'e':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'i':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'o':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
case 'u':
if (c != 6)
{
codice[c] = nome[i];
c = c + 1;
}
break;
default:
break;
}
}
}
printf("%s\n", codice);
return;
}
void DATA()
{
char mese[4];
printf("inserire anno: ");
scanf("%s", mese);
for (int i = 2; i < 4; i++)
{
codice[c]=mese[i];
c++;
}
printf("%s\n", codice);
int data;
while (c!=9)
{
printf("inserire mese: ");
scanf("%d", &data);
switch (data)
{
case 1:
codice[c]='a';
c = c + 1;
break;
case 2:
codice[c]='b';
c = c + 1;
break;
case 3:
codice[c]='c';
c = c + 1;
break;
case 4:
codice[c]='d';
c = c + 1;
break;
case 5:
codice[c]='e';
c = c + 1;
break;
case 6:
codice[c]='h';
c = c + 1;
break;
case 7:
codice[c]='l';
c = c + 1;
break;
case 8:
codice[c]='m';
c = c + 1;
break;
case 9:
codice[c]='p';
c = c + 1;
break;
case 10:
codice[c]='r';
c = c + 1;
break;
case 11:
codice[c]='s';
c = c + 1;
break;
case 12:
codice[c]='t';
c = c + 1;
break;
default:
printf("numero sbagliato\n");
break;
}
}
printf("%s\n", codice);
char gender;
int check = 0;
do
{
printf("inserire m se maschio e f se femmina: ");
scanf("%c", &gender);
if ((gender == 'm')||(gender == 'f'))
{
check = check + 1;
}
} while (check != 1);
char giorno[2];
printf("inserire giorno (in caso di giorno singolo aggiungerci 0 prima): ");
scanf("%s", giorno);
if (gender == 'f')
{
giorno[0] = giorno[0] + 4;
}
for (int i = 0; i < 2; i++)
{
codice[c]=giorno[i];
c = c + 1;
}
printf("%s\n", codice);
return;
}
void LUOGO()
{
FILE *fcheck;
int x, f;
char cont[100];
char stato[100];
char cod_stato[4];
char cata[50];
printf("inserire dove sei nato: ");
scanf("%s", stato);
fcheck=fopen(CODICI, "r");
if (fcheck==NULL)
{
fprintf(stderr, "error");
}
else
{
while(fscanf(fcheck, "%s %s", cont, cod_stato) != EOF)
{
cod_stato[0]=tolower(cod_stato[0]);
if(strcmp(cont, stato) == 0)
{
for(int i=0 ; i < 4; i++)
{
cata[i]=cod_stato[i];
}
}
}
}
fclose(fcheck);
codice[c]=cata[0];
c = c + 1;
codice[c]=cata[1];
c = c + 1;
codice[c]=cata[2];
c = c + 1;
codice[c]=cata[3];
c = c + 1;
printf("%s\n", codice);
return;
}
void CONTROLLO()
{
int totale = 0, pretot = 0;
for (int i = 0; i < 15; i++)
{
switch (codice[i])
{
case '0':
if (i+1%2==0)
{
totale = totale + 0;
}
else
{
totale = totale + 1;
}
break;
case '1':
if (i+1%2==0)
{
totale = totale + 1;
}
else
{
totale = totale + 0;
}
break;
case '2':
if (i+1%2==0)
{
totale = totale + 2;
}
else
{
totale = totale + 5;
}
break;
case '3':
if (i+1%2==0)
{
totale = totale + 3;
}
else
{
totale = totale + 7;
}
break;
case '4':
if (i+1%2==0)
{
totale = totale + 4;
}
else
{
totale = totale + 9;
}
break;
case '5':
if (i+1%2==0)
{
totale = totale + 5;
}
else
{
totale = totale + 13;
}
break;
case '6':
if (i+1%2==0)
{
totale = totale + 6;
}
else
{
totale = totale + 15;
}
break;
case '7':
if (i+1%2==0)
{
totale = totale + 7;
}
else
{
totale = totale + 17;
}
break;
case '8':
if (i+1%2==0)
{
totale = totale + 8;
}
else
{
totale = totale + 19;
}
break;
case '9':
if (i+1%2==0)
{
totale = totale + 9;
}
else
{
totale = totale + 21;
}
break;
case 'a':
if (i+1%2==0)
{
totale = totale + 0;
}
else
{
totale = totale + 1;
}
break;
case 'b':
if (i+1%2==0)
{
totale = totale + 1;
}
else
{
totale = totale + 0;
}
break;
case 'c':
if (i+1%2==0)
{
totale = totale + 2;
}
else
{
totale = totale + 5;
}
break;
case 'd':
if (i+1%2==0)
{
totale = totale + 3;
}
else
{
totale = totale + 7;
}
break;
case 'e':
if (i+1%2==0)
{
totale = totale + 4;
}
else
{
totale = totale + 9;
}
break;
case 'f':
if (i+1%2==0)
{
totale = totale + 5;
}
else
{
totale = totale + 13;
}
break;
case 'g':
if (i+1%2==0)
{
totale = totale + 6;
}
else
{
totale = totale + 15;
}
break;
case 'h':
if (i+1%2==0)
{
totale = totale + 7;
}
else
{
totale = totale + 17;
}
break;
case 'i':
if (i+1%2==0)
{
totale = totale + 8;
}
else
{
totale = totale + 19;
}
break;
case 'j':
if (i+1%2==0)
{
totale = totale + 9;
}
else
{
totale = totale + 21;
}
break;
case 'k':
if (i+1%2==0)
{
totale = totale + 10;
}
else
{
totale = totale + 2;
}
break;
case 'l':
if (i+1%2==0)
{
totale = totale + 11;
}
else
{
totale = totale + 4;
}
break;
case 'm':
if (i+1%2==0)
{
totale = totale + 12;
}
else
{
totale = totale + 18;
}
break;
case 'n':
if (i+1%2==0)
{
totale = totale + 13;
}
else
{
totale = totale + 20;
}
break;
case 'o':
if (i+1%2==0)
{
totale = totale + 14;
}
else
{
totale = totale + 11;
}
break;
case 'p':
if (i+1%2==0)
{
totale = totale + 15;
}
else
{
totale = totale + 3;
}
break;
case 'q':
if (i+1%2==0)
{
totale = totale + 16;
}
else
{
totale = totale + 6;
}
break;
case 'r':
if (i+1%2==0)
{
totale = totale + 17;
}
else
{
totale = totale + 8;
}
break;
case 's':
if (i+1%2==0)
{
totale = totale + 18;
}
else
{
totale = totale + 12;
}
break;
case 't':
if (i+1%2==0)
{
totale = totale + 19;
}
else
{
totale = totale + 14;
}
break;
case 'u':
if (i+1%2==0)
{
totale = totale + 20;
}
else
{
totale = totale + 16;
}
break;
case 'v':
if (i+1%2==0)
{
totale = totale + 21;
}
else
{
totale = totale + 10;
}
break;
case 'w':
if (i+1%2==0)
{
totale = totale + 22;
}
else
{
totale = totale + 22;
}
break;
case 'x':
if (i+1%2==0)
{
totale = totale + 23;
}
else
{
totale = totale + 25;
}
break;
case 'y':
if (i+1%2==0)
{
totale = totale + 24;
}
else
{
totale = totale + 24;
}
break;
case 'z':
if (i+1%2==0)
{
totale = totale + 25;
}
else
{
totale = totale + 23;
}
break;
default:
break;
}
}
int resto;
resto = totale%26;
switch (resto)
{
case 0:
codice[c]='a';
break;
case 1:
codice[c]='b';
break;
case 2:
codice[c]='c';
break;
case 3:
codice[c]='d';
break;
case 4:
codice[c]='e';
break;
case 5:
codice[c]='f';
break;
case 6:
codice[c]='g';
break;
case 7:
codice[c]='h';
break;
case 8:
codice[c]='i';
break;
case 9:
codice[c]='j';
break;
case 10:
codice[c]='k';
break;
case 11:
codice[c]='l';
break;
case 12:
codice[c]='m';
break;
case 13:
codice[c]='n';
break;
case 14:
codice[c]='o';
break;
case 15:
codice[c]='p';
break;
case 16:
codice[c]='q';
break;
case 17:
codice[c]='r';
break;
case 18:
codice[c]='s';
break;
case 19:
codice[c]='t';
break;
case 20:
codice[c]='u';
break;
case 21:
codice[c]='v';
break;
case 22:
codice[c]='w';
break;
case 23:
codice[c]='x';
break;
case 24:
codice[c]='y';
break;
case 25:
codice[c]='z';
break;
default:
break;
}
printf("%s\n", codice);
return;
}
void INVERSO()
{
FILE *fcheck;
int x, f;
char cont[100];
char stato[100];
char cod_stato[4];
char cata[4];
printf("inserire il tuo codice fiscale: ");
scanf("%s", codice);
printf("cognome:");
for(int i = 0; i < 3; i++)
{
printf("%c", codice[i]);
}
printf("\n");
printf("nome:");
for(int i = 3; i < 6; i++)
{
printf("%c", codice[i]);
}
printf("\n");
if((codice[6]>50)&&(codice[7]>52))
{
printf("19");
printf("%c", codice[6]);
printf("%c", codice[7]);
}
else
{
if((codice[6]<=50)||(codice[7])<=52)
{
printf("20");
printf("%c", codice[6]);
printf("%c", codice[7]);
}
else
{
printf("19");
printf("%c", codice[6]);
printf("%c", codice[7]);
}
}
printf("\n");
switch (codice[8])
{
case 'a':
printf("mese:gennaio");
break;
case 'b':
printf("mese:febbraio");
break;
case 'c':
printf("mese:marzo");
break;
case 'd':
printf("mese:aprile");
break;
case 'e':
printf("mese:maggio");
break;
case 'h':
printf("mese:giugno");
break;
case 'l':
printf("mese:luglio");
break;
case 'm':
printf("mese:agosto");
break;
case 'p':
printf("mese:settembre");
break;
case 'r':
printf("mese:ottobre");
break;
case 's':
printf("mese:novembre");
break;
case 't':
printf("mese:dicembre");
break;
default:
printf("sbagliato\n");
break;
}
printf("\n");
if(codice[9]>51)
{
printf("genere:femmina\n");
}
else
{
printf("genere:maschio\n");
}
cod_stato[0]=codice[11];
cod_stato[1]=codice[12];
cod_stato[2]=codice[13];
cod_stato[3]=codice[14];
fcheck=fopen(CODICI, "r");
if (fcheck==NULL)
{
fprintf(stderr, "error");
}
else
{
while(fscanf(fcheck, "%s %s", cont, cata) != EOF)
{
cata[0]=tolower(cata[0]);
if(strcmp(cod_stato, cata) == 0)
{
printf("nato a %s", cont);
}
}
}
return;
}