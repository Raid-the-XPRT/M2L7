#include <stdio.h>

char returnHex(int vairable);

int main(){


	char	chr0	=1;
	char	chr1	=0;
	char	chr2	=1;
	char	chr3	=0;

	char	chrHexVar=0;

	int	intCounter	=0;
	int	intLineCounter	=0;
	int	intPlace	=0;
	int	intVariable	=0;

	char	chrFirst;
	char	chrSecond;
	FILE	*ptrSourceFile;
	FILE	*ptrDestinationFile;
	char	buff[100];
	ptrSourceFile=fopen("bitstream1.bit","r");
	if(ptrSourceFile==NULL){
		printf("SOURCE FILE COULD NOT BE OPENED!");
		return 1;
	}
	ptrDestinationFile=fopen("bitstream.hex","w");
	if(ptrDestinationFile==NULL){
		printf("DESTINATION FILE COULD NOT BE OPENED!");
		return 1;
	}
	while(fgets(buff,100,ptrSourceFile)!=NULL){
//		printf("%s",buff);
		if(buff[0]==48){
			switch (intCounter){
				case 0:
					chr0=0;
					break;
				case 1:
					chr1=0;
					break;
				case 2:
					chr2=0;
					break;
				case 3:
					chr3=0;
					break;
			}
		intCounter++;
		if(intCounter>3){
			intVariable=(chr0*1)+(chr1*10)+(chr2*100)+(chr3*1000);
			if(intPlace==0){
				chrSecond=returnHex(intVariable);
				intPlace++;
			}
			else if(intPlace==1){
				chrFirst=returnHex(intVariable);
				printf("%c%c\n",chrFirst,chrSecond);
				fprintf(ptrDestinationFile,"%c%c\n",chrFirst,chrSecond);
				intPlace=0;
			}
			intCounter=0;
		}}
		if(buff[0]==49){
                        switch (intCounter){
                                case 0:
                                        chr0=1;
                                        break;
                                case 1:
                                        chr1=1;
                                        break;
                                case 2:
                                        chr2=1;
                                        break;
                                case 3:
                                        chr3=1;
                                        break;
                        }
                intCounter++;
                if(intCounter>3){
                        intVariable=(chr0*1)+(chr1*10)+(chr2*100)+(chr3*1000);
                        if(intPlace==0){
                                chrSecond=returnHex(intVariable);
				intPlace++;
                        }
                        else if(intPlace==1){
                                chrFirst=returnHex(intVariable);
                                printf("%c%c\n",chrFirst,chrSecond);
                                fprintf(ptrDestinationFile,"%c%c\n",chrFirst,chrSecond);
                                intPlace=0;
                        }

                        intCounter=0;
                }}
	}
	while(intCounter>0){
		if(intCounter==1){
			chr1=0;
			chr2=0;
			chr3=0;
		}
		else if(intCounter==2){
			chr2=0;
			chr3=0;
		}
		else if(intCounter==3){
			chr3=0;
		}
		intVariable=(chr0*1)+(chr1*10)+(chr2*100)+(chr3*1000);
                        if(intPlace==0){
                                chrSecond=returnHex(intVariable);
                                intPlace++;
                        }
                        else if(intPlace==1){
                                chrFirst=returnHex(intVariable);
                                printf("%c%c\n",chrFirst,chrSecond);
                                fprintf(ptrDestinationFile,"%c%c\n",chrFirst,chrSecond);
                                intPlace=0;
                        }

		intCounter=0;

	}
fclose(ptrSourceFile);
fclose(ptrDestinationFile);
return 0;
}




char returnHex(int variable){
	char	chrHexVar;
        switch (variable){
                case 0:
                        chrHexVar='0';
                        break;
                case 1:
                        chrHexVar='1';
                        break;
                case 10:
                        chrHexVar='2';
                        break;
                case 11:
                        chrHexVar='3';
                        break;
                case 100:
                        chrHexVar='4';
                        break;
                case 101:
                        chrHexVar='5';
                        break;
                case 110:
                        chrHexVar='6';
                        break;
                case 111:
                        chrHexVar='7';
                        break;
                case 1000:
                        chrHexVar='8';
                        break;
                case 1001:
                        chrHexVar='9';
                        break;
                case 1010:
                        chrHexVar='A';
                        break;
                case 1011:
                        chrHexVar='B';
                        break;
                case 1100:
                        chrHexVar='C';
                        break;
                case 1101:
                        chrHexVar='D';
                        break;
                case 1110:
                        chrHexVar='E';
                        break;
                case 1111:
                        chrHexVar='F';
                        break;
        }
return chrHexVar;
}
