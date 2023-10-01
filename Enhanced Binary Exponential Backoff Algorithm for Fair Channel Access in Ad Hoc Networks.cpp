// C program for the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Driver Code
int main()
{
	// Slot time
	float slot_time = 0.00000166;

	int CWmin = 32, CWmax = 1024;

	int k;
	int i, Curr_BW = 32, counter = 0;
	float BT, Total_Backoff_time = 0;

	FILE* fp;
	char* f_name = "aaa.txt";
	char ch;
	int x = 0, y = 0;

	fp = fopen(f_name, "r+");

	// Open File
	if (fp == NULL) {
		printf("%s does not exists"
			" \n",
			f_name);
		return 0;
	}

	// Otherwise
	else {
		printf("%s: opened in read"
			" mode.\n\n",
			f_name);
	}

	// Read characters from the file
	while ((ch = fgetc(fp)) != EOF) {

		// End-of-file is reached
		if (ch == '1' || ch == '0') {
			printf("frame %c \n ", ch);
		}

		// If the character is 1
		if (ch == '1') {

			x = x + 1;
			printf("successful "
				"Transmission\n");
			Curr_BW = CWmin;
			printf("the current "
				"window is : %d\n",
				Curr_BW);

			BT = Curr_BW * slot_time;
			printf(" =>the backoff"
				" time is : %0.8f"
				" \n",
				BT);

			counter = 0;
		}

		// If the character is 0
		else if (ch == '0') {

			y = y + 1;
			if (counter < 7) {

				printf("UNsuccessful "
					"Transmission\n");

				Curr_BW = Curr_BW * 2;

				if (Curr_BW > CWmax) {

					Curr_BW = CWmax;
				}
				printf("the current "
					"window is :"
					" %d\n",
					Curr_BW);

				counter = counter + 1;
				printf("counter is :"
					" %d \n ",
					counter);

				BT = Curr_BW * slot_time;

				printf(" =>the backoff"
					" time is : %0.8f"
					" \n",
					BT);
			}

			// Otherwise
			else {

				Curr_BW = CWmin;
				printf("the current"
					" window is :"
					" %d\n",
					Curr_BW);

				BT = Curr_BW * slot_time;
				printf(" =>the backoff"
					" time is : %0.8f"
					" \n",
					BT);
			}
		}

		if (ch == '1' || ch == '0') {

			// Find the Backoff Time
			Total_Backoff_time = Total_Backoff_time + BT;

			printf("\n");

			// Print the time
			printf("=> Total Back_off"
				" time for frame is : "
				" %0.8f \n ",
				Total_Backoff_time);
			printf("\n\n");
		}
	}

	// Print the success and
	// unsuccess number
	printf(" success num : %d\n", x);
	printf(" unsuccess num : %d\n", y);

	return 0;
}
