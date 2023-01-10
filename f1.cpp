#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define kDestinationString 30
#define kDateSting 10
#pragma warning(disable:4996)f
struct FlightInfo {
	char* destination;
	char* date;
};

void fillFlightInfo(char* des, char* dat);
int main() {
	FlightInfo flightInformation[10] = { };

	fillFlightInfo(flightInformation->destination, flightInformation->date);


	return 0;
}

void fillFlightInfo(char* des, char* dat) {
	char destinationString[kDestinationString] = "";
	char dateString[kDateSting] = "";
	fgets(destinationString, sizeof destinationString, stdin);
	fgets(dateString, sizeof dateString, stdin);

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
	/*
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