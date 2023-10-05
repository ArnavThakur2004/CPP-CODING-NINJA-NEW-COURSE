#include<iostream>
using namespace std;


int main(){
int S,E,W;
cin>>S>>E>>W;
       int i=S;
	   while(i<=E){

		   int sum =(i-32)*5/9;
		   cout<<i<<" "<<sum<<endl;
		   i+=W;
	   }
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


