/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 2 octobre 2018, 10:24
 */
#include "zone.h"

/*
 * 
 */
int main(int argc, char** argv) {

    struct donnees maFile;
    int idFile; // L'ID de la file de messages
    int ret;

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

    
    /* ----- Traitement ----- */
    while (1) {
        memset(maFile.texte, '\0', 9); /* efface le text */
        ret = msgrcv(idFile, (void*) &maFile, 9, 2, IPC_NOWAIT); /* retrait d'un message de type 2 */
        if (ret != -1) {
            printf("temp : %s\n", maFile.texte);
        }
        memset(maFile.texte, '\0', 9);
        ret = msgrcv(idFile, (void*) &maFile, 9, 3, IPC_NOWAIT); /* retrait d'un message de type 3 */
        if (ret != -1) {
            printf("ordre : %s\n", maFile.texte);
        }
        memset(maFile.texte, '\0', 9);
        ret = msgrcv(idFile, (void*) &maFile, 9, 4, IPC_NOWAIT); /* retrait d'un message de type 4 */
        if (ret != -1) {
            printf("press : %s\n", maFile.texte);
        }
    }
    /* -------------------------------------------- */
    return (EXIT_SUCCESS);
}

