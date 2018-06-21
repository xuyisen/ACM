#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char * rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome" };

char ch(char c) {
	if (isalpha(c)) {
		return rev[c - 'A'];
	}
	return rev[c - '0'];
}
int main() {
	char s[30];
	while (scanf("%s", s) == 1) {
		int len = strlen(s);
		int p = 1;
		int q = 1;
		for (int i = 0; i < (len+1)/2; i++) {
			if (s[i] != s[len - 1 - i]) {
				p = 0;
			}
			if (ch(s[i]) != s[len - 1 - i]) {
				q = 0;
			}
		}
		printf("%s is %s\n", s, msg[2 * q + p]);
	}
	
	return 0;
}