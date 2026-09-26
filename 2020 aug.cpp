sb 1
1.b
2.c
3.c
4.d
5.b

sb 2
1.
a)
n=247388
m=0
c=8
n=24738
m=8
c=8
n=2473
m=16
c=3
n=247
m=10
c=7
n=24
m=17
c=4
n=2
m=9
c=2
n=0
m=5
5NU

b)
162
183

d)
citește n (număr natural)
 m<-0
┌cat timp n!=0 executa
│ c<-n%10; n<-[n/10]
│┌dacă c<5 atunci m<-m-2*c
││altfel m<-m+c
│└■
└■
┌dacă m=0 atunci scrie ‘DA’
│altfel scrie m, ‘NU’
└■

2.
struct procesor{
	char producator;
	int frecventa;
	float pret;
}p[20];

3.
int aux;
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		if(a[i][3]%2==0){
			if(a[i][3]>a[i+1][3]){
				aux=a[i][3];
				a[i][3]=a[i+1][3];
				a[i+1][3]=aux;
			}
		}		
	}
}
