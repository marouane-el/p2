#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char nom [60];
    char numero [60];
    char email [60];
};
struct contact tab [100];
int n=0;
char cherche[15];



void ajouter (){
       printf("contact %d\n",n+1);
       printf("enter le nom de contact: ");
       scanf(" %[^\n]s",&tab [n].nom);
       printf("entrer le numero de telephone: ");
       scanf(" %[^\n]d",&tab [n].numero);
       printf("entrer l adresse email: ");
       scanf(" %[^\n]s",&tab [n].email);
       n++;
    };

void modifier (){

           printf("entrer le contact a modifier:");
           scanf("%s",&cherche);

    for(int i=0;i<n;i++){
     if(strcasecmp(tab[i].nom,cherche)==0){
           printf("entrer le numero a modifier:");
           scanf("%d",&tab[i].numero);
           printf("entrer l email a modifier:");
           scanf("%s",&tab[i].email);
                                          }

                         }
                 };
/*void supprimer (){
printf("entrer le nom a modifier:");
scanf("%s",&cherche);
for(i=0,i<n;i++){
strcasecmp()
                    }

                }*/
void afficher (){
    int i ;
    for(i=0;i<n;i++){
    printf("le contact:%s \n",tab [i].nom);
    printf("numero de telephone:%s \n",tab [i].numero);
    printf("l email:%s \n\--------------\n",tab [i].email);}
                };

void chercher (){
     printf("ecri le nom de contact : ");
     scanf("%s",&cherche);
     for(int i=0;i<n;i++){
        if(strcasecmp(tab[i].nom,cherche)==0){
        printf("nom:%s \n",&tab[i].nom);
        printf("numero:%s \n",&tab[i].numero);
        printf("email:%s\n",&tab[i].email);}

                    }

              }









int main ()
{ int choix;
  int n , i ;
while(1){
       int choix;
       printf("\n_________________________\n");
       printf("1. Ajouter un Contact.\n");
       printf("2. Modifier un Contact.\n");
       printf("3. Supprimer un Contact.\n");
       printf("4. Afficher Tous les Contacts.\n");
       printf("5. Rechercher un Contact.\n");
       printf("6. quitter.\n");
       printf("___________________________\n");
       scanf("%d",&choix);

    switch(choix){
                    case 1: ajouter ();
                            break;
                    case 2: modifier ();
                            break;
                    //case 3: supprimer
                           // break;
                    case 4 : afficher ();
                            break;
                    case 5 : chercher ();

                    case 6: return 0;
                            break;

                 }

        }


return 0;
}
