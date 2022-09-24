/*


        * 
      * *
    * * *
  * * * *
* * * * *




*/

#include<bits/stdc++.h>
using namespace std;
int main(){


int n;
cin>>n;
int m=1;
for(int i=n; i>0; i--){
    for(int j=1; j<i-1; j++ ){
        cout<<" ";
    }

    for(int k=1; k<=m; k++){
        cout<<"*"<<" ";
    }

    m++;

    cout<<endl;
}
return 0;
}