#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int *a = new int[N];
        int *ans =new int[N];
        for(int i=0; i<N; i++){
            cin>>a[i];
        }
        ans[N-1] = 1;
        for(int i=N-2;i>=0;i--){
            if((a[i]>0 && a[i+1]<0) || (a[i+1]>0 && a[i]<0)){
                ans[i] = ans[i+1]+1;
            }else{
                ans[i] = 1;
            }
        }
        for(int i=0; i<N; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}