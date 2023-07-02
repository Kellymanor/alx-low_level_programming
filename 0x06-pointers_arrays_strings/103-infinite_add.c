#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;

	// Check if the result can be stored in r
	if (len1 + len2 >= size_r)
	return 0;

	// Perform addition digit by digit
	while (i >= 0 || j >= 0 || carry > 0) 
	int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
	int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
	int sum = digit1 + digit2 + carry;

	carry = sum / 10;
	sum %= 10;

	// Store the result digit
	r[k] = '0' + sum;

	i--;
	j--;
	k--;
	}
	
	// Null-terminate the result string
	r[size_r - 1] = '\0';

    // If there is a carry left, shift the result to this 
	if (carry > 0) {
	memmove(r + 1, r, size_r - 1);
	r[0] = '0' + carry;
    }

    return r;
}

int main() {
    char n1[] = "123456789";
    char n2[] = "987654321";
    char result[20];

    char *sum = infinite_add(n1, n2, result, sizeof(ressult));
    if (sum) {
        printf("Sum: %s\n", sum);
    } else {
        printf("Unable to store the result.\n");
    }

    return 0;
}

