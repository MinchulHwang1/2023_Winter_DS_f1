#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define kDestinationString 30
#define kDateSting 10
#define kInfo 10
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	char* destination;
	char* date;
}FlightInfo;

//void fillFlightInfo(char* des, char* dat);
int main() {
	
	char destinationString[kDestinationString] = "";
	char dateString[kDateSting] = "";
	int i = 0, count = 3;
	FlightInfo flightInformation[kInfo] = {  };
	char *pFlightInfo[kInfo] = { NULL };
	
	

	


	for (i=0; i < count; i++) {
		//char destinationString[kDestinationString] = "";
		//fgets(flightInformation[i].destination, sizeof flightInformation[i].destination, stdin);
		fgets(destinationString, sizeof destinationString, stdin);
		//fgets(dateString, sizeof dateString, stdin);
		//fgets(dateString, sizeof dateString, stdin);
	
		int maxInputDestination = strlen(destinationString);
		pFlightInfo[i] = (char*)malloc(maxInputDestination + 1);
		//strcpy(flightInformation[i].destination, destinationString);
		printf("%s  \n", *pFlightInfo);
		flightInformation[i].destination = destinationString;
		pFlightInfo[i] = flightInformation[i].destination;
		//flightInformation[i].date = dateString;
		
		//printf("%s  \n", pFlightInfo);
		
		//printf("%s  \n", flightInformation[0].destination);
	
	}
	

	
	for (i = 0; i < count; i++) {
		printf("%s  \n", pFlightInfo[i]);
		//printf("%s  \n", destinationString);
	}

	/*
	int maxInputDestination = strlen(destinationString) ;
	int maxInputDate = strlen(dateString);
	
	//char* mallocDestinationString = (char*)malloc(maxInputDestination);
	
	if (mallocDestinationString == NULL) {
		printf("fawefsdaarser");
	}
	else {
		
		printf("You entered %s\n", destinationString);
		printf("%d\n", maxInputDestination);
		
		// I don't need the string any more so free it
		free(mallocDestinationString);
	}
	printf("%d\n", maxInputDestination);
	//fillFlightInfo(flightInformation->destination, flightInformation->date);
	*/

	return 0;
}

/*
void fillFlightInfo(char* des, char* dat) {
	

	int maxInputDestination = atoi(destinationString) + 1;
	int maxInputDate = atoi(dateString) + 1;
	char* mallocDestinationString = (char*)malloc(maxInputDestination);

	if (mallocDestinationString == NULL) {
		printf("fawefsdaarser");
	}
	else {
		fgets(mallocDestinationString, maxInputDestination, stdin);
		printf("You entered %s\n", destinationString);

		// I don't need the string any more so free it
		free(mallocDestinationString);
	}
	
	char destinationString[kDestinationString] = "";
	char dateString[kDateSting] = "";

	fgets(destinationString, sizeof destinationString, stdin);
	fgets(dateString, sizeof dateString, stdin);
	
	

	int maxInputDestination = atoi(destinationString) + 1;
	int maxInputDate = atoi(dateString) + 1;
	printf("flahweklfhakwjlef");

	strncpy(des, destinationString, maxInputDestination);
	strncpy(dat, dateString, maxInputDate);
	printf("afwsef %s", des);

	char* mallocDestinationString = (char*)malloc(*des);
	char* mallocDateString = (char*)malloc(*dat);
	
	

	printf("%d", maxInputDestination);
	printf("afwsef %s", des);
	
}*/