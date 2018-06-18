#include<stdio.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	int nums[20][20];
	memset(nums, 0, sizeof(nums));
	int x = 0;
	int y = n - 1;
	int tot = 1;
	nums[x][y] = 1;
	while (tot < n*n) {
		while (x + 1 < n && !nums[x + 1][y]) {
			nums[++x][y] = ++tot;
		}
		while (y - 1 >= 0 && !nums[x][y - 1]) {
			nums[x][--y] = ++tot;
		}
		while (x - 1 >= 0 && !nums[x - 1][y]) {
			nums[--x][y] = ++tot;
		}
		while (y + 1 < n && !nums[x][y + 1]) {
			nums[x][++y] = ++tot;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", nums[i][j]);
		}
		printf("\n");
	}

}

