/*


       *
      * *
     *   *
    *     *
   *       *
  * * * * * *
  

  */


 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 
 int n;
 cin>>n;

 for(int i=1; i<=n; i++){
    for(int j=1; j<=(n-i); j++){
        // print blank space 
        cout<<" ";
    }
     // first and last line print star
    if(i==1 || i==n)
    {
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
    }
    else{
        cout<<"*";
        for(int j=1; j<=2*i-3; j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
 }
 return 0;
 }