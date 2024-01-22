// NUMBER ==> 478
// 478 ==> + =19
// 19 ==> 8 

// STEP 1 ==> TAKE THE NUMBER AS INPUT 
// STEP 2 ==> SUM ALL THE DIGITS 
// IF SUM HAS MPRE THAN SINGLE DIGIT 
// REPEAT 2
// ELSE RETURN SUM 


// C++ program to display "Hello World"

#include <iostream>
using namespace std;

int main() {
	int num;  //141
	cout<<"please enter the number "<<endl;
	cin>>num;
	int sum =0;

	for(num;num>0;num=num/10){
		sum += num%10;  //141/10 = 14.1
		if(sum/10!=0){
			num = sum*10;
			
			sum =0;
		}
	}
	cout<<sum;

	return 0;
}
