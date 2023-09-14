// Write a C++ program to find the largest among three numbers entered by the user.



// Code starts here
#include<iostream>
using namespace std;

// Defining Class
class Sort{
	public:
	long double x,y,z,arr[3];
	Sort(){
		for(int i=0;i<3;i++){
			cout<<"\n\tEnter your "<< i <<" number: ";cin>>arr[i];
		}
	}
	long double check(){
		for(int i=0;i<3;i++){
			for(int j=i+1;j<3;j++){
				if(arr[i]>arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		return(arr[0],arr[2]);
	}
	long double large(){
		int a,b;
		a,b=check();
		return(b);
	}
};
int main(){
cout<<"\n\n\t\tObject Oriented Programming\n\t\tAssignment# 01: Write a C++ program to find the largest among three numbers entered by the user.\n";
// Creating Factorial Object
Sort sort;
cout<<"\n\tLargest Number entered is : "<<sort.large();

return 0;
}
