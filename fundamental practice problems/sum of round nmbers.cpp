// sum of round numbers 

// step 1 ==> get a number  ex 8574
// step 2 =-> divide number by 10
// to get the last digit 
// step 3 --> extract the 2nd last digit and multyply by 10 power 1

// repeat untill number % 10 !=0




#include <bits/stdc++.h>
using namespace std;

int main() {
	cout<<"please enter the number "<<endl;
	int number ;
	int result;
	cin>>number;

	int power = 0;
	
	for(number;number>0;number=number/10){
		// extracting the last digit
		if(number%10==0){
			power++;
			continue;
			
		}
		result = number%10*pow(10,power);
		power++;
		cout<<result<<" ";

	}
	return 0;
}
