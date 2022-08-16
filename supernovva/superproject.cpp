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
  int amt1,amt2,amt3,amt4,amt5,amt6,amt7;
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
      fouts.close();
      
	  ofstream fouts2;
      fouts2.open("mind2.txt");
      cout<<"Enter amount for Mustang : "<<endl;
      cin>>amt2;
      fouts2<<amt2;
      fouts2.close();
      
      ofstream fouts3;
      fouts3.open("mind3.txt");
      cout<<"Enter amount for Lumbini : "<<endl;
      cin>>amt3;
      fouts3<<amt3;
      fouts3.close();
      
      ofstream fouts4;
      fouts4.open("mind4.txt");
      cout<<"Enter amount for Kathmandu : "<<endl;
      cin>>amt4;
      fouts4<<amt4;
      fouts4.close();
      
      ofstream fouts5;
      fouts5.open("mind5.txt");
      cout<<"Enter amount for Solukhumbu : "<<endl;
      cin>>amt5;
      fouts5<<amt5;
      fouts5.close();
      
      ofstream fouts6;
      fouts6.open("mind6.txt");
      cout<<"Enter amount for Chitwan : "<<endl;
      cin>>amt6;
      fouts6<<amt6;
      fouts6.close();
      
      
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

