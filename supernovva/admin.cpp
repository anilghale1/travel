#include<iostream>
#include<cstdio>
#include<cstring>
#include<fstream>

 using namespace std;

class Login
{
    public:
	void adminlogin();	
};
void Login:: adminlogin()
{
  int amt1,amt2;
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       TRAVEL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t    ADMIN LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   cin>>pass;
//   ch = getchar();
//   while(ch != 13){
//      pass.push_back(ch);
//      cout << '*';
//      ch = getchar();
//   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n"<<endl;
//      Login qr[5];
      ofstream fouts;
      fouts.open("mind.txt");
      cout<<"Enter amount for pokhara : "<<endl;
      cin>>amt1;
      fouts<<amt1;
      //fouts.close();
      ofstream fouts2;
      fouts2.open("mind2.txt");
      cout<<"Enter amount for Mustang : "<<endl;
      cin>>amt2;
      fouts2<<amt2;
//      for(int i=0;i<5;i++)
//      {
//	  
//      cout<<"Enter amount for "<<i+1<<endl;
//      cin>>qr[i].amounts;
//  }
//      fouts.write((char *)&qr,sizeof(qr));
      fouts.close();
      //fouts<<amounts;
  
      getchar();
      
//      getchar();
//      logfunc();
      
     
   }
   else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
   }
   
}
int main()
{
	Login object;
	object.adminlogin();
	return 0;
}

