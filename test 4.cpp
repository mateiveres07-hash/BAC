sb 1
1.a
2.c
3.c
4.b
5.b

sb 2
1.
a)
n=49335
c1=5, n=4933, c2=3
c1>c2 (5>3) -> c2=5, c1=3
c1<c2 (3<5) -> scrie 3, c2=2
c1<c2 (3<2 FALS)

c1=3, n=493, c2=3
c1>c2 FALS
c1<c2 FALS

c1=3, n=49, c2=9
c1>c2 FALS
c1<c2 (3<9) -> scrie 3, c2=4
c1<c2 (3<4) -> scrie 3, c2=2
c1<c2 FALS

c1=9, n=4, c2=4
c1>c2 (9>4) -> c2=9, c1=4
c1<c2 (4<9) -> scrie 4, c2=4
c1<c2 FALS

c1=4, n=0, c2=0
c1>c2 (4>0) -> c2=4, c1=0
c1<c2 (0<4) -> scrie 0, c2=2
c1<c2 (0<2) -> scrie 0, c2=1
c1<c2 (0<1) -> scrie 0, c2=0
c1<c2 FALS

se afiseaza 3334000

b)
1100
1101
1102

c)
#include 
using namespace std;

int main() {
int n, c1, c2;
cin >> n;
do {
c1 = n % 10;
n = n / 10;
c2 = n % 10;
if (c1 > c2) {
c2 = c1;
c1 = n % 10;
}
while (c1 < c2) {
cout << c1;
c2 = c2 / 2;
}
} while (n > 9);
return 0;
}

d)
citește n (număr natural)
┌cât timp n>9 execută
│ c1<-n%10; n<-[n/10]; c2<-n%10
│┌dacă c1>c2 atunci
││ c2<-c1; c1<-n%10
│└■
│┌cât timp c1<c2 execută
││ scrie c1
││ c2<-[c2/2]
│└■
└■

2.

struct poliedru {
int NrVarfuri;
float Muchie;
struct {
float FataMuchie;
float FataFata;
} Unghi;
} p;

3.

ruptsprezece

sb 3
1.
#include 
using namespace std;

int joc(int n) {
int cnt = 0;
for (int i = 2; i <= n; i++) {
if (n % i == 0) {
cnt++;
}
}
return cnt;
}
