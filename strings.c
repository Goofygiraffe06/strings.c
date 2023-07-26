#include <stdio.h>

void str_len() {
    char str[100];

    printf("Enter Your String: ");
    scanf("%99s", str);
    int i = 0;
    for (; str[i] != 0; i++);
    printf("The Length Of String: %d\n", i);
}

void str_lwr() {
    int i = 0;
    char str[100];

    printf("Enter Your String: ");
    scanf("%99s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
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
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
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

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] == str2[i]) {
            continue;
        } else if (str1[i] > str2[i]) {
            dev += str1[i] - str2[i];
        } else if (str1[i] < str2[i]) {
            dev -= str2[i] - str1[i];
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
        res[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++, i++) {
        res[i] = str2[j];
    }

    res[i] = '\0';

    printf("The Concatenated String is: %s\n", res);
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

	printf("Choose Your Option: \n");
	printf("1. strlen()\n");
	printf("2. strlwr()\n");
	printf("3. strupr()\n");
	printf("4. strcmp()\n");
	printf("5. strcat()\n");
	printf("99. Exit\n");
	printf("=> ");
	scanf("%d", &option);

	switch(option) {
		case 1: str_len(); break;
		case 2: str_lwr(); break;
		case 3: str_upr(); break;
		case 4: str_cmp(); break;
		case 5: str_cat(); break;
		case 99: printf("Now Exiting! Byeeeee.\n"); break;
		default: printf("Invalid Option Entered!"); break;
	}
	return 0;
}
