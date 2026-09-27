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
