#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int dig[12],i,s=0;
    long long inp;
    cin>>inp;
        inp/=10;
    for(i=0;i<12;i++){
        dig[i]=inp%10;
        if(i%2==1){
            s+=dig[i];
        }
        else{
            s+=3*dig[i];
        }
        inp/=10;
    }
    s=9-((s-1)%10);
    cout<<"Check digit: "<<s<<endl;

    system("pause");
}