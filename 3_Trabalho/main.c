#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//para compilar no terminal: gcc main.c -lwiringpi

int s0 = 29; //Gpio05
int s1 = 31; //Gpio06
int s2 = 33; //Gpio13
int s3 = 35; //Gpio19
int out = 37; //Gpio26

int out_pass=0;

//int red = 0;
//int green = 0;
//int blue = 0;

int i = 0;

int main (void)
{
  wiringPiSetup ();
  pinMode (s0, OUTPUT);
  pinMode (s1, OUTPUT);
  pinMode (s2, OUTPUT);
  pinMode (s3, OUTPUT);
  pinMode (out, INPUT);

//setando a frequencia de saida para 20%
  digitalWrite (s0, HIGH);
  digitalWrite (s1, LOW);	
	
  while(1){
    //ativa os fotodiodos vermelhos
    printf("vermelho: \n");
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    while (i < 2){
	out_pass = out;
	sleep(1);
	if(out_pass != out){
	    system("date +%s");
	    i++;
        }
    	//red =  ;
    }
    //ativa os fotodiodos azuis
    printf("Azul: \n");	
    digitalWrite(s3, HIGH);
    i=0;	
    while (i < 2){
	out_pass = out;
	sleep(1);
	if(out_pass != out){
	    system("date +%s");
	    i++;
        }
    	//blue =  ;
    }
    //ativa os fotodiodos verdes
    printf("verde: \n");	
    digitalWrite(s2, HIGH);
    i=0;
    while (i < 2){
	out_pass = out;
	sleep(1);
	if(out_pass != out){
	    system("date +%s");
	    i++;
        }
    	//green = ;
    }
  }
  return 0 ;
}