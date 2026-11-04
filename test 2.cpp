sb 1
1.a
2.c
3.d
4.d
5.b

sb 2
1.
a)
n=25940464, m=0
c=4 -> c=0, m=0
c=6 -> c=0, m=0
c=4 -> c=0, m=0
c=0 -> c=2, m=2
c=4 -> c=0, m=20
c=9 -> c=9, m=209
c=5 -> c=5, m=2095
c=2 -> c=0, m=20950

se afiseaza 20950
b)
20200
20202
20204
c)
#include 
using namespace std;

int main() {
unsigned int n, m = 0, c, p = 1;
cin >> n;
do {
c = n % 10;
n = n / 10;
if (c == 0) c = 2;
else if (c % 2 == 0) c = 0;
m = c * p + m;
p = p * 10;
} while (n != 0);
cout << m;
return 0;
}
d)
citește n (număr natural)
m<-0; p<-1
┌cât timp n!=0 execută
│ c<-n%10
│ n<-[n/10]
│┌dacă c=0 atunci c<-2
││altfel
││┌dacă c%2=0 atunci c<-0
││└■
│└■
│ m<-cp+m
│ p<-p10
└■
scrie m
2.

struct specie {
int cod;
int nrExemplare;
int varsta[10];
} s[20];

3.

for (int i = 1; i < 5; i++) {
for (int j = 1; j < 7; j++) {
a[i][j] = (a[i - 1][j] + a[i][j - 1]) % 10;
}
}
