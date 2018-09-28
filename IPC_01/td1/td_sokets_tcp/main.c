/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 18 septembre 2018, 08:23
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
    int entierAEnvoyer=987;//%f
    int entierRecu;//%f
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
    infosServeur.sin_port=htons(5555);
    
    //envoyer l'entier au serveur 
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
    printf("Recu du serveur : %d \n",entierRecu);//%f
    return (EXIT_SUCCESS);
    
    //fermeture de la socket client
    close(socketClient);
}

