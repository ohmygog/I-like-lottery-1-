#include<iostream>
#include<cstdlib>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,an,a,b,i = 1;
	while(i>0){
		cout<<setw(5)<<"����һ���齱�齱����"<<endl;
		cout<<"����������1��10֮�����"<<endl;
		cin>>n>>an;
		srand(time(0));
		a = rand()%10+1;
		b = rand()%10+1;
		if(n == a&&an == b){
			cout<<"��ϲ���н���,���ǽ�֧��1000Ԫ,��ȷ�����ǣ�"<<a<<" "<<b<<endl; 
		}else if(n == a||an == b||n == b||an == a){
			cout<<"��ϲ���н��ˣ���û��ȫ�У����ǽ�֧��100Ԫ����ȷ�����ǣ�"<<a<<" "<<b<<endl;
		}else{
			cout<<"��ϲ��û�н�����֧��2Ԫ����ȷ�����ǣ�"<<a<<" "<<b<<endl; 
		}
		string cnt;
		cout<<endl<<"����Ҫ������������ǡ��򡮷�"<<endl;
		cin>>cnt;
		if(cnt == "��"){
			cout<<endl;
			continue;
		}else{
			i--;
		}
	}
	cout<<endl<<"---------------------------------"<<endl; 
	system("pause");
	return 0; 
}
