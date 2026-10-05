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

sb 3
1.
#include <iostream>
using namespace std;
int div(int x){
    int s=0;
    for(int d=1;d*d<=x;d++){
         if(x%d==0){
            s=s+d;
            if(d!=x/d){
                s=s+x/d;
            }
        }
    }
    return s;
}
int kpn(int a, int b, int k){
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%2==div(i)%2){
            cnt++;
            if(cnt==k){
            return i;
            }
        }
    }
    return -1;
}
int main() 
{
    cout<<kpn(27,50,3);
    return 0;
}

2.
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char s[101],aux[101]=" ",*p;
    int lungime,ok=0;
    cin.getline(s,101);
    p=strtok(s," ");
    while(p){
        lungime=strlen(p);
        if(lungime%2!=0){
            ok++;
            for(int i=0;i<lungime/2;i++){
                char a=p[i];
                p[i]=p[lungime-i-1];
                p[lungime-i-1]=a;
            }
        }
        strcat(aux,p);
        strcat(aux," ");
        p=strtok(NULL," ");
    }
    strcpy(s,aux);
    if(ok==0)
        cout<<"nu exista";
    else
        cout<<s;
    return 0;
}

3.
#include <iostream>
#include <fstream>
using namespace std;
ifstream in("bac.txt");
int main() 
{
    int x,minn=99999999,maxx=-1,ok=0;
    while(in>>x){
        if(x>=10 && x<=99){
            ok++;
            if(x<minn){
                minn=x;
            }
            if(x>maxx){
                maxx=x;
            }
        }
    }
    if(ok==0)
        cout<<"nu exista";
    else 
        cout<<minn-1<<" "<<maxx+1;
    return 0;
}
