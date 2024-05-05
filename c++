#include<iostream>
#include<conio.h>
#include<stdlib.h> 
#include<unistd.h> 
#include<ctime>
#include<iomanip>
using namespace std;
class customer
{
	protected:
		string customern,customerid;
		int day;
	public:
		void getdata();
};
class rent:public customer
{
	protected:
		int ch1,chr2;
	        string ccom,cmodel;
		long fee,rentfee;
	public:
		void choice();
		void display();
		void login();
};
void rent::login(){
        string pass="";
	char ch;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t   CAR RENTAL SYSTEM LOGIN PAGE"<<endl;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter password:";
	ch=getch();
	while(ch!=13){
		pass.push_back(ch);
		cout<<"*";
		ch=getch();
	}
	if(pass=="car24"||pass=="CAR24"){
		cout<<"\n\n\n\n\t\t\t\t\t\t\tAccess Granted ! Welcome to our system\n"<<endl;
		system("PAUSE");
		system("cls");
	}
	else{
		cout<<"\n\nPassword do not matched\nTry again.."<<endl;
		system("PAUSE");
		system("cls");
		login();
	}
}
void customer::getdata(){
	system("cls");
	cout<<"\t\t\t\t\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t\t\t\t     CAR RENTAL SYSTEM\n";
	cout<<"\t\t\t\t\t\t\tWelcome To Our Company,Enter Your Information:"<<endl;
	cout<<"\t\t\t\t\t\t\t--------------------------------------------"<<endl;
	cout<<"\n\n\n\n\t\t\t\t\t\t\tNOTE: Enter your name without giving space."<<endl;
	cout<<"\n\n\t\t\t\t\t\t\tEnter your NAME:";
	cin>>customern;
	cout<<"\n\t\t\t\t\t\t\tEnter your MOBILE NO:";
	cin>>customerid;
	cout<<"\n\t\t\t\t\t\t\tEnter how many day you want car:";
	cin>>day;
	system("PAUSE");
	system("cls");
}
void rent::choice(){
	cout<<"\t\t\t\t\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t\t\t\t        CAR RENTAL SYSTEM\n";
	cout<<"\t\t\t\t\t\t\tWelcome To Our Company,Choose from the menu:"<<endl;
	cout<<"\t\t\t\t\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 1  -  To Select   MARUTI SUZUKI"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 2  -  To Select   TATA"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 3  -  To Select   MAHINDRA"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 4  -  To Select   TOYOTA"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 5  -  To Select   HYUNDAI"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 6  -  To Select   KIA"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 7  -  To Select   VOLVO"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 8  -  To Select   BMW"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 9  -  To Select   MERCEDES"<<endl;
	cout<<"\t\t\t\t\t\t\tEnter 10 -  EXIT"<<endl;
	cout<<"\n\n\n\tYour choice:";
	cin>>ch1;
	switch(ch1)
	{
	case 1:
		system("cls");
	        ccom = "MARUTI_SUZUKI";
		cout<<" You have selected MARUTI SUZUKI Company: \n ------------------------------------------------"<<endl;
		cout<<" Enter. \n\n 1 for SWIFT\n    Seating capacity: 5 seater\n    Engin power: 88.50bhp\n    Fuel: Petrol\n    Mileage: 22kmpl\n    Rent: 1800/- perday\n\n"<<endl;
		cout<<" 2 for EARTIGA\n    Seating capacity: 7 seater\n    Engin power: 103bhp\n    Fuel: Diesel\n    Mileage: 18kmpl\n    Rent: 3000/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="SWIFT";
			fee=1800;
			cout<<" You hove selected MARUTI SUZUKI SWIFT car:\n";
		}else if(chr2==2){
			cmodel="EARTIGA";
			fee=3000;
		        cout<<" You hove selected MARUTI SUZUKI EARTIGA car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("cls");
	        choice();
		}
		break;
	case 2:
		system("cls");
		ccom="TATA";
	
		cout<<" You have selected TATA Company: \n ------------------------------------------------"<<endl; 
		cout<<" Enter. \n\n 1 for NEXON\n    Seating capacity: 5 seater\n    Engin power: 118bhp\n    Fuel: Petrol\n    Mileage: 17kmpl\n    Rent: 2300/- perday\n\n"<<endl;
		cout<<" 2 for SAFARI\n    Seating capacity: 7 seater\n    Engin power: 167bhp\n    Fuel: Diesel\n    Mileage: 14kmpl\n    Rent: 3500/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="NEXON";
			fee=2300;
			cout<<" You hove selected TATA NEXON car:\n";
		}else if(chr2==2){
			cmodel="SAFARI";
			fee=3500;
		        cout<<" You hove selected TATA SAFARI car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("cls");
	        choice();
		}
		break;
	case 3:
		system("cls");
		ccom="MAHINDRA";
		cout<<" You have selected MAHINDRA Company: \n ------------------------------------------------"<<endl;
		cout<<" Enter. \n\n 1 for THAR\n    Seating capacity: 4 seater\n    Engin power: 130bhp\n    Fuel: Diesel\n    Mileage: 15kmpl\n    Rent: 3000/- perday\n\n"<<endl;
		cout<<" 2 for XUV700\n    Seating capacity: 7 seater\n    Engin power: 182bhp\n    Fuel: Diesel\n    Mileage: 13kmpl\n    Rent: 3500/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="THAR";
			fee=3000;
			cout<<" You hove selected MAHINDRA THAR car:\n";
		}else if(chr2==2){
			cmodel="XUV700";
			fee=3500;
		        cout<<" You hove selected MAHINDRA XUV700 car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("cls");
	        choice();
		}
		break;
	case 4:
		system("cls");
		ccom="TOYOTA";
		cout<<" You have selected TOYOTA Company: \n ------------------------------------------------ "<<endl;
		cout<<" Enter. \n\n 1 for HYRYDER\n    Seating capacity: 5 seater\n    Engin power: 101bhp\n    Fuel: Petrol\n    Mileage: 21kmpl\n    Rent: 2500/- perday\n\n"<<endl;
		cout<<" 2 for INNOVA\n    Seating capacity: 8 seater\n    Engin power: 130bhp\n    Fuel: Diesel\n    Mileage: 14kmpl\n    Rent: 3500/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="HYRYDER";
			fee=2500;
			cout<<" You hove selected TOYOTA HYRYDER car:\n";
		}else if(chr2==2){
			cmodel="INNOVA";
			fee=3500;
		        cout<<" You hove selected TOYOTA INNOVA car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("cls");
	        choice();
		}
		break;
	case 5:
		system("cls");
		ccom="HYUNDAI";
		cout<<" You have selected HYUNDAI Company: \n ------------------------------------------------"<<endl;
		cout<<" Enter. \n\n 1 for CRETA\n    Seating capacity: 5 seater\n    Engin power: 113bhp\n    Fuel: Diesel\n    Mileage: 17kmpl\n    Rent: 2800/- perday\n\n"<<endl;
		cout<<" 2 for ALCAZAR\n    Seating capacity: 7 seater\n    Engin power: 158bhp\n    Fuel: Diesel\n    Mileage: 15kmpl\n    Rent: 3000/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="CRETA";
			fee=2800;
			cout<<" You hove selected HYUNDAI CRETA car:\n";
		}else if(chr2==2){
			cmodel="ALCAZAR";
			fee=3000;
		        cout<<" You hove selected HYUNDAI ALCAZAR  car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("cls");
	        choice();
		}
		break;
        case 6:
		system("cls");
		ccom="KIA";
		cout<<" You have selected KIA Company: \n ------------------------------------------------"<<endl;
		cout<<" Enter. \n\n 1 for SELTOS\n    Seating capacity: 5 seater\n    Engin power: 114bhp\n    Fuel: Petrol\n    Mileage: 17kmpl\n    Rent: 2800/- perday\n\n"<<endl;
		cout<<" 2 for CARENS\n    Seating capacity: 7 seater\n    Engin power: 114bhp\n    Fuel: Diesel\n    Mileage: 15kmpl\n    Rent: 3000/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="SELTOS";
			fee=2800;
			cout<<" You hove selected KIA SELTOS car:\n";
		}else if(chr2==2){
			fee=3000;
			cmodel="CARENS";
		        cout<<" You hove selected KIA CARENS car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("cls");
	        choice();
		}
		break;
	case 7:
		system("cls");
		ccom="VOLVO";
		cout<<" You have selected VOLVO Company: \n ------------------------------------------------"<<endl;
		cout<<" Enter. \n\n 1 for S60\n    Seating capacity: 5 seater\n    Engin power: 190bhp\n    Fuel: Petrol\n    Mileage: 21kmpl\n    Rent: 5000/- perday\n\n"<<endl;
		cout<<" 2 for XC90\n    Seating capacity: 7 seater\n    Engin power: 350bhp\n    Fuel: Diesel\n    Mileage: 14kmpl\n    Rent: 7000/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="S60";
			fee=5000;
			cout<<" You hove selected VOLVO S60 car:\n";
		}else if(chr2==2){
			cmodel="XC90";
			fee=7000;
		        cout<<" You hove selected VOLVO XC90 car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("cls");
	        choice();
		}
		break;
	case 8:
		system("CLS");
		ccom="BMW";
		cout<<" You have selected BMW Company: \n ------------------------------------------------"<<endl;
		cout<<" Enter. \n\n 1 for 7 SERIES\n    Seating capacity: 4 seater\n    Engin power: 375bhp\n    Fuel: Petrol\n    Mileage: 12kmpl\n    Rent: 8000/- perday\n\n"<<endl;
		cout<<" 2 for X7 M SPORTS\n    Seating capacity: 6 seater\n    Engin power: 335bhp\n    Fuel: Diesel\n    Mileage: 11kmpl\n    Rent: 9000/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="7_SERIES";
			fee=8000;
			cout<<" You hove selected 7 SERIES car:\n";
		}else if(chr2==2){
			cmodel="X7_M_SPORTS";
			fee=9000;
		        cout<<" You hove selected BMW X7 M SPORTS car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("CLS");
	        choice();
		}
		break;
	case 9:
		system("CLS");
		ccom="MERCEDES";
		cout<<" You have selected MERCEDES Company: \n ------------------------------------------------"<<endl;
		cout<<" Enter. \n\n 1 for S-CLASS\n    Seating capacity: 4 seater\n    Engin power: 362bhp\n    Fuel: Diesel\n    Mileage: 13mpl\n    Rent: 10000/- perday\n\n"<<endl;
		cout<<" 2 for GLS\n    Seating capacity: 7 seater\n    Engin power: 549bhp\n    Fuel: Diesel\n    Mileage: 12kmpl\n    Rent: 12000/- perday\n\n\n Your choice:";
		cin>>chr2;
		cout<<"\n ------------------------------------------------"<<endl; 
		if(chr2==1){
			cmodel="S_CLASS";
			fee=10000;
			cout<<" You hove selected MERCEDES S-CLASS car:\n";
		}else if(chr2==2){
			cmodel="GLS";
			fee=12000;
		        cout<<" You hove selected MERCEDESE GLS car:\n";	
		}else{
		cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	        system("PAUSE");
	        system("CLS");
	        choice();
		} 
		break;      
	case 10:
		exit(0);
	default:
	  cout<<"\nYou Entered Wrong input \nTry Again.."<<endl;
	  system("PAUSE");
	  system("CLS");
	  choice();
}
}
void rent::display(){
	sleep(1);
	system ("CLS");
	cout<<"Calculating rent. Please wait......"<<endl;
	rentfee=fee*day;
	sleep(2);
	system ("CLS");
	time_t now=time(0);		
	char *date=ctime(&now); 	
	cout<<setw(110)<<date<<endl;
	cout<<"\n\t\t\t\t\t\t                  CAR RENTAL SYSTEM - CUSTOMER INVOICE        "<<endl;
	cout<<"\t\t\t\t\t	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t\t\t\t\t	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t\t\t\t\t	| Customer Name "<<"				|"<<setw(14)<<customern<<" |"<<endl;
	cout<<"\t\t\t\t\t	| Mob No.  "<<"					|"<<setw(14)<<customerid<<" |"<<endl;
	cout<<"\t\t\t\t\t	| Car Company  "<<"			                |"<<setw(14)<<ccom<<" |"<<endl;
	cout<<"\t\t\t\t\t	| Car Model  "<<"				        |"<<setw(14)<<cmodel<<" |"<<endl;     
	cout<<"\t\t\t\t\t	| Number of days  "<<"				|"<<setw(14)<<day<<" |"<<endl;
	cout<<"\t\t\t\t\t	| Rental Amount for one day "<<"	    	        |"<<setw(14)<<fee<<" |"<<endl;
	cout<<"\t\t\t\t\t	| Caution Money  "<<"			  	|"<<setw(14)<<"0"<<" |"<<endl;      
	cout<<"\t\t\t\t\t	| Advanced  "<<"				        |"<<setw(14)<<"0"<<" |"<<endl;		
	cout<<"\t\t\t\t\t	|_______________________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t	| Total Rental Amount    "<<"			|"<<setw(12)<<rentfee<<"/-"<<" |"<<endl;
	cout<<"\t\t\t\t\t	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
	cout<<"\t\t\t\t\t	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
	cout<<"\t\t\t\t\t\t	 NOTE: This is a computer generated invoice. "<<endl;
	cout<<"\t\t\t\t\t\t	       It does not require an authorised signture."<<endl;
	cout<<"\t\t\t\t\t	*****************************************************************" <<endl;
	cout<<"\t\t\t\t\t\t	You are advised to pay up the amount before due date."<<endl;
	cout<<"\t\t\t\t\t\t	Otherwise penelty fee will be applied"<<endl;
	cout<<"\t\t\t\t\t	*****************************************************************" <<endl;
}
 int main() {
 	system("color A0 ");
        rent r;
        r.login();
        r.choice();
        r.getdata();
        r.display();
        return 0;
}
