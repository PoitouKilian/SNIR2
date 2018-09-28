/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 12 septembre 2018, 08:35
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
    
    int retourbind;
    int retourSocket;
    
    struct sockaddr_in infosClient;
    struct sockaddr_in infosServeur;
    
    int entierRecu;
    int retourClient;
    int tailleStructure;
    
    //Création de la socket udp
    retourSocket = socket(PF_INET,SOCK_DGRAM,IPPROTO_UDP);
    
    //Verification
    if(retourSocket == -1)
    {
        printf("pb socket errno : %s \n",strerror(errno));
        exit(errno);
    }
    
    //Init des informations serveur
    infosServeur.sin_family=AF_INET;
    infosServeur.sin_port=htons(2222);
    infosServeur.sin_addr.s_addr=htonl(INADDR_ANY);
    
    
    
    //bind sert a faire le cheminement du port vers IP
    retourbind = bind (retourSocket,(struct sockaddr *)&infosServeur,sizeof(infosServeur));
   
    
    //Attribut la taille pour les informations client
    tailleStructure=sizeof(infosClient);
    
    //Attente de la reception du client
    retourClient = recvfrom(retourSocket, &entierRecu, sizeof(entierRecu), 0, (struct sockaddr *)&infosClient, &tailleStructure);
    
   
    //On inverse le signe de l'entier
    entierRecu=-entierRecu;
    
    //On affiche son adresse ip et son entier qu il vas recevoir
    printf("recu du client %s : %i\n", inet_ntoa(infosClient.sin_addr), entierRecu);
    
    //On envoie au clien
    retourClient=sendto(retourSocket,&entierRecu,sizeof(entierRecu),0,(struct sockaddr *)&infosClient,sizeof(infosClient));
    
   
    
    return (EXIT_SUCCESS);
}

