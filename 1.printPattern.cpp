#include<bits/stdc++.h>
using namespace std;

void printPattern(int n=5,int d=1){
    int num =1;
   for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
       cout<<num <<" ";
       num+=d;
       if(num > 9){
        num =1;
       }
     }
     cout << endl;
   }
}

int main()
{
    int n, d;
    cout << "Enter the number of rows amd differences \n";
    cin >> n >> d;
    printPattern(n,d);
return 0;
}