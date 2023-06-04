#include <bits/stdc++.h>
using namespace std;
vector<int>GenerarVector(vector<int>A,int n);
vector<int>ValorAcumulado(vector<int>A,vector<int>V);
void MostrarVector(vector<int>A,vector<int>V);
int main(){
	vector<int>A,V;
	int n;
	cout<<"Ingrese la cantidad de elementos:"<<endl;
	cin>>n;
	A=GenerarVector(A,n);
	V=ValorAcumulado(A,V);
	MostrarVector(A,V);
	return 0;
}
vector<int>GenerarVector(vector<int>A,int n){
	srand(time(NULL));
    int e;
	for(int i=0;i<n;i++){
		e=rand()%30;
		A.push_back(e);
	}
	return A;
}
vector<int>ValorAcumulado(vector<int>A,vector<int>V){
	int valor,e=1;
	valor=A[0];
	V.push_back(A[0]);
	for(int i=0;i<A.size();i++){
	    valor=valor+A[i+1];
	    V.push_back(valor);    	
	}
    return V;
}
void MostrarVector(vector<int>A,vector<int>V){
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
    for(int i=0;i<V.size();i++){
		cout<<V[i]<<"/";
	}
	cout<<endl;
}