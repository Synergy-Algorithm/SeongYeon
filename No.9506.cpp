#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int i,n=0,sum=1;
	vector<int> v;
	while(n!=-1){
		cout << "2와 10만 사이의 수를 입력하세요.:";
		cin >> n;
		for(i=2; i<n; i++)
			if(n%i==0) v.push_back(i);
		for(i=0; i<v.size(); i++)
			sum +=v[i];
		if(sum==n){
			cout << n << "= 1";
			for(i=0; i<v.size(); i++)
				cout << "+" << v[i];
			cout << endl;
		}
		else cout << n <<"is NOT perfect."<<endl;
		v.clear();
		sum=1;
	}
	return 0;
}
