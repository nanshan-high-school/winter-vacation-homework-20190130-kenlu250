#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
	string a;

	while(cin>>a){

		string b;

		b=a;

		reverse(b.begin(),b.end());

		if (b==a) {
			cout << "yes";
		}
    else {
			cout << "no";
		}
	}
}
