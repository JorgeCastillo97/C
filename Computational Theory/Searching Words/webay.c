#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void check(FILE *f, FILE *g);

int main()
{
	int op,i=0,j,col=0,fil=1,ei=0,e1=0,e2=0,e3=0,WEB=0,EBAY=0;
	char a,ch,lch;
	char c[100],fl[3],cl[3];
	char t[10000];
	
	do
	{
		printf("Elige una opcion:\n\t\t1.Leer desde archivo\n\t\t2.Escribir texto manualmente\n\t\t3.Salir\n");
		scanf("%d",&op);
	
		switch(op)
		{
			case 1:
				{
					FILE *f=fopen("texto.txt","r");
					FILE *g=fopen("words.txt","w");
	
					if(!f || !g)
					{
						printf("¡ERROR!");
						system("pause");
						exit(1);
					}
					
					fputs("\t\tPALABRAS ENCONTRADAS\n\n",g);
					while((ch=fgetc(f))!=EOF)				//VERIFICACION
					{
						lch=tolower(ch);
						switch(lch)
						{
							case 'a':
								{
									col++;
									if(e1==1 && e2==4 && e3==6)
									{
										e1=1;
										e2=7;
										e3=0;
									}
									else if(e1==1 && e2==6)
									{
										e1=1;
										e2=7;
									}
									else
									{
										ei=0;
									}
									break;
								}
							case 'b':
								{
									col++;
									if(e1==1 && e2==3 && e3==5)
									{
										WEB++;
										e1=1;
										e2=4;
										e3=6;
										itoa(col,cl,10);
										itoa(fil,fl,10);
										fputs("web\t\t",g);
										fputs("Columna: ",g);
										fputs(cl,g);
										fputs("\tFila: ",g);
										fputs(fl,g);
										fputc('\n',g);
									}
									else if(e1==1 && e2==5)
									{
										e1=1;
										e2=6;
									}
									else
									{
										ei=0;
									}
									break;
								}
							case 'c':
								{
									col++;
									ei=0;
									break;
								}
							case 'd':
								{
									col++;
									ei=0;
									break;
								}
							case 'e':
								{
									col++;
									if(ei==0)
									{
										e1=1;
										e2=5;
										ei=1;
									}
									else
									{
										if((e1==1 && e2==2) || (e1==1 && e3==2))
										{
											e1=1;
											e2=3;
											e3=5;
										}
										else if (e1==1 && e2==3 && e3==5)
										{
											e1=1;
											e2=5;
											e3=0;
										}
										else if(e1==1 && e2==6)
										{
											e1=1;
											e2=5;
											e3=2;
										}
										else if(e1==1 && e2==7)
										{
											e1=1;
											e2=5;
											e3=0;
										}
										else if(e1==1 && e2==8)
										{
											e1=1;
											e2=5;
											e3=0;
										}
										else if(e1==1 && e2==4 && e3==6)
										{
											e1=1;
											e2=5;
											e3=0;
										}
									}
									break;
								}
							case 'f':
								{
									col++;
									ei=0;
									break;
								}
							case 'g':
								{
									col++;
									ei=0;
									break;
								}
							case 'h':
								{
									col++;
									ei=0;
									break;
								}
							case 'i':
								{
									col++;
									ei=0;
									break;
								}
							case 'j':
								{
									col++;
									ei=0;
									break;
								}
							case 'k':
								{
									col++;
									ei=0;
									break;
								}
							case 'l':
								{
									col++;
									ei=0;
									break;
								}
							case 'm':
								{
									col++;
									ei=0;
									break;
								}
							case 'n':
								{
									col++;
									ei=0;
									break;
								}
							case 'o':
								{
									col++;
									ei=0;
									break;
								}
							case 'p':
								{
									col++;
									ei=0;
									break;
								}
							case 'q':
								{
									col++;
									ei=0;
									break;
								}
							case 'r':
								{
									col++;
									ei=0;
									break;
								}
							case 's':
								{
									col++;
									ei=0;
									break;
								}
							case 't':
								{
									col++;
									ei=0;
									break;
								}
							case 'u':
								{
									col++;
									ei=0;
									break;
								}
							case 'v':
								{
									col++;
									ei=0;
									break;
								}
							case 'w':
								{
									col++;
									if(ei==0)
									{
										e1=1;
										e2=2;
										ei=1;
									}
									else
									{
										if (e1==1 && e2==3 && e3==5)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==4 && e3==6)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==5)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==6)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==7)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==8)
										{
											e1=1;
											e2=2;
										}
									}
									break;
								}
							case 'x':
								{
									col++;
									ei=0;
									break;
								}
							case 'y':
								{
									col++;
									if(e1==1 && e2==7)
									{
										EBAY++;
										e1=1;
										e2=8;
										e3=0;
										itoa(col,cl,10);
										itoa(fil,fl,10);
										fputs("ebay\t\t",g);
										fputs("Columna: ",g);
										fputs(cl,g);
										fputs("\tFila: ",g);
										fputs(fl,g);
										fputc('\n',g);
									}
									break;
								}
							case 'z':
								{
									col++;
									ei=0;
									break;
								}
							case 10:
								{
									fil++;
									col=0;
									break;
								}
						}
					}
					
					printf("\t\tBusqueda Finalizada.\n\n");
					system("pause");
					fclose(f);
					fclose(g);
					break;
				}
			case 2:
				{
					FILE *u=fopen("words user.txt","w");
					FILE *temp=fopen("temp.txt","w");
					if(!u || !temp)
					{
						printf("¡ERROR!");
						system("pause");
						exit(1);
					}
					printf("Introduce el texto:\n");
					fflush(stdin);
					scanf("%[^\n]",&t);
					fputs(t,temp);
					fclose(temp);
					FILE *aux=fopen("temp.txt","r");
					
					fputs("\t\tPALABRAS ENCONTRADAS\n\n",u);
					while((ch=fgetc(aux))!=EOF)						//VERIFICACION
					{
						lch=tolower(ch);
						switch(lch)
						{
							case 'a':
								{
									col++;
									if(e1==1 && e2==4 && e3==6)
									{
										e1=1;
										e2=7;
										e3=0;
									}
									else if(e1==1 && e2==6)
									{
										e1=1;
										e2=7;
									}
									else
									{
										ei=0;
									}
									break;
								}
							case 'b':
								{
									col++;
									if(e1==1 && e2==3 && e3==5)
									{
										WEB++;
										e1=1;
										e2=4;
										e3=6;
										itoa(col,cl,10);
										itoa(fil,fl,10);
										fputs("web\t\t",u);
										fputs("Columna: ",u);
										fputs(cl,u);
										fputs("\tFila: ",u);
										fputs(fl,u);
										fputc('\n',u);
									}
									else if(e1==1 && e2==5)
									{
										e1=1;
										e2=6;
									}
									else
									{
										ei=0;
									}
									break;
								}
							case 'c':
								{
									col++;
									ei=0;
									break;
								}
							case 'd':
								{
									col++;
									ei=0;
									break;
								}
							case 'e':
								{
									col++;
									if(ei==0)
									{
										e1=1;
										e2=5;
										ei=1;
									}
									else
									{
										if((e1==1 && e2==2) || (e1==1 && e3==2))
										{
											e1=1;
											e2=3;
											e3=5;
										}
										else if (e1==1 && e2==3 && e3==5)
										{
											e1=1;
											e2=5;
											e3=0;
										}
										else if(e1==1 && e2==6)
										{
											e1=1;
											e2=5;
											e3=2;
										}
										else if(e1==1 && e2==7)
										{
											e1=1;
											e2=5;
											e3=0;
										}
										else if(e1==1 && e2==8)
										{
											e1=1;
											e2=5;
											e3=0;
										}
										else if(e1==1 && e2==4 && e3==6)
										{
											e1=1;
											e2=5;
											e3=0;
										}
									}
									break;
								}
							case 'f':
								{
									col++;
									ei=0;
									break;
								}
							case 'g':
								{
									col++;
									ei=0;
									break;
								}
							case 'h':
								{
									col++;
									ei=0;
									break;
								}
							case 'i':
								{
									col++;
									ei=0;
									break;
								}
							case 'j':
								{
									col++;
									ei=0;
									break;
								}
							case 'k':
								{
									col++;
									ei=0;
									break;
								}
							case 'l':
								{
									col++;
									ei=0;
									break;
								}
							case 'm':
								{
									col++;
									ei=0;
									break;
								}
							case 'n':
								{
									col++;
									ei=0;
									break;
								}
							case 'o':
								{
									col++;
									ei=0;
									break;
								}
							case 'p':
								{
									col++;
									ei=0;
									break;
								}
							case 'q':
								{
									col++;
									ei=0;
									break;
								}
							case 'r':
								{
									col++;
									ei=0;
									break;
								}
							case 's':
								{
									col++;
									ei=0;
									break;
								}
							case 't':
								{
									col++;
									ei=0;
									break;
								}
							case 'u':
								{
									col++;
									ei=0;
									break;
								}
							case 'v':
								{
									col++;
									ei=0;
									break;
								}
							case 'w':
								{
									col++;
									if(ei==0)
									{
										e1=1;
										e2=2;
										ei=1;
									}
									else
									{
										if (e1==1 && e2==3 && e3==5)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==4 && e3==6)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==5)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==6)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==7)
										{
											e1=1;
											e2=2;
										}
										else if(e1==1 && e2==8)
										{
											e1=1;
											e2=2;
										}
									}
									break;
								}
							case 'x':
								{
									col++;
									ei=0;
									break;
								}
							case 'y':
								{
									col++;
									if(e1==1 && e2==7)
									{
										EBAY++;
										e1=1;
										e2=8;
										e3=0;
										itoa(col,cl,10);
										itoa(fil,fl,10);
										fputs("web\t\t",u);
										fputs("Columna: ",u);
										fputs(cl,u);
										fputs("\tFila: ",u);
										fputs(fl,u);
										fputc('\n',u);
									}
									break;
								}
							case 'z':
								{
									col++;
									ei=0;
									break;
								}
							case 10:
								{
									fil++;
									col=0;
									break;
								}
						}
					}
					printf("\t\tBusqueda Finalizada.\n\n");
					system("pause");
					fclose(temp);
					fclose(u);
					break;
				}
		}
		system("cls");
	}while(op!=3);
	return 0;
}
