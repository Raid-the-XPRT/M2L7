#include <stdio.h>
#include <string.h>

int main(){
	char	chrString[100];
	char	chrModifiedString[100];
	char	chrChoice;
	char	chrSourceFileName[100];
	char	chrDestinationFileName[100];
	FILE	*ptrSourceFile;
	FILE	*ptrDestinationFile;

	int	intIncrementer	=0;

	printf("Welcome to the Caeser Cipher Program!\n\n");

	printf("Do you want to perform (E)ncryption or (D)ecryption?: ");
	scanf("%c",&chrChoice);

	if (chrChoice == 'D' || chrChoice == 'd'){
                printf("Do you want to Decrypt from a (F)ile or from a (S)tring?: ");
                scanf(" %c",&chrChoice);

                if(chrChoice== 'F' || chrChoice == 'f'){
                        printf("Please enter the name of the file including the extension: ");
                        scanf(" %[^\n]s",&chrSourceFileName);
			ptrSourceFile=fopen(chrSourceFileName,"r");
			if(ptrSourceFile==NULL){
				printf("ERROR OPENING THE FILE!");
			}
			else{
				intIncrementer=0;
				fgets(chrString,100,ptrSourceFile);
				while(chrString[intIncrementer]!='\0'){
                                	//capital charachters
                                	if(chrString[intIncrementer]>=65 && chrString[intIncrementer]<=87){
                                       		chrModifiedString[intIncrementer]=chrString[intIncrementer]+3;
                                	}
                                	else if(chrString[intIncrementer]==88){
                                        	chrModifiedString[intIncrementer]=chrString[intIncrementer]=65;
                                	}
                                	else if(chrString[intIncrementer]==89){
                                       		chrModifiedString[intIncrementer]=chrString[intIncrementer]=66;
                                	}
                                	else if(chrString[intIncrementer]==90){
                                        	chrModifiedString[intIncrementer]=chrString[intIncrementer]=67;
                                	}
                                	//small charachters
                                	else if(chrString[intIncrementer]>=97 && chrString[intIncrementer]<=119){
                                        	chrModifiedString[intIncrementer]=chrString[intIncrementer]+3;
                                	}
                                	else if(chrString[intIncrementer]==120){
                                        	chrModifiedString[intIncrementer]=chrString[intIncrementer]=97;
                                	}
                                	else if(chrString[intIncrementer]==121){
                                        	chrModifiedString[intIncrementer]=chrString[intIncrementer]=98;
                                	}
                                	else if(chrString[intIncrementer]==122){
                                        	chrModifiedString[intIncrementer]=chrString[intIncrementer]=99;
                                	}
                                	//space
                                	else {
                                        	chrModifiedString[intIncrementer]=chrString[intIncrementer];
                                	}
                                	intIncrementer++;

                        	}
			ptrDestinationFile=fopen("new-decrypted.txt","w");
			if(ptrDestinationFile==NULL){
				printf("ERROR OPENING DESTINATION FILE!\n");
				return 1;
			}
//			printf("%s",chrMidifiedString);
			fprintf(ptrDestinationFile,chrModifiedString);
			return 0;
                	}
		}
                if(chrChoice== 'S' || chrChoice== 's'){
                        printf("Please enter the string you wish to decrypt:");
                        scanf(" %[^\n]s",&chrString);

                        while(chrString[intIncrementer]!='\0'){
                                //capital charachters
                                if(chrString[intIncrementer]>=65 && chrString[intIncrementer]<=87){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]+3;
                                }
                                else if(chrString[intIncrementer]==88){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=65;
                                }
                                else if(chrString[intIncrementer]==89){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=66;
                                }
                                else if(chrString[intIncrementer]==90){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=67;
                                }
                                //small charachters
                                else if(chrString[intIncrementer]>=97 && chrString[intIncrementer]<=119){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]+3;
                                }
                                else if(chrString[intIncrementer]==120){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=97;
                                }
                                else if(chrString[intIncrementer]==121){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=98;
                                }
                                else if(chrString[intIncrementer]==122){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=99;
                                }
                                //space
                                else {
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer];
                                }
                                intIncrementer++;
                        }
                        printf("%s\n",chrModifiedString);
                        }}

	else if(chrChoice == 'E' || chrChoice == 'e'){
		printf("Do you want to encrypt from a (F)ile or from a (S)tring?: ");
		scanf(" %c",&chrChoice);

                if(chrChoice== 'F' || chrChoice == 'f'){
                        printf("Please enter the name of the file including the extension: ");
                        scanf(" %[^\n]s",&chrSourceFileName);

                        ptrSourceFile=fopen(chrSourceFileName,"r");
                        if(ptrSourceFile==NULL){
                                printf("ERROR OPENING THE FILE!");
                        }
                        else{
                                intIncrementer=0;
                                fgets(chrString,100,ptrSourceFile);
                                while(chrString[intIncrementer]!='\0'){
                                //capital charachters
                                if(chrString[intIncrementer]>=68 && chrString[intIncrementer]<=90){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]-3;
                                }
                                else if(chrString[intIncrementer]==67){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=90;
                                }
                                else if(chrString[intIncrementer]==66){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=89;
                                }
                                else if(chrString[intIncrementer]==65){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=88;
                                }
                                //small charachters
                                else if(chrString[intIncrementer]>=100 && chrString[intIncrementer]<=122){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]-3;
                                }
                                else if(chrString[intIncrementer]==99){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=122;
                                }
                                else if(chrString[intIncrementer]==98){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=121;
                                }
                                else if(chrString[intIncrementer]==97){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=120;
                                }
                                //space
                                else {
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer];
                                }
                                intIncrementer++;


                                }
                        ptrDestinationFile=fopen("new-encrypted.txt","w");
                        if(ptrDestinationFile==NULL){
                                printf("ERROR OPENING DESTINATION FILE!\n");
                                return 1;
                        }
//                      printf("%s",chrMidifiedString);
                        fprintf(ptrDestinationFile,chrModifiedString);
                        return 0;
                        }

		}
		if(chrChoice== 'S' || chrChoice== 's'){
			printf("Please enter the string you wish to encrypt:");
			scanf(" %[^\n]s",&chrString);
		
			while(chrString[intIncrementer]!='\0'){
				//capital charachters
				if(chrString[intIncrementer]>=68 && chrString[intIncrementer]<=90){
					chrModifiedString[intIncrementer]=chrString[intIncrementer]-3;
				}
				else if(chrString[intIncrementer]==67){
					chrModifiedString[intIncrementer]=chrString[intIncrementer]=90;
				}
                                else if(chrString[intIncrementer]==66){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=89;
                                }
                                else if(chrString[intIncrementer]==65){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=88;
                                }
				//small charachters
                                else if(chrString[intIncrementer]>=100 && chrString[intIncrementer]<=122){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]-3;
                                }
                                else if(chrString[intIncrementer]==99){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=122;
                                }
                                else if(chrString[intIncrementer]==98){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=121;
                                }
                                else if(chrString[intIncrementer]==97){
                                        chrModifiedString[intIncrementer]=chrString[intIncrementer]=120;
                                }
				//space
				else {
					chrModifiedString[intIncrementer]=chrString[intIncrementer];
				}
				intIncrementer++;
			}
			printf("%s\n",chrModifiedString);
			}}
return 0;

}


