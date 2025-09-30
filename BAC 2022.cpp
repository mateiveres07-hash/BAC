sb1
1.b
2.y>x/y|*y=>y*y>x
a
3.d
4.c

sb2
x=30 y=50
x=30 y=20
x=10 y=20
x=10 y=10

 x1
daca x=1 atunci
|
┌execută 
│ xm; yn; nn-1
│┌cât timp x≠y execută
││┌dacă x>y atunci xx-y
│││altfel yy-x
││└■
│└■
└■cat timp x=1
sfarsit daca

scrie n+1

3.if(x.temperatura>11) cout<<"CALDUROS";
  else{
	if(x.temperatura<10) cout<<"RACOROS";
	else cout<<"NORMAL";
  }

sb3
1.
#include <iostream>

using namespace std;
int schimb(int n,int x,int p){
  int nr=0,ord=0,cif=0,e=1;
  while(n!=0){
    cif=n%10;
    if(ord==p){
      nr=nr+x*e;
    }
    else{
      nr=nr+cif*e;
    }
    ord++;
    e=e*10;
    n=n/10;
  }
  return nr;
}
int main() 
{
   cout<<schimb(1234,7,1);
    
    return 0;
}
2.
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
   char s[101];
   char voc[6]="aeiou";
   cin>>s;
   for(int i=0;i<strlen(s);i++){
     char ch=s[i];
     while(strchr("aeiou",ch)==NULL){
       ch--;
     }
     s[i]=ch;
   }
   cout<<s;
    
    return 0;
}
