#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define kDestinationString 30
#define kDateSting 10
#define kInfo 10
#define count 2
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	char* destination;
	char* date;
}FlightInfo;

void fillFlightInfo(FlightInfo *pFlight, char des[], char dat[]);
void printFlightInfo(FlightInfo arrFlight[]);
int main() {
	
	
	char destinationString[kDestinationString] = "";
	char dateString[kDateSting] = "";
	int i = 0;
	FlightInfo flightInformation[kInfo] = { 0 };
	FlightInfo pFlightInfo = { };
	char* temp_flightInfo = {};

	for (i = 0; i < count; i++) {
		fgets(destinationString, sizeof destinationString, stdin);
		int maxInputDestination = strlen(destinationString);
		temp_flightInfo = (char*)malloc(sizeof(maxInputDestination));

		if (temp_flightInfo == NULL) {
			printf("fuck\n");
		}
		else {
			//pFlightInfo = &flightInformation[i];
			
			fillFlightInfo(&pFlightInfo, destinationString, dateString);
			//pFlightInfo = flightInformation;
			flightInformation[i] = pFlightInfo;
			
		}

	}
	for (i = 0; i < count; i++) {
		printFlightInfo(flightInformation);
	}
	printf("%s  00000000\n", flightInformation[0].destination);
	printf("%s  1111111111f\n", flightInformation[1].destination);
	
	free(temp_flightInfo);
	return 0;
}


void fillFlightInfo(FlightInfo* pFlight, char des[], char dat[]) {
		
	pFlight->destination = des;
	pFlight->date = dat;
	printf("%s   hkhkkj\n", pFlight->destination);
	/*
	for (i = 0; i < count; i++){
		printf("%s", pFlight->destination);
	}
	*/
	/*
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
	*/
}
void printFlightInfo(FlightInfo arrFlight[]) {
	printf("%s  asdf\n", arrFlight->destination);


}

/*
for (i=0; i < count; i++) {

	fgets(destinationString, sizeof destinationString, stdin);
	int maxInputDestination = strlen(destinationString);
	pFlightInfo[i] = (char*)malloc(maxInputDestination + 1);
	if (pFlightInfo[i] == NULL) {
		printf("fuck\n");
	}
	else {
		flightInformation[i].destination = pFlightInfo[i];
		printf("%s  \n", flightInformation[i].destination);
	}

	/*
	fgets(destinationString, sizeof destinationString, stdin);
	//fgets(flightInformation[i].destination, sizeof flightInformation[i].destination, stdin);
	int maxInputDestination = strlen(destinationString);
	printf("%s  \n", destinationString);
	flightInformation[i].destination = (char*)malloc(maxInputDestination)+1;
	printf("%s  \n", flightInformation[i].destination);
	printf("%d\n", sizeof((int)flightInformation[i].destination));
	flightInformation[i].destination = destinationString;
	printf("%s  \n", flightInformation[i].destination);
	printf("%d\n", sizeof(flightInformation[i].destination));
	//fgets(flightInformation[i].destination, sizeof flightInformation[i].destination, stdin);

	*/
	/*
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

}*/

/*
for (i = 0; i < count; i++) {
	printf("%s  \n", pFlightInfo[i]);
	//printf("%s  \n", destinationString);
}
*/

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