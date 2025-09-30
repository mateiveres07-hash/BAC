Sb 1
1.b
2.b
2.f(4770777,7)=1+f(477077,7)
f(477077,7)=1+f(47707,7)
f(47707,7)=1+f(4770,7)
f(4770,7)=0
3.a

Sb 2
1.
a n=205579
m=10
c=9
n=20557
m=9
b.789
778
d.
citește n (număr natural)
m10
┌dacă n=0 atunci
│ m<-0
│altfel
│┌cat timp n!=0 executa
││ c<-n%10; n<-[n/10]
││┌dacă c<=m atunci mc
│││altfel m<- -1
││└■
│└sfarsit cat timp
└■
scrie m

2.
149
167
347

3.
s2=2021
s2=2020-
s2=2020-2021
7
2020-2021

Sb 3
1.
#include <iostream>
using namespace std;
void divx(int n, int x){
  for(int i=n*x;i>=x;i-=x){
    cout<<i<<" ";
  }
}
int main() 
{
    divx(4,15);
    
    return 0;
}

2.
#include <iostream>
using namespace std;

int main() 
{
    int v[101][101],n;
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cin>>v[i][j];
      }
    }
    for(int i=1;i<=n;i++){
      cout<<v[i][1]<<" ";
    }
    for(int j=2;j<=n;j++){
      cout<<v[n][j]<<" ";
    }
    for(int i=n-1;i>=1;i--){
      cout<<v[i][n]<<" ";
    }
    for(int j=n-1;j>=2;j--){
      cout<<v[1][j]<<" ";
    }
    
    
    return 0;
}

3.
  #include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  ifstream cin("bac.in");
  int v[100]={},val,m1=0,m2=0;
  while(cin>>val){
    if(val<100){
      v[val]=1;
    }
  }
  for(int i=98;i>=10;i--){
    if(v[i]==0 && i%10!=i/10){
      if(m1==0){
        m1=i;
      }
      else{
        if(m2==0){
          m2=i;
        }
      }
    }
  }
  if(m2==0){
    cout<<"nu exista";
  }
  else{
    cout<<m1<<" "<<m2;
  }
    
    return 0;
}



