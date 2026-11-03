sb 1
1.d
2.c
3.b
4.b
5.c
sb 2
1.
a)
n=12345
p=1, m=0, k=0
x=780 -> x=780, x!=0 -> c=0
m=0*1+0=0, n=1234, p=10, k=1
x=921 -> x=92, x!=0 -> c=2
m=2*10+0=20, n=123, p=100, k=2
x=4013 -> x=40, x!=0 -> c=0
m=0*100+20=20, n=12, p=1000, k=3
x=75 -> x=0, x==0 -> c=n%10=2
m=2*1000+20=2020, n=1, p=10000, k=4
x=100214 -> x=10, x!=0 -> c=0
m=0*10000+2020=2020, n=0, p=100000, k=5
se afiseaza 2020
b)
49 0
49 1
c)
#include <iostream>
using namespace std;
int main() {
unsigned int n, p = 1, m = 0, k = 0, x, c, aux;
cin >> n;
while (n != 0) {
cin >> x;
aux = x;
for (int i = 1; i <= k; i++) {
aux = aux / 10;
}
if (aux != 0) {
c = aux % 10;
} else {
c = n % 10;
}
m = c * p + m;
n = n / 10;
p = p * 10;
k++;
}
cout << m;
return 0;
}
d)
citește n (număr natural)
p<-1; m<-0; k<-0
┌cât timp n!=0 execută
│ citește x
│ aux<-x; i<-1
│┌cât timp i<=k execută
││ aux<-[aux/10]
││ i<-i+1
│└■
│┌dacă aux!=0 atunci c<-aux%10
││altfel c<-n%10
│└■
│ m<-cp+m
│ n<-[n/10]
│ p<-p10
│ k<-k+1
└■
scrie m
struct punct {
float x, y;
};
struct triunghi {
punct A, B, C;
} t;
10 10
ViCTorIE
