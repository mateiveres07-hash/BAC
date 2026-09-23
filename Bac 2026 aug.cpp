sb 1
1.b
2.d
3.c
4.a
5.b

sb 2
1.
n/2	n%2
44	0
22	0
11	1
5	1
2	0
1	1

44(10)=101100(2)

1=1
2=10
3=11
4=100
5=101
6=110
7=111
8=1000
a.15
b.16 17
d.
citește n
 (număr natural nenul)
 s<-0; i<-1
┌cât timp s<n execută
│ j<-i; nr<-0
│|daca j≠0 atunci
┌repeta
││ nr<-nr+j%2; j<-[j/2]
│└■pana cand j=0
│┌dacă nr=1 atunci
││ s<-s+i
│└■
│ i<-i+1
└■
scrie s

2.
valori nenule=20
valori  nule=44
3.
for(i=1;i<=5;i++)
 for(j=1;j<=5;j++){ 
	if(i%2==0 && j%2==0)
		a[i][j]=0;
	if(i%2!=0 && j%2!=0)
		a[i][j]=2;
	if((i%2!=0 && j%2==0) || (i%2==0 && j%2!=0))//i%2+j%2==1
		a[i][j]=3;	
}

sb 3
1.
#include <iostream>

using namespace std;
int baza(int n, int b){
    int ok=0;
    int cif;
    while(n!=0){
        cif=n%10;
        if(cif>=b)
            ok=1;//return -1;
        n=n/10;
    }
    if(ok==1)
        return -1;
    else
        return 1;
}
int main()
{
    int n,b;
    cin>>n>>b;
    cout<<baza(n,b);
    return 0;
}

2.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[201],d[21];
    cin.getline(s,201);
    char *p,sol[21];
    int minn=10,prim=1,nr;
    do{
        if(prim==1){
            p=strtok(s," ");
            prim=0;
        }
        else{
            p=strtok(NULL," ");
        }
        if(p==NULL)
            break;
        strcpy(d,p);
        p=strtok(NULL," ");
        nr=p[0]-'0';
        if(nr<minn){
            minn=nr;
            strcpy(sol,d);
        }
        else{
            if(nr==minn){
                if(strcmp(sol,d)>0)
                    strcpy(sol,d);
            }
        }
    }while(true);
    cout<<sol;
    return 0;
}
