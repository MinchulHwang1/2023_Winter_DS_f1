
#include <stdio.h>
#include <stdlib.h>	// needed for atoi
#include <malloc.h>	// needed for malloc


int main(void)
{
	// find out how long the string is
	printf("How long is the string you want to enter?\n");
	char lengthStr[10] = "";
	fgets(lengthStr, sizeof lengthStr, stdin);
	// maxInputLength also adds one for the null-termination
	int maxInputLength = atoi(lengthStr) + 1;

	// allocate the memory, casting the return value from void * to char *
	char* pString = (char*)malloc(maxInputLength);
	if (pString == NULL)
	{
		printf("Out of memory\n");
		// a return statement here is not needed since the else bypasses everything else
		// if I didn't have the else, I would need to get out of the function with return
	}
	else
	{
		// get the string from the user and then print it
		fgets(pString, maxInputLength, stdin);
		printf("You entered <%s>\n", pString);

		// I don't need the string any more so free it
		free(pString);
	}

	return 0;
}