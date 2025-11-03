#include <stdio.h> //this library is needed for printf() function
#include <windows.h> //this library is needed for pause() function

int array1[5], array2[5], sum[5];

void initialize();
void add();
void print();

void initialize() {
	int i;
	for (i = 0; i < 5; i++) {
		array1[i] = i;
		array2[i] = i + 3;
		sum[i] = 0;
	}
}

void add() {
	int i;
	for (i = 0; i < 5; i++) {
		sum[i] = array1[i] + array2[i];
	}
}

void print() {
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d", array1[i]);
	}
	printf("\n");
		for (i = 0; i < 5; i++) {
			printf("%d", array2[i]);
	}
	printf("\n");
		for (i = 0; i < 5; i++) {
			printf("%d", sum[i]);
	}
}

void main() {
	printf("Size of char: %lu\n", sizeof(char));
	printf("Size of short: %lu\n", sizeof(short));
	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of long: %lu\n", sizeof(long));
	printf("Size of long long: %lu\n", sizeof(long long));
	printf("Size of float: %lu\n", sizeof(float));
	printf("Size of double: %lu\n", sizeof(double));
	printf("Size of long double: %lu\n", sizeof(long double));
	system("pause"); //this function prevents from closing the output window


	initialize();
	add();
	print();
	printf("\n");
	system("pause");


	char name[20];
	printf("\nEnter your name: "); //get input from keyboard
	scanf_s("%19s", name, sizeof(name));
	printf("\nYour name is %s\n", name);
	system("pause"); //this command does not let the output window to close


	char string[1000];//input string
	char pattern[2]; //pattern string. The first character is the one we need to find in the string array. the second character is always zero as it is the last character of the array
	unsigned int counter = 0;
	printf("\nHi - Enter a large string: ");
	scanf_s("%999s", string, sizeof(string)); //read the string from keyboard
	printf("Enter a character to find its frequency: ");
	scanf_s("%1s", pattern, sizeof(pattern));
	for (int i = 0; string[i] != '\0'; ++i) {
		if (pattern[0] == string[i])
			counter++;
	}
	printf("Frequency of character %c is %d\n\n", pattern[0], counter);

} 