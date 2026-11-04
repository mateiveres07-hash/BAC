sb 1
1.d
2.b
3.c
4.c
5.b

sb 2
1.
a)
n=2754578
c1=8, n=275457, c2=7 -> c1>c2 -> s=1

c1=7, n=27545, c2=5 -> (7-5)*1 > 0
c1=5, n=2754, c2=4 -> (5-4)*1 > 0
c1=4, n=275, c2=5 -> (4-5)*1 < 0 oprire!

se afiseaza 1 275
b)
10
12

c)
#include 
using namespace std;

int main() {
int n, c1, c2, s;
cin >> n;
c1 = n % 10;
n = n / 10;
c2 = n % 10;
if (c1 == c2) s = 0;
else if (c1 > c2) s = 1;
else s = -1;
do {
c1 = n % 10;
n = n / 10;
c2 = n % 10;
} while ((c1 - c2) * s > 0);
cout << s << " " << n;
return 0;
}
d)
citește n (număr natural, n>9)
c1<-n%10; n<-[n/10]; c2<-n%10
┌dacă c1=c2 atunci s<-0
│altfel
│┌dacă c1>c2 atunci s<-1
││altfel s<-1
│└■
└■
┌cât timp (c1-c2)*s>0 execută
│ c1<-n%10; n<-[n/10]; c2<-n%10
└■
scrie s, ' ', n
2.

struct cerc {
struct {
float x, y;
} centru;
float raza;
} fig;

3.

int j = 0;
for (int i = 0; s[i] != '\0'; i++) {
if (strchr("aeiouAEIOU", s[i]) == NULL || s[i] == 'A' || s[i] == 'a') {
s[j++] = s[i];
}
}
s[j] = '\0';
cout << s;
sb 3
1.
#include 
using namespace std;

int suma(int n) {
int s = 0;
for (int d = 1; d <= n; d++) {
if (n % d == 0 && d % 2 != 0) {
s += d;
}
}
return s;
}
