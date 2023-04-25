#include<iostream>
#include<cstdlib>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,an,a,b,i = 1;
	while(i>0){
		cout<<setw(5)<<"这是一个抽奖抽奖程序"<<endl;
		cout<<"请输入两个1到10之间的数"<<endl;
		cin>>n>>an;
		srand(time(0));
		a = rand()%10+1;
		b = rand()%10+1;
		if(n == a&&an == b){
			cout<<"恭喜您中奖了,我们将支付1000元,正确号码是："<<a<<" "<<b<<endl; 
		}else if(n == a||an == b||n == b||an == a){
			cout<<"恭喜您中奖了，但没完全中，我们将支付100元。正确号码是："<<a<<" "<<b<<endl;
		}else{
			cout<<"恭喜您没中奖，请支付2元。正确号码是："<<a<<" "<<b<<endl; 
		}
		string cnt;
		cout<<endl<<"您还要继续抽吗？请填‘是’或‘否’"<<endl;
		cin>>cnt;
		if(cnt == "是"){
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
