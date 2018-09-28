/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int socketClient;
    struct sockaddr_in infosServeur;
    float entierAEnvoyer= 9.87 ;
    float entierRecu;
    int retour;
    int tailleStructure;
    
    //Création de la socket TCP
    socketClient = socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(socketClient == -1)
    {
        printf("pb0 socket errno : %s \n",strerror(errno));
        exit(errno);
    }
    //Init des informations serveur
    infosServeur.sin_addr.s_addr=inet_addr("172.18.58.71");
    infosServeur.sin_family=AF_INET;
    infosServeur.sin_port=htons(6666);
    
    //connexion au serveur 
    retour=connect(socketClient,(struct sockaddr *)&infosServeur,sizeof(infosServeur));
    if(retour==-1)
    {
        printf("pb1 sendto : %s \n",strerror(errno));
        exit(errno);
    }
    
    //envoyer l'entier au serveur 
    retour=sendto(socketClient,&entierAEnvoyer,sizeof(entierAEnvoyer),0,(struct sockaddr *)&infosServeur,sizeof(infosServeur));
    if(retour==-1)
    {
        printf("pb2 sendto : %s \n",strerror(errno));
        exit(errno);
    }
    //recevoir l'entier du serveur
    tailleStructure=sizeof(infosServeur);
    retour = recvfrom(socketClient, &entierRecu, sizeof(entierRecu), 0, (struct sockaddr *)&infosServeur, &tailleStructure);
    
    if(retour==-1)
    {
        printf("pb3 sendto : %s \n",strerror(errno));
        exit(errno);
    }
    //afficher l'entier du serveur
    printf("Recu du serveur : %f \n",entierRecu);
    return (EXIT_SUCCESS);
    
    //fermeture de la socket client
    close(socketClient);
}


