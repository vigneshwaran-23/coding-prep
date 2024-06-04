#include <iostream>
using namespace std;

int main() {
    cout<<"Hollow Diamond Pattern";
    cout << "n:";
    int n;
    cin>>n;
        for(int i = 0 ; i <n ; i++){

        for(int j = n ; j >i ; j--){

            cout<<"*";

        }

        for(int j =1 ; j < 2*i+1; j++){

            cout<<"-";

        }
           for(int j =n ; j >i ; j--){

            cout<<"*";

        }
        cout<<endl;}
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<2*(n-i-1);j++){
                cout<<"-";
            }
            for(int j=i;j>=0;j--){
                cout<<"*";
            }    
            cout<<endl;}
        
 return 0;
}
