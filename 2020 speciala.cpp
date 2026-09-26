sb 1
1.a
2.?
3.c
4.c
5.a

sb 2
1.
a)
n=5
x=127,2019,1005,7,1900
x=127
m=0
x=2019
m=20
x=1005
m=120
x=7
m=120
x=1900
m=2020

b)
1234
2345

d)
citește n (număr natural nenul)
 m<-0
i<-1
┌cat timp i<=n execută
│ citește x (număr natural)
│┌cât timp x%10 > [x/10]%10 execută
││ x<-[x/10]
│└■
│ m<-m+x
| i<-i+1
└■
┌dacă m>0 atunci scrie m
│altfel scrie „niciunul”
└■

2.
struct figura{
	struct {
		float x,y;
	}centru;
	float raza;
}x;

3.
for(i=0;i<7;i++){
 for(j=0;j<7;j++){
 	if(i<j)
	a[i][j]='+';
	else{	
		if(i==j)
			a[i][j]='a';
		else
			a[i][j]=a[i][j-1]+1;
	}
 }
}
