/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 2 octobre 2018, 08:59
 */


#include "zone.h"

/*
 * 
 */


int main(int argc, char** argv) {

    struct donnees maFile; // Le message structuré
    int idFile; // L'ID de la file de messages
    int val = 5; // Valeur a ecriure dans la file (type 4) (pression)
    float valF = 9.8; // Valeur à écrire dans la file (type 2) (temperature)

    /* -----Obtention de la clé de la file ----- */
    key_t key;
    key = ftok("/tmp/bidon", 5678);
    if (key == -1) {
        perror("ftok");
        exit(2);
    }
    /* -------------------------------------------- */

    /* ----- Obtention de la file de messages ----- */
    idFile = msgget(key, 0666 | IPC_CREAT);
    if (idFile == -1) {
        printf("Problème creation file : %s\n", strerror(errno));
        exit(1);
    }
    /* -------------------------------------------- */

    /* ---------------- Traitement ---------------- */
    while (1) {

        /* ----- Envoie du message de type 2 ----- */
        
        sprintf(maFile.texte, "%f", valF); /* conversion de float en chaine de caractères */
        maFile.type = 2; /* message de type 2 */
        printf("type = %ld message = %s\n", maFile.type, maFile.texte); /* affichage du message */
        msgsnd(idFile, (void*) &maFile, sizeof (maFile.texte), IPC_NOWAIT); /* envoi du message         NOWAIT rend l envoi du message non bloquant */
        
        /* -------------------------------------------- */

        /* ----- Envoie du message de type 4 ----- */
        
        sprintf(maFile.texte, "%d", val); /* conversion en chaine de caractères */
        maFile.type = 4;                /* message de type 4 */
        printf("type = %ld message = %s\n", maFile.type, maFile.texte); /* affichage du message */
        msgsnd(idFile, (void*) &maFile, sizeof (maFile.texte), IPC_NOWAIT); /* envoi du message */
        sleep(1);
        
        /* -------------------------------------------- */
    }
    /* -------------------------------------------- */

    return (EXIT_SUCCESS);
}

