#include <iostream>

using namespace std;

int main(){
int sales=0;
int count=0;


while(count==5){
	
if(count==1){
		cout<<"Enter today's sale for store 1:\t";
		cin>>sales;
	
}
else(count==2);{
	cout<<"Enter today's sale for store 2:\t";
	cin>>sales;
	
if(count==3)		
	cout<<"Enter today's sale for store 3:\t";
	cin>>sales;
	
else if(count==4)
	cout<<"Enter today's sale for store 4:\t";
	cin>>sales;
	
}
count++;	
}

}	
cout<<"Store 1\t" <<sales <<endl;
cout<<"Store 2\t" <<sales <<endl;	
cout<<"Store 3\t" <<sales <<endl;	
cout<<"Store 4\t" <<sales <<endl;	
return 0;	
}
