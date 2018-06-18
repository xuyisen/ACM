#include<stdio.h>
#include<string.h>

int light[1005];
int main() {

	memset(light, 0, sizeof(light));
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (j%i == 0) {
				light[j] = !light[j];
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (light[i] == 1) {
			printf("%d ", i);
		}
	}

	return 0;
	
}