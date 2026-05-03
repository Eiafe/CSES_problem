#include<bits/stdc++.h>
using namespace std;
int present[200001];
int main(){
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n-1;i++){
        cin>>x;
        present[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(present[i]==0){
            cout<<i<<endl;
        }
    }
}
