#include<bits/stdc++.h>
using namespace std;
int parent[200001],component[200001];

int getParent(int x){
    if(parent[x]==x)return x;
    else return parent[x]=getParent(parent[x]);
}

void unionParent(int a,int b){
    a=getParent(a);
    b=getParent(b);
    if(a<b){
        parent[b]=a;
        component[a]+=component[b];
    }
    else if(b<a){
        parent[a]=b;
        component[b]+=component[a];
    }
}
int Findparent(int a,int b){
    a=getParent(a);
    b=getParent(b);
    if(a==b) return 1;
    else return 0;
}
int findParent(int a){
   a=getParent(a);
   return component[a];
}

int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	//freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int f,node_number=1;
        map<string,int>m;
        cin>>f;
        for(int j=0;j<=f*2+1;j++){
            parent[j]=j;
            component[j]=1;
        }
        for(int j=0;j<f;j++){
            string a,b;
            cin>>a>>b;
            if(m[a]==0){
                m[a]=node_number;
                node_number++;
            }
            if(m[b]==0){
                m[b]=node_number;
                node_number++;
            }
            if(!Findparent(m[a],m[b]))unionParent(m[a],m[b]);
            cout<<findParent(m[a])<<"\n";
        }
    }
    return 0;
}