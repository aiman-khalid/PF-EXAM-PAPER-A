#include<iostream>
using namespace std;
int main(){
	// decalaration and initialization
	int balance=10000, option, deposit, currBalance, withdraw;
	
	do{
		//displaying menu
		cout<<"WELCOME"<<endl<<"1. Check balance."<<endl<<"2. Deposit money."<<endl<<"3. Withdraw money."<<endl<<"4. Exit."<<endl;
		cin>>option;
		// asking for his choice
		switch(option){
			case 1:
				cout<<"Your current balance is "<<balance<<endl;
			break;
			case 2:
				cout<<"How much money do you want to deposit?"<<endl;
				cin>>deposit;
				
				if(deposit>0){   // checking if the deposit is greater than 0
				currBalance=balance+deposit;
				cout<<"Now your current balance is "<<currBalance<<endl;
			}else {
				cout<<"Enter the valid amount."<<endl;
			}
			break;
			case 3:
				cout<<"How much money do you want to withdraw?"<<endl;
				cin>>withdraw;
				if(withdraw>0){   // checking if the withdraw is greater than 0
				
				 if(withdraw<=balance){
					
				currBalance=balance-withdraw ;
				cout<<"Now your current balance is "<<currBalance<<endl;
		} else{
			cout<<"No sufficient amount available. Re enter the withdrawal amount"<<endl;
		}
		}else{
			cout<<"Enter the valid amount."<<endl;
		}
		   break;
		    case 4:
		    	cout<<"Exiting the menu."<<endl;
		    break;
		    default:
		    	cout<<"Invalid option"<<endl;
	}
} while(option!=4);

      return 0;
}
