#include <stdio.h>

#define LOGFILE "logFile.log"
#define BUFFSIZE 1024

int main(int argc, char* argv[]){
	
	char msgBuff[BUFFSIZE];

	printf("STEN is running...");
	
	FILE *pFile = fopen(LOGFILE, "w+");
	fprintf(pFile, "[i] %s.\n", "STEN started");

	printf("%s", "Enter your message: ");
	fgets(msgBuff, BUFFSIZE, stdin);
	fprintf(pFile, "[user] %s", msgBuff);

	fclose(pFile);

	return 0;



}
