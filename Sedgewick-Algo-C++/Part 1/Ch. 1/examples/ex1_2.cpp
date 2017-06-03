#include <iostream.h>
static const int N=10000;
int main(){
    int i,j,p,q,id[N];
    for(i=0; i<N; i++){
        id[i]=i;
    }
    while(std::cin>>p>>q){
        for(i=p;i!=id[i];i=id[i]);
        for(j=q;j!=id[j];j=id[j]);
        if(i==j) continue;
        id[i]=j;
        std::cout<<" "<<p<<" "<<q<<std::endl;        
    }
}