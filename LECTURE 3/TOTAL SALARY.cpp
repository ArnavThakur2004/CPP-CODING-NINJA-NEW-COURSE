#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	int d;
	int a;
float hra,da,pf;
	char h;
	cin >> d  >> h;
	 if(h=='A'){
		 a=1700;
	 } 
	else if(h=='B'){
		a=1500;

	}
	else{
		a =1300;

	}
		
	  hra=d*0.2;
		da=d*0.5;
		pf=d*0.11;
		 float totalSalary=d+hra+da+a-pf;
		 int ans=round(totalSalary);
		 cout<<ans;
		 //cout<<da;
}

