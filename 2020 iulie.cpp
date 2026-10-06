sb 1
1.d
2.b
3.c
4.c
5.a

sb 2
1.
a)
a=240107
1 1 1 0 0

b)
102468
986420

d)
citește a (număr natural)
c←0
┌repetă
│ b←a; x←0
│┌cat timp b!=0 sau x!=1 executa
││┌dacă b%10=c atunci
│││ x←1
││└■
││ b←[b/10]
│└■
│ scrie x,’ ’
│ c←c+2
└până când c>9 

2.
struct calculator{
	char monitor;
	struct{
		int interna,externa;
	}memorie;	
}c;

3.
for(i=0;i<9;i++){
 for(j=0;j<9;j++){
	if(i==j)
	a[i][j]='>';
	if(i+j==9-1)
	a[i][j]='>';
	if(i<j)
	a[i][j]='>';
	if(i+j<n-1)
	a[i][j]='>';
	if(i>j && i+j>n-1)
	a[i][j]='<';
 }
} 

sb 3
1.
#include <iostream>

using namespace std;
int suma(int a,int b){
    int s=0,r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            s=s+i;
            if(i!=a/i){
                s=s+a/i;
            }
        }
    }
    return s;
}

int main()
{
    
    cout<<suma(12,20);
    return 0;
}

2.
#include <iostream>
#include <cstring>
using namespace std;
void rotire( char s[],int st, int dr){
    int ch=s[st];
    for(int i=st+1;i<=dr;i++){
        s[i-1]=s[i];
    }
    s[dr]=ch;
}

int main()
{
    char s[101];
    int j;
    cin.getline(s,101);
    for(int i=0;i<strlen(s);i++){
        
    }
    
    return 0;
}

3.
#include <iostream>
#include <fstream>
using namespace std;
ifstream in("bac.txt");

int main()
{
    int n,v[1001]={},ap=0;
    while(in>>n){
        v[n]++;
    }
    for(int i=1;i<=1001;i++){
        if(v[i]%2==1)
            ap++;
    }
    if(ap>1) cout<<"NU";
    else cout<<"DA";
    
    return 0;
}
