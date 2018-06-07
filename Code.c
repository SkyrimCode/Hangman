#include<stdio.h>
void main(){
	int z=1,k=0,i,n,b=0,o=1,c=0;
	char in,xy;
	printf("This is hangman :\nRules-\n1. Enter the possible letters to complete the given word\n2. Every word has 7 chances and every wrong input decreases your chances\n3. Press 0 to give up");
if(o==1){
	printf("\n\nThe word is _ _ n _ e _ , a 6 lettered word\n");
		char d[]={'d','a','g','r','\0'};
		char D[]={'D','A','G','R','\0'};
	while(z<=9 || k<=4){
		scanf("%c",&in);
		n=in;
		if(in=='0'){
		    z=9;
			printf("Press y to surrender\n");}
		else if(n==32 || n==10)
		    ;
		else{
			if(z<=8){
				b=0;

				for(i=0;i<4;++i){
					if(d[i]==in || D[i]==in){
						b=1;
						d[i]='1';
						D[i]='1';
						break;
					}
				}
				if(b==0){
				++z;
				if(z==2){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   \n");
                    printf("|   \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==3){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==4){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==5){
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==6){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|    \n");
                    printf("|_________\n");
				}
				if(z==7){
				printf("This is your last chance\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / \n");
                    printf("|_________\n");}
			    }
				else if(b==1)
				++k;
				if(z==8){
				printf("Your man got hanged\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / >\n");
                    printf("|_________\nThe word was 'danger'\n");
				break;
			}
			}
			else if(z==9){
				printf("Your man got hanged\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / >\n");
                    printf("|_________\nThe word was 'danger'\n");
				break;
			}
		}
		if(k==4)
		break;
	}
	if(k==4){
	printf("You won horrah\n");

	 printf("  O\n");
     printf(" /|>\n");
     printf("  |\n");
     printf(" / >\n\n");
}
printf("Press 1 to continue playing and 2 to exit\n");
scanf("%d",&o);
}
if(o==1){
	z=1;
	b=0;
	k=0;
	printf("\n\nThe word is _ _ p _ s _ i _ _ e , a 10 lettered word\n");
	char e[]={'i','m','o','s','b','l','\0'};
	char E[]={'I','M','O','S','B','L','\0'};
	while(z<=9 || k<=6){
		scanf("%c",&in);
		n=in;
		if(in=='0'){
		    z=9;
		    in='1';
		    printf("Press y to surrender\n");
		}
		else if(n==32 || n==10)
		    ;
		else{
			if(z<=8){
				b=0;

				for(i=0;i<6;i++){
					if(e[i]==in || E[i]==in){
						b=1;
						e[i]='1';
						E[i]='1';
						break;
					}
				}
				if(b==0){
				++z;
				if(z==2){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   \n");
                    printf("|   \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==3){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==4){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==5){
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==6){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|    \n");
                    printf("|_________\n");
				}
				if(z==7){
				printf("This is your last chance\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / \n");
                    printf("|_________\n");}
			    }
				else if(b==1)
				++k;
				if(z==8){
				printf("Your man got hanged\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / >\n");
                    printf("|_________\nThe word was 'impossible'\n");
				break;
			}
			}
			else if(z==9){
				printf("Your man got hanged\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / >\n");
                    printf("|_________\nThe word was 'impossible'\n");
				break;
			}
		}
		if(k==6)
		break;
	}
	if(k==6){
	printf("You won horrah\n");

	 printf("  O\n");
     printf(" /|>\n");
     printf("  |\n");
     printf(" / >\n\n");
}
printf("Press 1 to continue playing and 2 to exit\n");
scanf("%d",&o);}
if(o==1){
	z=1;
	b=0;
	k=0;
	printf("\n\nThe word is c _ _ c _ e _ , a 7 lettered word\n");
	char e[]={'i','r','k','t','\0'};
	char E[]={'I','R','K','T','\0'};
	while(z<=9 || k<=4){
		scanf("%c",&in);
		n=in;
		if(in=='0'){
		    z=9;
		    printf("Press y to surrender\n");}
		else if(n==32 || n==10)
		    ;
		else{
			if(z<=8){
				b=0;

				for(i=0;i<4;i++){
					if(e[i]==in || E[i]==in){
						b=1;
						e[i]='1';
						E[i]='1';
						break;
					}
				}
				if(b==0){
				++z;
				if(z==2){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   \n");
                    printf("|   \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==3){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==4){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==5){
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    \n");
                    printf("|   \n");
                    printf("|_________\n");
				}
				if(z==6){
					printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|    \n");
                    printf("|_________\n");
				}
				if(z==7){
				printf("This is your last chance\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / \n");
                    printf("|_________\n");}
			    }
				else if(b==1)
				++k;
				if(z==8){
				printf("Your man got hanged\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / >\n");
                    printf("|_________\nThe word was 'cricket'\n");
				break;
			}
			}
			else if(z==9){
				printf("Your man got hanged\n");
				    printf("______\n");
                    printf("|    |\n");
                    printf("|    O\n");
                    printf("|   /|>\n");
                    printf("|    |\n");
                    printf("|   / >\n");
                    printf("|_________\nThe word was 'cricket'\n");
				break;
			}
		}
		if(k==4)
		break;
	}
	if(k==4){
	printf("You won horrah\n");

	 printf("  O\n");
     printf(" /|>\n");
     printf("  |\n");
     printf(" / >\n\n");
}
printf("Game ends here, hope you enjoyed the game.\nPlease come back again!!!\n");
}
else if(o==2){
printf("Hope you enjoyed the game.\nPlease come back again!!!\n");
exit (0);
}
}
