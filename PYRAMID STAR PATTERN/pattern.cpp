

/*


     *
   * * *
  * * * *
 * * * * *
* * * * * * 

*/

#include<bits/stdc++.h>
using namespace std;
int main(){

int n; 
cin>>n;
int m=n;
for(int i=1; i<=n; i++){
    
    // space print first 
    for(int j=1; j<=m-1; j++){
        cout<<" ";
    }
    
    //star value print 
    for(int k=1; k<=2*i-1; k++){
        cout<<"*";
    }
    m--;

    cout<<endl;
}
return 0;
}