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
    
    int socketClient;
    struct sockaddr_in infosServeur;
    int entierAEnvoyer=987;//%f
    int entierRecu;//%f
    int retour;
    int tailleStructure;
    
    //Création de la socket udp
    socketClient = socket(PF_INET,SOCK_DGRAM,IPPROTO_UDP);
    
    if(socketClient == -1)
    {
        printf("pb socket errno : %s \n",strerror(errno));
        exit(errno);
    }
    
    //Init des informations serveur
    infosServeur.sin_addr.s_addr=inet_addr("172.18.58.74");
    infosServeur.sin_family=AF_INET;
    infosServeur.sin_port=htons(2222);
    
    //envoyer l'entier au serveur 
    retour=sendto(socketClient,&entierAEnvoyer,sizeof(entierAEnvoyer),0,(struct sockaddr *)&infosServeur,sizeof(infosServeur));
    if(retour==-1)
    {
        printf("pb sendto : %s \n",strerror(errno));
        exit(errno);
    }
    //recevoir l'entier du serveur
    tailleStructure=sizeof(infosServeur);
    retour = recvfrom(socketClient, &entierRecu, sizeof(entierRecu), 0, (struct sockaddr *)&infosServeur, &tailleStructure);
    
    if(retour==-1)
    {
        printf("pb sendto : %s \n",strerror(errno));
        exit(errno);
    }
    //afficher l'entier du serveur
    printf("Recu du serveur : %d \n",entierRecu);//%f
    
    return (EXIT_SUCCESS);
}

