#include<iostream>
#include<string.h>
#include<fstream>
#include<direct.h>
#include<conio.h>
#include<ctime>
#include<WINDOWS.h>
using namespace std;

void gotoxy(short xaxis, short yaxis)                                            
{
 COORD pos ={xaxis,yaxis};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

using namespace std;
struct Customer{
	
		char Fname[25],Lname[25];
		char number[14];
		char city[20];
		char country[20];
		char cnic[16];
		int accno;
		char atm[20];
		float balance;
		int age;
		char gender[20];
		char dateofbirth[15];
		Customer *next,*prev;
};

//struct End3

void Making_Folders()
{
	      mkdir("BankManagementSystem");
          mkdir("c:BankManagementSystem/A");
          mkdir("c:BankManagementSystem/B");
          mkdir("c:BankManagementSystem/C");
          mkdir("c:BankManagementSystem/D");
		  mkdir("c:BankManagementSystem/E");
		  mkdir("c:BankManagementSystem/F");
		  mkdir("c:BankManagementSystem/G");
		  mkdir("c:BankManagementSystem/H");
		  mkdir("c:BankManagementSystem/I");
		  mkdir("c:BankManagementSystem/J");
		  mkdir("c:BankManagementSystem/K");
		  mkdir("c:BankManagementSystem/L");
		  mkdir("c:BankManagementSystem/M");
		  mkdir("c:BankManagementSystem/N");
		  mkdir("c:BankManagementSystem/O");
		  mkdir("c:BankManagementSystem/P");
		  mkdir("c:BankManagementSystem/Q");
		  mkdir("c:BankManagementSystem/R");
		  mkdir("c:BankManagementSystem/S");
		  mkdir("c:BankManagementSystem/T");
		  mkdir("c:BankManagementSystem/U");
		  mkdir("c:BankManagementSystem/V");
		  mkdir("c:BankManagementSystem/W");
		  mkdir("c:BankManagementSystem/X");
		  mkdir("c:BankManagementSystem/Y");
		  mkdir("c:BankManagementSystem/Z");
}

class Bank{
public:
	Customer *head,*tail;
	ofstream File;
	
	char pathA[50];
	char pathB[50];
	char pathC[50];
	char pathD[50];
	char pathE[50];
	char pathF[50];
	char pathG[50];
	char pathH[50];
	char pathI[50];
	char pathJ[50];
	char pathK[50];
	char pathL[50];
	char pathM[50];
	char pathN[50];
	char pathO[50];
	char pathP[50];
	char pathQ[50];
	char pathR[50];
	char pathS[50];
	char pathT[50];
	char pathU[50];
	char pathV[50];
	char pathW[50];
	char pathX[50];
	char pathY[50];
	char pathZ[50];
	char extension[4];

	int AssignAccno(); //it assigns Account Number
	bool Check(char []); //it Checks whether theres any file of xyz named path
	
	Bank() //constructor
		{
			head = NULL;
			tail = NULL;
			Making_Folders();
			
			
			//PATHS 
	strcpy(pathA,"c:BankManagementSystem/A/");
    strcpy(pathB,"c:BankManagementSystem/B/");
	strcpy(pathC,"c:BankManagementSystem/C/");
	strcpy(pathD,"c:BankManagementSystem/D/");
	strcpy(pathE,"c:BankManagementSystem/E/");
	strcpy(pathF,"c:BankManagementSystem/F/");
	strcpy(pathG,"c:BankManagementSystem/G/");
	strcpy(pathH,"c:BankManagementSystem/H/");
	strcpy(pathI,"c:BankManagementSystem/I/");
	strcpy(pathJ,"c:BankManagementSystem/J/");
	strcpy(pathK,"c:BankManagementSystem/K/");
	strcpy(pathL,"c:BankManagementSystem/L/");
    strcpy(pathM,"c:BankManagementSystem/M/");
	strcpy(pathN,"c:BankManagementSystem/N/");
	strcpy(pathO,"c:BankManagementSystem/O/");
	strcpy(pathP,"c:BankManagementSystem/P/");
    strcpy(pathQ,"c:BankManagementSystem/Q/");
	strcpy(pathR,"c:BankManagementSystem/R/");
	strcpy(pathS,"c:BankManagementSystem/S/");
	strcpy(pathT,"c:BankManagementSystem/T/");
	strcpy(pathU,"c:BankManagementSystem/U/");
	strcpy(pathV,"c:BankManagementSystem/V/");
	strcpy(pathW,"c:BankManagementSystem/W/");
	strcpy(pathX,"c:BankManagementSystem/X/");
	strcpy(pathY,"c:BankManagementSystem/Y/");
	strcpy(pathZ,"c:BankManagementSystem/Z/");
	strcpy(extension,".txt");

	}
		//end of constructor
		
		//functionality
		void CreateAccount();
		void Transaction();
		void WithDraw();
		void Display();
		void AtmServices();
		void Delete_Account();
		//functionality
		
		//inserters
		void InsertA(char [],char []);
		void InsertB(char [],char []);
		void InsertC(char [],char []);
		void InsertD(char [],char []);
		void InsertE(char [],char []);
		void InsertF(char [],char []);
		void InsertG(char [],char []);
		void InsertH(char [],char []);
		void InsertI(char [],char []);
		void InsertJ(char [],char []);
		void InsertK(char [],char []);
		void InsertL(char [],char []);
		void InsertM(char [],char []);
		void InsertN(char [],char []);
		void InsertO(char [],char []);
		void InsertP(char [],char []);
		void InsertQ(char [],char []);
		void InsertR(char [],char []);
		void InsertS(char [],char []);
		void InsertT(char [],char []);
		void InsertU(char [],char []);
		void InsertV(char [],char []);
		void InsertW(char [],char []);
		void InsertX(char [],char []);
		void InsertY(char [],char []);
		void InsertZ(char [],char []);
	
		
		void TransactionA(char [],char []);
		void TransactionB(char [],char []);
		void TransactionC(char [],char []);
		void TransactionD(char [],char []);
		void TransactionE(char [],char []);
		void TransactionF(char [],char []);
		void TransactionG(char [],char []);
		void TransactionH(char [],char []);
		void TransactionI(char [],char []);
		void TransactionJ(char [],char []);
		void TransactionK(char [],char []);
		void TransactionL(char [],char []);
		void TransactionM(char [],char []);
		void TransactionN(char [],char []);
		void TransactionO(char [],char []);
		void TransactionP(char [],char []);
		void TransactionQ(char [],char []);
		void TransactionR(char [],char []);
		void TransactionS(char [],char []);
		void TransactionT(char [],char []);
		void TransactionU(char [],char []);
		void TransactionV(char [],char []);
		void TransactionW(char [],char []);
		void TransactionX(char [],char []);
		void TransactionY(char [],char []);
		void TransactionZ(char [],char []);
	
		
		void WithDrawA(char [],char []);
		void WithDrawB(char [],char []);
		void WithDrawC(char [],char []);
		void WithDrawD(char [],char []);
		void WithDrawE(char [],char []);
		void WithDrawF(char [],char []);
		void WithDrawG(char [],char []);
		void WithDrawH(char [],char []);
		void WithDrawI(char [],char []);
		void WithDrawJ(char [],char []);
		void WithDrawK(char [],char []);
		void WithDrawL(char [],char []);
		void WithDrawM(char [],char []);
		void WithDrawN(char [],char []);
		void WithDrawO(char [],char []);
		void WithDrawP(char [],char []);
		void WithDrawQ(char [],char []);
		void WithDrawR(char [],char []);
		void WithDrawS(char [],char []);
		void WithDrawT(char [],char []);
		void WithDrawU(char [],char []);
		void WithDrawV(char [],char []);
		void WithDrawW(char [],char []);
		void WithDrawX(char [],char []);
		void WithDrawY(char [],char []);
		void WithDrawZ(char [],char []);
		
		
		void DisplayA(char [],char []);
		void DisplayB(char [],char []);
		void DisplayC(char [],char []);
		void DisplayD(char [],char []);
		void DisplayE(char [],char []);
		void DisplayF(char [],char []);
		void DisplayG(char [],char []);
		void DisplayH(char [],char []);
		void DisplayI(char [],char []);
		void DisplayJ(char [],char []);
		void DisplayK(char [],char []);
		void DisplayL(char [],char []);
		void DisplayM(char [],char []);
		void DisplayN(char [],char []);
		void DisplayO(char [],char []);
		void DisplayP(char [],char []);
		void DisplayQ(char [],char []);
		void DisplayR(char [],char []);
		void DisplayS(char [],char []);
		void DisplayT(char [],char []);
		void DisplayU(char [],char []);
		void DisplayV(char [],char []);
		void DisplayW(char [],char []);
		void DisplayX(char [],char []);
		void DisplayY(char [],char []);
		void DisplayZ(char [],char []);
		
		void AtmA(char [],char []);
		void AtmB(char [],char []);
		void AtmC(char [],char []);
		void AtmD(char [],char []);
		void AtmE(char [],char []);
		void AtmF(char [],char []);
		void AtmG(char [],char []);
		void AtmH(char [],char []);
		void AtmI(char [],char []);
		void AtmJ(char [],char []);
		void AtmK(char [],char []);
		void AtmL(char [],char []);
		void AtmM(char [],char []);
		void AtmN(char [],char []);
		void AtmO(char [],char []);
		void AtmP(char [],char []);
		void AtmQ(char [],char []);
	    void AtmR(char [],char []);
		void AtmS(char [],char []);
		void AtmT(char [],char []);
		void AtmU(char [],char []);
		void AtmV(char [],char []);
     	void AtmW(char [],char []);
		void AtmX(char [],char []);
		void AtmY(char [],char []);
		void AtmZ(char [],char []);
		
		void DeleteA(char [],char []);
		void DeleteB(char [],char []);
		void DeleteC(char [],char []);
		void DeleteD(char [],char []);
		void DeleteE(char [],char []);
		void DeleteF(char [],char []);
		void DeleteG(char [],char []);
		void DeleteH(char [],char []);
		void DeleteI(char [],char []);
		void DeleteJ(char [],char []);
		void DeleteK(char [],char []);
		void DeleteL(char [],char []);
		void DeleteM(char [],char []);
		void DeleteN(char [],char []);
		void DeleteO(char [],char []);
		void DeleteP(char [],char []);
		void DeleteQ(char [],char []);
	    void DeleteR(char [],char []);
		void DeleteS(char [],char []);
		void DeleteT(char [],char []);
		void DeleteU(char [],char []);
		void DeleteV(char [],char []);
     	void DeleteW(char [],char []);
		void DeleteX(char [],char []);
		void DeleteY(char [],char []);
		void DeleteZ(char [],char []);
		
        bool CheckAtm(char [],char []);
        
	};
//class end

//Function Definitions Starts
bool CheckAccount(char path[])
    {
    ifstream File;
    File.open(path);
    if (!File)
	{
        cout << "There Is No Such File!";
        return false;
    }
    
    else
    {
    	return true;
	}
  }
  
bool Bank::CheckAtm(char path[],char atmno[])
    {
    char x;
    bool yes=false;
    ifstream File;
    File.open(path);
    if (!File)
	{
        cout << "There Is No Such File!";
        return false; // terminate with error
    }
    
    else
    {
  	char Line[255];
    while(File.getline(Line,255))
    {
     if(strcmp(Line,atmno)==true)
     {
     	yes = true;
        File.close();
     	return true;
	 }
	 
    }
    
	}
    cout<<endl<<"Press Any Key To Continue!";
    getch();
    
    return yes;
	}

	
int Bank::AssignAccno()
{
	int No;
	ifstream iff;
	iff.open("Accno.txt");
	int z;
	iff>>No;
	z=No+1; 
	iff.clear();
	iff.close();
	ofstream of;
	of.open("Accno.txt",ios::app);
	of<<z;
	of.close();
	return z-1;
}

bool Bank::Check(char path[])
{
    char x;
    char yes=false;
    ifstream File;
    File.open(path);
    if (!File) {
        cout << "There Is No Such File!";
        return false;
         // terminate with error
    }
    else
    {
  	char Line[255];
    yes=true;
    while(File.getline(Line,255))
    {
     cout << Line <<endl;
    }
	}
    File.close();
    cout<<endl<<"Press Any Key To Continue!";
    getch();
    return yes;
}
	
void Bank::Delete_Account()
		{
			gotoxy(45,0);
			char DeletingTime[]="Deleting Account Time";
			for(int j=0;j<sizeof(DeletingTime);j++)
            {
	            for(int i=0;i<1;i++)
	            {
	             	gotoxy(45+j,0);
	              	cout<<DeletingTime[j];
	                Sleep(20);
               }
         	}
     	    cout<<endl;
     	    
			char name[25];
			char CNIC[16];
	        cout<<"Enter Name: ";
	        fflush(stdin);
	        cin.getline(name,24);
	        fflush(stdin);
	        char pehlach = name[0];
	        //to make it capital if it is small else janay do
	        
	        cout<<"Enter CNIC: ";
     	    fflush(stdin);
		    cin.getline(CNIC,16);
	 	    fflush(stdin);
	 	 
			if(pehlach>= 97 && pehlach <=122)
	        {
		       pehlach=pehlach-32;
	        }
	        
			name[0]=pehlach;
	        //to make filenamestart withcapital letter
			switch(pehlach)
			{
				case 'A':
					DeleteA(name,CNIC);
					break;
				case 'B':
					
				    DeleteB(name,CNIC);
					break;
					
				case 'C':
					DeleteC(name,CNIC);
					break;
					
				case 'D':
				    DeleteD(name,CNIC);
					break;
					
				case 'E':
					DeleteE(name,CNIC);
					break;
					
				case 'F':
				    DeleteF(name,CNIC);
					break;
					
				case 'G':
					DeleteG(name,CNIC);
					break;
					
				case 'H':
				    DeleteH(name,CNIC);
					break;
					
				case 'I':
					DeleteI(name,CNIC);
					break;
					
				case 'J':
				    DeleteJ(name,CNIC);
					break;
					
				case 'K':
					DeleteK(name,CNIC);
					break;
					
				case 'L':
				    DeleteL(name,CNIC);
					break;
					
				case 'M':
					DeleteM(name,CNIC);
					break;
					
				case 'N':
				    DeleteN(name,CNIC);
					break;
					
				case 'O':
					DeleteO(name,CNIC);
					break;
					
				case 'P':
				    DeleteP(name,CNIC);
					break;
					
				case 'Q':
					DeleteQ(name,CNIC);
					break;
					
				case 'R':
				    DeleteR(name,CNIC);
					break;
					
				case 'S':
					DeleteS(name,CNIC);
					break;
					
				case 'T':
				    DeleteT(name,CNIC);
					break;
					
				case 'U':
					DeleteU(name,CNIC);
					break;
					
				case 'V':
				    DeleteV(name,CNIC);
					break;
					
				case 'W':
					DeleteW(name,CNIC);
					break;
				case 'X':
				    DeleteX(name,CNIC);
					break;
					
				case 'Y':
					DeleteY(name,CNIC);
					break;
				case 'Z':
				    DeleteZ(name,CNIC);
					break;
				
				default:
				cout<<"Invalid!";
				return;	
				
				}//switch case end
				
				system("cls");
				cout<<"Do You Want to Delete More? Y or N: ";
				char c;
				cin>>c;
				
				if (c=='y' || c=='Y')
				{
		     		system("cls");
					Delete_Account();
				}
				else
				{
					exit;
				}
		}
		
void Bank::CreateAccount()
{
char name[25];
char CNIC[15];
       cout<<"Enter Name: ";
       fflush(stdin);
       cin.getline(name,24);
       fflush(stdin);
       char pehlach = name[0];
       //to make it capital if it is small else janay do
       
       cout<<"Enter CNIC: ";
         fflush(stdin);
   cin.getline(CNIC,14);
   fflush(stdin);

if(pehlach>= 97 && pehlach <=122)
       {
      pehlach=pehlach-32;
       }
       
name[0]=pehlach;
       //to make filenamestart withcapital letter
switch(pehlach)
{
case 'A':
InsertA(name,CNIC);
break;

case 'B':
   InsertB(name,CNIC);
break;

case 'C':
InsertC(name,CNIC);
break;

case 'D':
   InsertD(name,CNIC);
break;

case 'E':
InsertE(name,CNIC);
break;

case 'F':
   InsertF(name,CNIC);
break;

case 'G':
InsertG(name,CNIC);
break;

case 'H':
   InsertH(name,CNIC);
break;

case 'I':
InsertI(name,CNIC);
break;

case 'J':
   InsertJ(name,CNIC);
break;

case 'K':
InsertK(name,CNIC);
break;

case 'L':
   InsertL(name,CNIC);
break;

case 'M':
InsertM(name,CNIC);
break;

case 'N':
   InsertN(name,CNIC);
break;

case 'O':
InsertO(name,CNIC);
break;

case 'P':
   InsertP(name,CNIC);
break;

case 'Q':
InsertQ(name,CNIC);
break;

case 'R':
   InsertR(name,CNIC);
break;

case 'S':
InsertS(name,CNIC);
break;

case 'T':
   InsertT(name,CNIC);
break;

case 'U':
InsertU(name,CNIC);
break;

case 'V':
   InsertV(name,CNIC);
break;

case 'W':
InsertW(name,CNIC);
break;
case 'X':
   InsertX(name,CNIC);
break;

case 'Y':
InsertY(name,CNIC);
break;
case 'Z':
   InsertZ(name,CNIC);
break;

default:
cout<<"Invalid!";
return;

}//switch case end

system("cls");
cout<<"Do You Want to Insert More? Y or N: ";
char c;
cin>>c;

if (c=='y' || c=='Y')
{
    system("cls");
CreateAccount();
}
else
{
exit;
}
   }
 		void Bank::Transaction()
        {
     	    gotoxy(45,0);
			char TransactionTime[]="Transaction Time";
			for(int j=0;j<sizeof(TransactionTime);j++)
            {
	            for(int i=0;i<1;i++)
	            {
	             	gotoxy(45+j,0);
	              	cout<<TransactionTime[j];
	                Sleep(20);
               }
         	}
         	
     	    cout<<endl;
	        char name[25];
			char CNIC[16];
	        cout<<"Enter Name: ";
	        fflush(stdin);
	        cin.getline(name,24);
	        fflush(stdin);
	        char pehlach = name[0];
	        //to make it capital if it is small else janay do
	        
	        cout<<"Enter CNIC: ";
     	    fflush(stdin);
		    cin.getline(CNIC,15);
	 	    fflush(stdin);
	 	 
			if(pehlach>= 97 && pehlach <=122)
	        { 
		       pehlach=pehlach-32;
	        }
	        
			name[0]=pehlach;
	        //to make filenamestart withcapital letter
			switch(pehlach)
			{
				case 'A':
					TransactionA(name,CNIC);
					break;
				case 'B':
					
				    TransactionB(name,CNIC);
					break;
					
				case 'C':
					TransactionC(name,CNIC);
					break;
					
				case 'D':
				   TransactionD(name,CNIC);
					break;
					
				case 'E':
				TransactionE(name,CNIC);
					break;
					
				case 'F':
				 TransactionF(name,CNIC);
					break;
					
				case 'G':
					TransactionG(name,CNIC);
					break;
					
				case 'H':
				    TransactionH(name,CNIC);
					break;
					
				case 'I':
					TransactionI(name,CNIC);
					break;
					
				case 'J':
				   TransactionJ(name,CNIC);
					break;
					
				case 'K':
					TransactionK(name,CNIC);
					break;
					
				case 'L':
				  TransactionL(name,CNIC);
					break;
					
				case 'M':
				TransactionM(name,CNIC);
					break;
					
				case 'N':
				  TransactionN(name,CNIC);
					break;
					
				case 'O':
				TransactionO(name,CNIC);
					break;
					
				case 'P':
				TransactionP(name,CNIC);
					break;
					
				case 'Q':
				TransactionQ(name,CNIC);
					break;
					
				case 'R':
				TransactionR(name,CNIC);
					break;
					
				case 'S':
				TransactionS(name,CNIC);
					break;
					
				case 'T':
				TransactionT(name,CNIC);
					break;
					
				case 'U':
				TransactionU(name,CNIC);
					break;
					
				case 'V':
				TransactionV(name,CNIC);
					break;
					
				case 'W':
				TransactionW(name,CNIC);
					break;
					
				case 'X':
				TransactionX(name,CNIC);
					break;
					
				case 'Y':
				TransactionY(name,CNIC);
					break;
					
				case 'Z':
				TransactionZ(name,CNIC);
					break;
				
				default:
				cout<<"Invalid!";
				return;	
				
				}//switch case end
				
				system("cls");
				cout<<"Do You Want to Transact More? Y or N: ";
				char c;
				cin>>c;
				 
				if (c=='y' || c=='Y')
				{
		     		system("cls");
					Transaction();
				}
				else
				{
					exit;
				}
   } 	
		
		void Bank::WithDraw()
        {
        	gotoxy(45,0);
			char WithDrawTime[]="WithDraw Time";
			for(int j=0;j<sizeof(WithDrawTime);j++)
            {
	            for(int i=0;i<1;i++)
	            {
	             	gotoxy(45+j,0);
	              	cout<<WithDrawTime[j];
	                Sleep(20);
               }
         	}
         	
     	    cout<<endl;
	        char name[25];
			char CNIC[15];
	        cout<<"Enter Name: ";
	        fflush(stdin);
	        cin.getline(name,24);
	        fflush(stdin);
	        char pehlach = name[0];
	        //to make it capital if it is small else janay do
	        
	        cout<<"Enter CNIC: ";
     	    fflush(stdin);
		    cin.getline(CNIC,14);
	 	    fflush(stdin);
	 	 
			if(pehlach>= 97 && pehlach <=122)
	        {
		       pehlach=pehlach-32;
	        }
	        
			name[0]=pehlach;
	        //to make filenamestart withcapital letter
	        //to make filenamestart withcapital letter
			switch(pehlach)
			{
				case 'A':
					WithDrawA(name,CNIC);
					break;
				case 'B':
					
				    WithDrawB(name,CNIC);
					break;
					
				case 'C':
					WithDrawC(name,CNIC);
					break;
					
				case 'D':
				   WithDrawD(name,CNIC);
					break;
					
				case 'E':
				WithDrawE(name,CNIC);
					break;
					
				case 'F':
				 WithDrawF(name,CNIC);
					break;
					
				case 'G':
					WithDrawG(name,CNIC);
					break;
					
				case 'H':
				    WithDrawH(name,CNIC);
					break;
					
				case 'I':
					WithDrawI(name,CNIC);
					break;
					
				case 'J':
				   WithDrawJ(name,CNIC);
					break;
					
				case 'K':
					WithDrawK(name,CNIC);
					break;
					
				case 'L':
				  WithDrawL(name,CNIC);
					break;
					
				case 'M':
				   WithDrawM(name,CNIC);
					break;
					
				case 'N':
				  WithDrawN(name,CNIC);
					break;
					
				case 'O':
				  WithDrawO(name,CNIC);
					break;
					
				case 'P':
				  WithDrawP(name,CNIC);
					break;
					
				case 'Q':
				WithDrawQ(name,CNIC);
					break;
					
				case 'R':
				WithDrawR(name,CNIC);
					break;
					
				case 'S':
				WithDrawS(name,CNIC);
					break;
					
				case 'T':
				WithDrawT(name,CNIC);
					break;
					
				case 'U':
				WithDrawU(name,CNIC);
					break;
					
				case 'V':
				WithDrawV(name,CNIC);
					break;
					
				case 'W':
				WithDrawW(name,CNIC);
					break;
					
				case 'X':
				WithDrawX(name,CNIC);
					break;
					
				case 'Y':
				WithDrawY(name,CNIC);
					break;
					
				case 'Z':
				WithDrawZ(name,CNIC);
					break;
				
				default:
				cout<<"Invalid!";
				return;	
				
				}//switch case end
				
				system("cls");
				cout<<"Do You Want to With Draw More? Y or N: ";
				char c;
				cin>>c;
				
				if (c=='y' || c=='Y')
				{
		     		system("cls");
					WithDraw();
				}
				else
				{
					exit;
				}
      } 
	  
	  void Bank::Display()
		{
			gotoxy(45,0);
			char DisplayTime[]="Display Time";
			for(int j=0;j<sizeof(DisplayTime);j++)
            {
	            for(int i=0;i<1;i++)
	            {
	             	gotoxy(45+j,0);
	              	cout<<DisplayTime[j];
	                Sleep(20);
               }
         	}
         	
     	    cout<<endl;
			char name[25];
			char CNIC[15];
	        cout<<"Enter Name: ";
	        fflush(stdin);
	        cin.getline(name,24);
	        fflush(stdin);
	        char pehlach = name[0];
	        //to make it capital if it is small else janay do
	        
	        cout<<"Enter CNIC: ";
     	    fflush(stdin);
		    cin.getline(CNIC,14);
	 	    fflush(stdin);
	 	 
			if(pehlach>= 97 && pehlach <=122)
	        {
		       pehlach=pehlach-32;
	        }
	        
			name[0]=pehlach;
	        //to make filenamestart withcapital letter
			switch(pehlach)
			{
				case 'A':
					DisplayA(name,CNIC);
					break;
				case 'B':
					
				    DisplayB(name,CNIC);
					break;
					
				case 'C':
					DisplayC(name,CNIC);
					break;
					
				case 'D':
				    DisplayD(name,CNIC);
					break;
					
				case 'E':
					DisplayE(name,CNIC);
					break;
					
				case 'F':
				    DisplayF(name,CNIC);
					break;
					
				case 'G':
					DisplayG(name,CNIC);
					break;
					
				case 'H':
				    DisplayH(name,CNIC);
					break;
					
				case 'I':
					DisplayI(name,CNIC);
					break;
					
				case 'J':
				    DisplayJ(name,CNIC);
					break;
					
				case 'K':
					DisplayK(name,CNIC);
					break;
					
				case 'L':
				    DisplayL(name,CNIC);
					break;
					
				case 'M':
					DisplayM(name,CNIC);
					break;
					
				case 'N':
				    DisplayN(name,CNIC);
					break;
					
				case 'O':
					DisplayO(name,CNIC);
					break;
					
				case 'P':
				    DisplayP(name,CNIC);
					break;
					
				case 'Q':
					DisplayQ(name,CNIC);
					break;
					
				case 'R':
				    DisplayR(name,CNIC);
					break;
					
				case 'S':
					DisplayS(name,CNIC);
					break;
					
				case 'T':
				    DisplayT(name,CNIC);
					break;
					
				case 'U':
					DisplayU(name,CNIC);
					break;
					
				case 'V':
				    DisplayV(name,CNIC);
					break;
					
				case 'W':
					DisplayW(name,CNIC);
					break;
				case 'X':
				   DisplayX(name,CNIC);
					break;
					
				case 'Y':
					DisplayY(name,CNIC);
					break;
				case 'Z':
				    DisplayZ(name,CNIC);
					break;
				
				default:
				cout<<"Invalid!";
				return;	
				
				}//switch case end
				
				system("cls");
				cout<<"Do You Want to Display More? Y or N: ";
				char c;
				cin>>c;
				
				if (c=='y' || c=='Y')
				{
		     		system("cls");
					Display();
				}
				else
				{
					exit;
				}
		    }
		
		void Bank::AtmServices()
		{
			gotoxy(45,0);
			char AtmTime[]="Atm Time";
			for(int j=0;j<sizeof(AtmTime);j++)
            {
	            for(int i=0;i<1;i++)
	            {
	             	gotoxy(45+j,0);
	              	cout<<AtmTime[j];
	                Sleep(20);
               }
         	}
         	
     	    cout<<endl;
			char name[25];
			char CNIC[15];
	        cout<<"Enter Name: ";
	        fflush(stdin);
	        cin.getline(name,24);
	        fflush(stdin);
	        char pehlach = name[0];
	        //to make it capital if it is small else janay do
	        
	        cout<<"Enter CNIC: ";
     	    fflush(stdin);
		    cin.getline(CNIC,14);
	 	    fflush(stdin);
	 	 
			if(pehlach>= 97 && pehlach <=122)
	        {
		       pehlach=pehlach-32;
	        }
	        
			name[0]=pehlach;
	        //to make filenamestart withcapital letter
			switch(pehlach)
			{
				case 'A':
				AtmA(name,CNIC);
					break;
				case 'B':
					
				AtmB(name,CNIC);
					break;
					
				case 'C':
					AtmC(name,CNIC);
					break;
					
				case 'D':
				    AtmD(name,CNIC);
					break;
					
				case 'E':
					AtmE(name,CNIC);
					break;
					
				case 'F':
				    AtmF(name,CNIC);
					break;
					
				case 'G':
				AtmG(name,CNIC);
					break;
					
				case 'H':
				 AtmH(name,CNIC);
					break;
					
				case 'I':
				AtmI(name,CNIC);
					break;
					
				case 'J':
				AtmJ(name,CNIC);
					break;
					
				case 'K':
					AtmK(name,CNIC);
					break;
					
				case 'L':
				    AtmL(name,CNIC);
					break;
					
				case 'M':
					AtmM(name,CNIC);
					break;
					
				case 'N':
				    AtmN(name,CNIC);
					break;
					
				case 'O':
				AtmO(name,CNIC);
					break;
					
				case 'P':
				AtmP(name,CNIC);
					break;
					
				case 'Q':
				AtmQ(name,CNIC);
					break;
					
				case 'R':
				  AtmR(name,CNIC);
					break;
					
				case 'S':
				AtmS(name,CNIC);
					break;
					
				case 'T':
				AtmT(name,CNIC);
					break;
					
				case 'U':
				AtmU(name,CNIC);
					break;
					
				case 'V':
				 AtmV(name,CNIC);
					break;
					
				case 'W':
				AtmW(name,CNIC);
					break;
				case 'X':
				 AtmX(name,CNIC);
					break;
					
				case 'Y':
				AtmY(name,CNIC);
					break;
				case 'Z':
				AtmZ(name,CNIC);
					break;
				
				default:
				cout<<"Invalid!";
				return;	
				
				}//switch case end
				
				system("cls");
				cout<<"Do You Want to Again Use Atm ? Y or N: ";
				char c;
				cin>>c;
				
				if (c=='y' || c=='Y')
				{
		     		system("cls");
					AtmServices();
				}
				else
				{
					exit ;
				}
		    }
				
	    void Bank::InsertA(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathA);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);


            temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
	 	    
	 	    
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		    cout<<"Enter Gender: ";
		    fflush(stdin);
	        cin.getline(temp->gender,20);
			fflush(stdin);
	      
		    cout<<"Enter City: ";
		    fflush(stdin);
		    cin.getline(temp->city,19);
		    fflush(stdin);
						
		    cout<<"Enter Country: ";
		    fflush(stdin);
		    cin.getline(temp->country,19);
		    fflush(stdin);
	 	  
	        cout<<"Enter Date of Birth: ";
	 	    fflush(stdin);
     	    cin.getline(temp->dateofbirth,14);
     	    fflush(stdin);
		 
		    Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
		   
		   cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
		   
		   temp->accno=AssignAccno();
		   //filing
		    File<<"First Name: "<<temp->Fname<<endl;
		    File<<"Account Number: "<<temp->accno;
		    File<<endl<<temp->atm;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;	
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		  	File.close();
		  		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}			
		}
		
		void Bank::InsertB(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathB);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 //filing
		    File<<"First Name: "<<temp->Fname<<endl;
		    File<<"Account Number: "<<temp->accno;
		    File<<endl<<temp->atm;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
	
		void Bank::InsertC(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	    	char temppath[100];
			strcpy(temppath,pathC);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
	    	
			cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
		   
		   cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		 temp->accno=AssignAccno();
		 //filing
		 	File<<"First Name: "<<temp->Fname<<endl;
		    File<<"Account Number: "<<temp->accno<<endl;
		    File<<temp->atm;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertD(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathD);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		  
		  Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
		   
		   cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
	     temp->accno=AssignAccno();
		 
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertE(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathE);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	        temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		 	File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		 	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertF(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathF);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertG(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathG);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
			File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertH(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathH);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	   
			 temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		    temp->accno=AssignAccno();
		    //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertI(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathI);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		    temp->accno=AssignAccno();
		   //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertJ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathJ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
	 	  temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		    File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertK(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathK);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	    
			 temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
			File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertL(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathL);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		    File<<endl<<"Created account with Rs: "<<temp->balance;
		   	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertM(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathM);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
			
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
	 	  temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertN(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathN);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
	 	  
	 	  temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertO(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathO);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertP(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathP);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);

	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
	 	  temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		 temp->accno=AssignAccno();
		    //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
		  	File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		 	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertQ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathQ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
		    temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		
		void Bank::InsertR(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathR);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		
		void Bank::InsertS(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathS);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
			
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertT(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathT);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		    File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  			  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertU(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathU);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
			
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
			  		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertV(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathV);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		    File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertW(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathW);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertX(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathX);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertY(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathY);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
			temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
			
		 temp->accno=AssignAccno();
		 //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::InsertZ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathZ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
			
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			strcpy(temp->Fname ,name);
			strcpy(temp->cnic ,CNIC);
	 	  
			cout<<"Enter Last Name :";
			fflush(stdin);
			cin.getline(temp->Lname,24);
			fflush(stdin);
			
	    	cout<<"Enter Number:";
			fflush(stdin);
	    	cin.getline(temp->number,14);
			fflush(stdin);
		    
		    temp->atm[0]='A';
	 	    temp->atm[1]='T';
	 	    temp->atm[2]='M';
	 	    temp->atm[3]=':';
	 	    
	 	    for(int i=4;i<15;i++)
	 	    {
	 	    	temp->atm[i]=temp->cnic[i];
			}
			
			cout<<"Enter Age: ";
			fflush(stdin);
	    	cin>>temp->age;	
	 		fflush(stdin);
	
		   cout<<"Enter Gender: ";
		   fflush(stdin);
	       cin.getline(temp->gender,20);
			fflush(stdin);
	      
		   cout<<"Enter City: ";
		  fflush(stdin);
		  cin.getline(temp->city,19);
		  fflush(stdin);
						
		  cout<<"Enter Country: ";
		  fflush(stdin);
		  cin.getline(temp->country,19);
		  fflush(stdin);
	 	  
	      cout<<"Enter Date of Birth: ";
	 	  fflush(stdin);
		  cin.getline(temp->dateofbirth,14);
		  fflush(stdin);
		 Dobara:
		    cout<<"Enter Amount: ";
			cin>>temp->balance;
			if(temp->balance<=500)
			{
				cout<<"Sorry Cant Transact! New Amount Please\n";
				goto Dobara;
			}
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
           time_t second;
           time(&second);
           cout<<("%s",ctime(&second));
           
		    temp->accno=AssignAccno();
		    //filing
		    File<<"Account Number: "<<temp->accno<<endl;
		     File<<temp->atm<<endl;
		    File<<"First Name: "<<temp->Fname;
		  	File<<endl<<"Last Name: "<<temp->Lname;
	 	 	File<<endl<<"Age: "<<temp->age;
	 	    File<<endl<<"Gender: "<<temp->gender;
		    File<<endl<<"Number: "<<temp->number;
	 	 	File<<endl<<"City: "<<temp->city;	
		    File<<endl<<"Country: "<<temp->country;
		   	File<<endl<<"Cnic: "<<temp->cnic;
		  	File<<endl<<"BirthDay: "<<temp->dateofbirth;
		  	File<<endl<<"Created account with Rs: "<<temp->balance;
			File<<endl<<"Account Created on: "<<ctime(&second);
		  	File<<endl;
		 	File.close(); 	
		  	
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			
			else
			{
				tail->next=temp;
				tail=temp;
			}
		}
		
		void Bank::TransactionA(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathA);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
			
		}
		
		void Bank::TransactionB(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathB);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
			
		}
		
		void Bank::TransactionC(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathC);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
			
		}
		
		void Bank::TransactionD(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathD);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
			
		}
		void Bank::TransactionE(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathE);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionF(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathF);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionG(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathG);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionH(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathH);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionI(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathI);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	       if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionJ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathJ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionK(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathK);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionL(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathL);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionM(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathM);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionN(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathN);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionO(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathO);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	       if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionP(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathP);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
			
		}
		
		void Bank::TransactionQ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathQ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionR(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathR);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionS(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathS);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionT(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathT);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionU(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathU);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionV(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathV);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	    
		}
		
		void Bank::TransactionW(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathW);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionX(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathX);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionY(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathY);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::TransactionZ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathZ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Transect: ";
			cin>>amount;
			
			temp->balance=prev+amount;
			
			cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"Transacted Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			}
	        
		}
		
		void Bank::WithDrawA(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathA);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawB(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathB);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
			
		}
		
		void Bank::WithDrawC(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathC);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawD(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathD);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawE(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathE);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawF(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathF);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawG(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathG);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawH(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathH);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	       if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawI(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathI);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount-500)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawJ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathJ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawK(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathK);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawL(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathL);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawM(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathM);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawN(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathN);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawO(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathO);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawP(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathP);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawQ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathQ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawR(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathR);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawS(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathS);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawT(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathT);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawU(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathU);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawV(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathV);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawW(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathW);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		void Bank::WithDrawX(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathX);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawY(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathY);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	       if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::WithDrawZ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathZ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(Check(path3)==true)
	        {
	        	 File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"\nPrevious Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To With Draw: ";
			cin>>amount;
			
			temp->balance=prev;
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
			}
	       
		}
		
		void Bank::DisplayA(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathA);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayB(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathB);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayC(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathC);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayD(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathD);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayE(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathE);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayF(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathF);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayG(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathG);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayH(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathH);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayI(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathI);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayJ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathJ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayK(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathK);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayL(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathL);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayM(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathM);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayN(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathN);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayO(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathO);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayP(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathP);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayQ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathQ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayR(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathR);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayS(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathS);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayT(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathT);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayU(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathU);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayV(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathV);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayW(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathW);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayX(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathX);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayY(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathY);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::DisplayZ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathZ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        Check(path3);
		}
		
		void Bank::AtmA(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathA);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;	
			}
			
		}
		
		void Bank::AtmB(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathB);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmC(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathC);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmD(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathD);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmE(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathE);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmF(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathF);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmG(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathG);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmH(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathH);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        	
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmI(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathI);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmJ(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathJ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
			Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmK(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathK);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmL(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathL);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmM(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathM);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}	
		}
		
		void Bank::AtmN(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathN);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmO(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathO);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmP(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathP);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmQ(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathQ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
			if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmR(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathR);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmS(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathS);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmT(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathT);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmU(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathU);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmV(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathV);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		void Bank::AtmW (char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathW);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmX(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathX);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmY(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathY);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
		
		void Bank::AtmZ(char name[],char CNIC[])
		{
			Customer *temp;
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
	        char temppath[100];
			strcpy(temppath,pathZ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        char atmno[20];
	        cout<<"Enter Atm Code:";
	        cin>>atmno;
	        if(CheckAtm(path3,atmno)==true)
	        {
	        Check(path3);
			File.open(path3,ios::app);
			Customer *temp=new Customer;
			temp->next=NULL;
			temp->prev=NULL;
			
			Dobara_Daal:
			int prev,amount;
			cout<<"Previous Balance: ";
			cin>>prev;
			
			cout<<"How Much Amount To Withdraw: ";
			cin>>amount;
			
		    temp->balance=prev;
			
				if((amount)<=prev-500)
			{
			temp->balance=prev-amount;
		    cout<<("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
            time_t second;
            time(&second);
            cout<<("%s",ctime(&second));
            
			File<<endl<<"Last Balance: "<<temp->balance;
			File<<endl<<"WithDrawl via ATm Rs "<<amount <<" on: "<<ctime(&second);
			File.close();
			
			}
			
			else
			{
				cout<<"Sorry We Cant WithDraw More than your Balance + 500rs! Enter New Amount"<<endl;
				goto Dobara_Daal;
			}
			
			}
			
			else
			{
				cout<<"Sorry ATM Number Not Found Please Come Again Later";
			}
			
			if(head==NULL)
			{
				head =temp;
				tail =temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
			}
			
		}
void Beautify()
{
	system("color f5");
	for(int i=0;i<119;i++)
	{
		cout<<"-";
		Sleep(6);
	}
	cout<<endl;
	for(int i=0;i<27;i++)
	{
		cout<<"|\n";
	    Sleep(6);
	}
	
	for(int i=0;i<119;i++)
	{
		cout<<"-";
      	Sleep(6);
	}
	cout<<endl;
	for(int i=1;i<28;i++)
	{
		gotoxy(119,i);
		cout<<"|";
	    Sleep(6);
	}
	
	//bms box
	system("color f4");
	for(int j=0;j<18;j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(51+j,5);
		cout<<"-";
	    Sleep(15);
 	  }
	}
	
	for(int j=0;j<18;j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(51+j,9);
		cout<<"-";
	    Sleep(15);
 	  }
	}
	
	for(int j=0;j<5;j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(52,5+j);
		cout<<"|";
	    Sleep(15);
 	  }
	}
	
	
	for(int j=0;j<5;j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(67,5+j);
		cout<<"|";
	    Sleep(15);
 	  }
	}
	//box end
	
	
	//bank management system display
	char bank[4]={'B','a','n','k'};	
	for(int j=0;j<4;j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(58+j,6);
		cout<<bank[j];
	    Sleep(20);
 	  }
	}
	
	char management[10]={'M','a','n','a','g','e','m','e','n','t'};
	for(int j=0;j<10;j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(55+j,7);
		cout<<management[j];
	    Sleep(20);
	  }
	}
	       
	char System[6]={'S','y','s','t','e','m'};
	for(int j=0;j<6;j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(57+j,8);
		cout<<System[j];
	    Sleep(20);
      }
 	}
   //bank management system display end
 	
   //Names display
   	       system("color f2");
	char Createdby[]={'C','r','e','a','t','e','d',' ','B','y'};
	for(int j=0;j<sizeof(Createdby);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(54+j,11);
		cout<<Createdby[j];
	    Sleep(20);
      }
 	}
 	char Name3[]={'S','y','e','d','S','a','a','d',' ',' ',' ',' ','k','1','9','-','0','2','0','9'};
 	for(int j=0;j<sizeof(Name3);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(50+j,12);
		cout<<Name3[j];
	    Sleep(20);
      }
 	}
 	
 	char Name1[]={'U','s','a','m','a','T','a','r','i','q',' ',' ',' ',' ','1','9','-','1','6','9','6'};
	for(int j=0;j<sizeof(Name1);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(50+j,13);
		cout<<Name1[j];
	    Sleep(20);
      }
 	}
	
	
 	char Name2[]={'A','m','a','n',' ',' ',' ','k','1','9','-','1','3','0','1'};
	for(int j=0;j<sizeof(Name2);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(50+j,14);
		cout<<Name2[j];
	    Sleep(20);
      }
 	}
 	
 	//Names Displayer End
 	
	//return yeha karao
	gotoxy(119,30);
}

void Bank::DeleteA(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathA);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        	//it displays all record
				Check(path3);
	        	remove(path3);
	        	cout<<"File SuccessFully Deleted!";
			}
			
		}
		
		void Bank::DeleteB(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathB);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        	Check(path3);
	        	remove(path3);
	        	cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteC(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathC);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        	Check(path3);
	        	remove(path3);
	        	cout<<"File SuccessFully Deleted!";
			}
			
		}
		
		void Bank::DeleteD(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathD);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteE(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathE);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteF(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathF);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteG(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathG);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		
		void Bank::DeleteH(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathH);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		
		void Bank::DeleteI(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathI);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteJ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathJ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteK(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathK);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        	Check(path3);
				remove(path3);
				cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteL(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathL);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		
		void Bank::DeleteM(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathM);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteN(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathN);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteO(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathO);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteP(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathP);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        	Check(path3);
				remove(path3);
				cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteQ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathQ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteR(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathR);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteS(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathS);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteT(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathT);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        	Check(path3);
	        	remove(path3);
	        	cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteU(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathU);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteV(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathV);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteW(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathW);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {	
			    Check(path3);
	        	remove(path3);
	        	cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteX(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathX);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteY(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathY);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		void Bank::DeleteZ(char name[],char CNIC[])
		{
			char Filename[100];
			strcpy(Filename,name);
			strcat(Filename,CNIC);
			
			char temppath[100];
			strcpy(temppath,pathZ);
	        char *path3=strcat(temppath,Filename);
	        path3=strcat(path3,extension);
	        
	        if(CheckAccount(path3)==true)
	        {
	        		Check(path3);
					remove(path3);
					cout<<"File SuccessFully Deleted!";
			}
			
		}
		
//Functions Definitions End
main()
{
	Bank b;//obj constructor called
	Beautify();	
	
	Menu:
	system("cls");
	char MenuDisplay[]="M E N U";
	char Question[]="What Do You Want To Do?";
	char create[]="1) Create Account";
	char transcat[]="2) Transaction";
    char withdraw[]="3) WithDraw";
	char display[]="4) Display";
	char atmservices[]="5) Atm Service";
	char DeleteAccounts[]="6) Delete Account";
	char End[]="7) Exit ";
	char c[]="Enter Your Choice:";
	
	
	for(int j=0;j<sizeof(MenuDisplay);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(53+j,8);
		cout<<MenuDisplay[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(Question);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,9);
		cout<<Question[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(create);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,10);
		cout<<create[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(transcat);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,11);
		cout<<transcat[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(withdraw);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,12);
		cout<<withdraw[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(display);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,13);
		cout<<display[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(atmservices);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,14);
		cout<<atmservices[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(DeleteAccounts);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,15);
		cout<<DeleteAccounts[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(End);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,16);
		cout<<End[j];
	    Sleep(15);
      }
 	}
 	
 	for(int j=0;j<sizeof(c);j++)
	{
	  for(int i=0;i<1;i++)
	  {
		gotoxy(45+j,17);
		cout<<c[j];
	    Sleep(15);
      }
 	}
 	

 	
	int choice;
	cin>>choice;
	
	choicesection:
	system("color f3");
	switch(choice)
	{
		case 1:
		system("cls");
		b.CreateAccount();
		break;
		
		case 2:
		system("cls");
		b.Transaction();
		break;
		
		case 3:
		system("cls");
		b.WithDraw();
		break;
		
		case 4:
		system("cls");
		b.Display();
		break;
		
		case 5:
		system("cls");
		b.AtmServices();
		break;
		
		case 6:
		system("cls");
		b.Delete_Account();
		break;
		
		case 7:
		system("cls");
		cout<<"Thank You!";
		return 0;
		
		default:
		system("cls");
		cout<<"Sorry Wrong Choice Enter Again!";
		cin>>choice;
		goto choicesection;
	}
	goto Menu;
					
}
