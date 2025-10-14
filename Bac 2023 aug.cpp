sb I
4.b
sb III
3.
  #include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  ifstream cin("bac.in");
    int a[100]={},b[100]={},m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
      int x;
      cin>>x;
      a[x]++;
    }
    for(int i=1;i<=n;i++){
      int y;
      cin>>y;
      b[y]++;
    }
    int sol=0;
    for(int i=0;i<=99;i++){
      if(a[i]<=b[i]){
        sol+=a[i];
      }
      else{
        sol+=b[i];
      }
    }
    cout<<sol;
    return 0;
}
  /*Algoritmul este eficient dpdv al timpului deoarece este de complexitate O(m+n)
Algoritmul se rezolva construind cate un vector de fecventa asociat sirului A, respectiv B
Solutia finala se construieste preluand pt fiecare valoare din [0,99] frecventa cea mai mica din cele 2 siruri
  */
