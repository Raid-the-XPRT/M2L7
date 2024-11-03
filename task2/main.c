#include <stdio.h>
#include <string.h>

int main(){
	FILE *ptrFile;

	char	buff[100];
	int	intNumberOfCharachters	=0;
	int	intNumberOfWords	=0;
	int	intNumberOfLines	=0;


	ptrFile=fopen("txtFile.txt","r");
	if(ptrFile==NULL){
		printf("Error occured in opening the file\n");
		return 1;
	}
	while(fgets(buff,sizeof(buff),ptrFile)!=NULL){
		for(int a=0;a<sizeof(buff);a++){
			if(buff[a]=='\n'){
				intNumberOfLines++;
			}
			else if(buff[a]==' '){
				if(buff[a+1]==' '){
					continue;
				}
				else{
					intNumberOfWords++;
				}
			}
			else if(buff[a]=='\0'){
				break;
			}
			else{
				intNumberOfCharachters++;
			}
		}
	}
	printf("\nWords: %d",intNumberOfWords);
        printf("\nLines: %d",intNumberOfLines);
        printf("\ncharachters: %d\n",intNumberOfCharachters);

	fclose(ptrFile);
	return 0;
}

