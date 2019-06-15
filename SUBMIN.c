#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
int i,a[n];
for (i = 0; i < n; i++) {
scanf("%d",&a[i]);
}
int q;
scanf("%d",&q);
while (q--) {
int k,i,j,ans=0;
scanf("%d",&k);
for (i = 0; i < n; i++) {
int min = 10000000;
for (j = i; j < n; j++) {
if (a[j] < min) {
min = a[j];
}
if (min == k) {
ans++;
}
}
}
printf("%d\n",ans);
}
return 0;
}