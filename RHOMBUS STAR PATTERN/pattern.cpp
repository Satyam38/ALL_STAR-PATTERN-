/*


     * * * * 
    * * * *
   * * * *
  * * * *
  

  */

#include<bits/stdc++.h>
using namespace std;
int main(){

int n; 
cin>>n;

for(int i=n; i>1; i--){
    
    // space print first 
    for(int j=1; j<i-1; j++){
        cout<<" ";
    }
    
    //star value print 
    for(int k=1; k<=n; k++){
        cout<<"*"<<" ";
    }

    cout<<endl;
}
return 0;
}