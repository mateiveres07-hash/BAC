sb 1
1.b
2.d
3.a

sb 2
I a 43141
b 1111
11011
rezolvari
I 2
f(5,0,0)
0

f(5,1,1)
1
f(5,3,2)
3
f(5,5,3)
5
f(5,7,4)
7
f(5,9,5)

I 3

II 1
n=412531
x=-1
y=-1
x=31
y=41
n=43141

citeşte n
 (număr natural nenul)
 x <-1; y <-1
daca n>9 atunci
┌repeta
│┌dacă x=-1 atunci x<-n%100
││altfel y<-n%100
│└■
│ n<-[n/10]
└■pana cand n<=9
sfarsit daca
┌dacă x<y atunci n<-(n*100+x)*100+y
│altfel n<-(n*100+y)*100+x
└■
scrie n

II 2
(crin,gerbera,iris)
(crin,iris,orhidee)

II 3
do, re, mi, fa, sol, la, si
C  D    E   F   G    A   B

if(m.nota1<='E'){
 if(m.nota1==m.nota2-2)
	cout<<"TERTA";
 else
	cout<<"NU";
}
else{
 if(m.nota1=='F'){
	if(m.nota2=='A')
		cout<<"TERTA";
 	else
		cout<<"NU";
 }
 else{
	if(m.nota2=='B')
		cout<<"TERTA";
 	else
		cout<<"NU";
 }

III 1

#include <iostream>
#include <cstring>
using namespace std;
int prim(int x){
  if(x<2)
  return 0;
  if(x%2==0 && x!=2)
  return 0;
  for(int i=2;i*i<=x;i++){
    if(x%i==0)
    return 0;
  }
  return 1;
}
int uprim(int x){
  int y=x+1;
  while(prim(y)!=1){
    y++;
  }
  return y;
}
int moderat(int x){
  for(int d=2;d*d<=x;d++){
    if(x%d==0){
      if(x/d==uprim(d)){
        return 1;
      }
      else{
        return 0;
      }
    }
  }
  return 0;
}
int main() 
{
  int x;
  cin>>x;
  cout<<moderat(x);
    return 0;
}

III 2

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
int a[101][101],m,n;
cin>>m>>n;
for(int i=1;i<=m;i++){
  for(int j=1;j<=n;j++){
    cin>>a[i][j];
  }
}
for(int i=2;i<=m;i+=2){
  int minn=99999999;
  for(int j=1;j<=n;j++){
    if(a[i][j]<=minn){
      minn=a[i][j];
    }
  }
  for(int j=1;j<=n;j++){
    if(a[i-1][j]>=minn)
    a[i-1][j]=minn-1;
  }
}
for(int i=1;i<=m;i++){
  for(int j=1;j<=n;j++){
    cout<<a[i][j]<<" ";
  }
  cout<<endl;
}
}

III 3

0, 0, 1, 4, 13, 38, 105, 280, 729
		x   y    z
	     x  y   z
fn=4∙fn-1-3∙fn-2-2∙fn-3
z=4*y-3*x-2*w
w=(4*y-3*x-z)/2
z=y
y=x
x=w

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
int x,y,z,w;
cin>>x>>y>>z;
cout<<z<<" "<<y<<" "<<x<<" ";
if(x==0){
  if(y==0){
    return 0;
  }
  else{
    cout<<0;
    return 0;
  }
}
do{
w=(4*y-3*x-z)/2;
z=y;
y=x;
x=w;
cout<<w<<" ";
}while(w!=0);
cout<<w;

  return 0;
}
