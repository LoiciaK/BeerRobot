/*
 * motor.h
 *
 *  Created on: Dec 7, 2022
 *      Author: Loicia
 */

#include "shell.h"
#ifndef ASSER_MOTOR_H_
#define ASSER_MOTOR_H_

typedef struct h_motor_struct{
	char cmd;
	uint16_t speed;
}h_motor_t;

int moteurDroit(h_shell_t * pshell, int argc, char ** argv);
int moteurGauche(h_shell_t * pshell, int argc, char ** argv);
int motor_shell(h_shell_t * pshell, int argc, char ** argv);

int avance(int);
int recule(int);
int stop(void);
int gauche(int);
int droite(int);

int avance_droit(int vitesse);
int avance_gauche(int vitesse);

void taskBordure(void *pMotor);
void taskMotor(void *pMotor);
void taskRecherche(void *pMotor);
void taskTrouve(void *pMotor);

void taskAttrape(void *pMotor);

#endif /* ASSER_MOTOR_H_ */
