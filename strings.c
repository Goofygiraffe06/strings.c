#include <stdio.h>

// Function to find the lenght of the string

void str_len() {
    char str[100];

    printf("Enter Your String: ");
    scanf("%99s", str);
    int i = 0;
    for (; str[i] != '\0'; i++); // Loop until the index reaches the null chareter making it the end of the string.
    printf("The Length Of String: %d\n", i);
}

// Function that converts upper case to lower case

void str_lwr() {
    int i = 0;
    char str[100];

    printf("Enter Your String: ");
    scanf("%99s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') { // Check if the charecter is in uppercase else skip.
            str[i] += 32; // The difference between an upper case and a lower case charecter in ascii table.
        }
    }
    printf("Lowercased String: %s\n", str);
}

void str_upr() {
    int i = 0;
    char str[100];

    printf("Enter Your String: ");
    scanf("99%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // Check if the charecter is in lowercase else skip.
            str[i] -= 32; // The difference between an lower case and an upper case charecter in ascii table.
        }
    }
    printf("Uppercased String: %s\n", str);
}

void str_cmp() {
    int i, dev = 0;
    char str1[100], str2[100];

    printf("Enter First String: ");
    scanf("%99s", str1);
    printf("Enter Second String: ");
    scanf("%99s", str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) { // Loop until one of the strings charecter is a null charecter.
        if (str1[i] == str2[i]) { // If both are same then skip.
            continue;
        } else if (str1[i] > str2[i]) { // If the ascii value of str1 of index i is greater than str2.
            dev += str1[i] - str2[i]; // Then the difference between two charecters will be negative.
        } else if (str1[i] < str2[i]) { // If the ascii value of str1 is less than str2 of index i.
            dev -= str2[i] - str1[i]; 	// Then the difference will be positive
        }
    }
    printf("Difference: %d\n", dev);
}

void str_cat() {
    int i, j = 0;
    char str1[100], str2[100], res[200];

    printf("Enter Your First String: ");
    scanf("%99s", str1);
    printf("Enter Your Second String: ");
    scanf("%99s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        res[i] = str1[i]; // Store str1 in res 
    }

    for (j = 0; str2[j] != '\0'; j++, i++) { // i++ is used here to continue from where the str1 ended.
        res[i] = str2[j];
    }

    res[i] = '\0'; // Adding a null charecter in the end.

    printf("The Concatenated String is: %s\n", res);
}

void str_cpy() {
	char str1[100], str2[100];
	int i = 0;

	printf("Enter Your First String: ");
	scanf("%99s", str1);
	printf("Enter Your Second String: ");
	scanf("%99s", str2);
	printf("=> Before str_cpy()\n");
	printf("First String: %s\nSecond String: %s\n", str1, str2);
	for (; str1[i] != '\0'; i++) {
		str2[i] = str1[i];
	}
	printf("=> After str_cpy()\n");
	printf("First String: %s\nSecond String: %s\n", str1, str2);
}

int main(int argc, char const *argv[])
{
	int option;
	char str[100];

	printf("\n	             /$$               /$$                                           \n");
	printf("	            | $$              |__/                                           \n");
	printf("	  /$$$$$$$ /$$$$$$    /$$$$$$  /$$ /$$$$$$$   /$$$$$$   /$$$$$$$     /$$$$$$$\n");
	printf("	 /$$_____/|_  $$_/   /$$__  $$| $$| $$__  $$ /$$__  $$ /$$_____/    /$$_____/\n");
	printf("	|  $$$$$$   | $$    | $$  \\__/| $$| $$  \\ $$| $$  \\ $$|  $$$$$$    | $$      \n");
	printf("	 \\____  $$  | $$ /$$| $$      | $$| $$  | $$| $$  | $$ \\____  $$   | $$      \n");
	printf("	 /$$$$$$$/  |  $$$$/| $$      | $$| $$  | $$|  $$$$$$$ /$$$$$$$//$$|  $$$$$$$\n");
	printf("	|_______/    \\___/  |__/      |__/|__/  |__/ \\____  $$|_______/|__/ \\_______/\n");
	printf("	                                             /$$  \\ $$                       \n");
	printf("	                                            |  $$$$$$/                       \n");
	printf("	                                             \\______/                        \n\n");
	printf("You really thought it's a header file right?  @Goofygiraffe06  Custom implementation of strings.h library\n");\
	printf("----------------------------------------------------------------------------------------------------------\n");

	do {
    printf("\nChoose Your Option: \n");
    printf("1. strlen()\n");
    printf("2. strlwr()\n");
    printf("3. strupr()\n");
    printf("4. strcmp()\n");
    printf("5. strcat()\n");
    printf("6. strcpy()\n");
    printf("99. Exit\n");
    printf("=> ");
    scanf("%d", &option);

    switch(option) 
    {
        case 1: str_len(); break;
        case 2: str_lwr(); break;
        case 3: str_upr(); break;
        case 4: str_cmp(); break;
        case 5: str_cat(); break;
        case 6: str_cpy(); break;
        case 99: printf("Now Exiting! Byeeeee.\n"); break;
        default: printf("Invalid Option Entered!"); break;
    }
    } while (option != 99);
	return 0;
}
