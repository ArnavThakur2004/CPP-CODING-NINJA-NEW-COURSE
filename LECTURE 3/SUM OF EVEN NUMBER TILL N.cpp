/*
	Pre-requisite to solve this problem:
	In this question, we have to find sum of all even numbers till n. To take sum of all the even numbers, we have to take a variable and initialize it to zero. Let us name this variable as sum. 
	Following code is used to add 2 to sum variable and update it to the same sum variable:
	sum = sum + 2 
	
	Hint to solve this problem: We will have to loop on even numbers only and add the even numbers to the same sum variable, described above.
*/  


#include<iostream>
using namespace std;


int main(){



    int num, count = 1, sum = 0;  
  
     
    cin>>num;  
  
    while(count <= num)  
    {  
        if(count%2 == 0)  
        {  
            sum = sum + count;  
        }  
        count++;  
    }  
   cout<<sum;
       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
  
}