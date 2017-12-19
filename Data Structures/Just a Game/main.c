#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cola.h"
#include <windows.h>

//ANCHO 80			ALTO 25
#define limitx 80
#define limity 23
#define NIVMAX 10
#define SLEEP 1000


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void gotoxy(int x, int y);
char genera_letra(char L);

int main(int argc, char *argv[]) {
	
	int vidas=3;
	int score=0,nivel=1,x,y,s,m;
	cola c;
	char letra;
	char LT;
	srand(time(NULL));
	
	ini_cola(&c);
	
	for (m=0;m<limitx;m++)
	{
		gotoxy(m,limity+1);
		printf("-");
	}
					
					
					system("color 70");
					
					do
					{
						letra=genera_letra(letra);
						x=rand()%80;
						
						for (y=2;y<=limity;y++)
						{
							s=(SLEEP/nivel);
							if(y==limity)
							{
								vidas--;
							}
							marco(vidas,nivel,score);
							gotoxy(x,y);
							printf("%c",letra);
							Sleep(s);
							if(kbhit()==1)
							{
								LT=getch();
								if(LT==letra)
								{
										gotoxy(x,y);
										printf(" ");
										score+=(30/y)+nivel;
										nivel++;
										if(nivel>NIVMAX)
										{
											gotoxy(x,y);
											printf(" ");
											system("CLS");
											gotoxy(20,10);
											printf("\t\tGanaste!!");
											Sleep(3000);
											goto MAX;
											break;
										}
										y=limity;
									
								}
								else if(LT!=letra)
								{
									if(LT==27)
									{
										gotoxy(x,y);
										printf(" ");
										system("CLS");
										gotoxy(20,10);
										printf("ADIOS\n\n\n");
										Sleep(400);
										exit(1);
									}
									vidas--;
									if(vidas<=0)
									{
										goto LOSE;
									}
									marco(vidas,nivel,score);
								}
							}
								gotoxy(x,y);
								printf(" ");
						}
					}while(vidas>0);
					LOSE:
					system("CLS");
					gotoxy(0,10);
					printf("PERDISTE!!   :(");
					Sleep(1500);
					MAX:
						system("CLS");
						gotoxy(0,10);
						printf("ERES TODO UN PRO \n");	
						printf("PUNTAJE OBTENIDO: %d",score);
					
	return 0;
	system("pause");
}

char genera_letra(char L)
{
	L=(char)((rand()%25+0)+65);
	return L;
}

void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
