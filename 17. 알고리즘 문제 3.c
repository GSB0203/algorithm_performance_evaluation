#include <stdio.h>
int main() {
	int n, m, data, i, cnt = 0, max = -1;
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++) {
		scanf("%d", &data);
		if(data > m) {
			cnt++;
			if(cnt > max) max = cnt;
		}
		else cnt = 0;
	}
	
	printf("%d", max);
	return 0;
}
