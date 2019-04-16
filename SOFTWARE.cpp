#include <iostream>
#include <windows.h>
using namespace std;
class Machine{
	protected:
		int temperature;
		int RPM;
	    int time;
	    int ch;
	public:
	Machine():temperature(50),RPM(1000),time(60){};
      void DisplayInfoo(){
	  	cout<<"Temperature -> "<<temperature<<endl;
	  	cout<<"RPM -> "<<RPM<<endl;
	  	cout<<"TIME -> "<<time<<endl;
	  }	
	void ChooseRPM(){
		
		
		cout<<" [1]- 500"<<endl;
		cout<<" [2]- 600"<<endl;
		cout<<" [3]- 700"<<endl;
		cout<<" [4]- 800"<<endl;
		cout<<" [5]- 900"<<endl;
		cout<<" [6]- 1000"<<endl;
		cout<<" [7]- 1100"<<endl;
		cout<<" [8]- 1200"<<endl;
		cout<<" [9]- 1300"<<endl;
		cout<<" [10]-1400"<<endl;
		cout<<"Choose RPM : ";
		cin>>RPM;
		switch(RPM){
			system("cls");
			case 1:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
			case 2:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
			case 3:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
			case 4:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
			case 5:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
			case 6:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
			case 7:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
				case 8:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
				case 9:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running"<<endl;
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry..";
				Sleep(1500);
				break;
			    case 10:
				system("cls");
				cout<<"RPM = "<<RPM<<endl;
				cout<<"Door cloosing"<<endl;
				Sleep(2000);
				cout<<"Program Running";
				Sleep(5000);
				cout<<"Program Finised"<<endl;
				Sleep(1500);
				cout<<"Remove your laundry.."<<endl;
				Sleep(1500);
				break;
			
			default:
				cout<<"Wrong Chosen"<<"Choose Again"<<endl<<endl;
		}

	}
	
};
class Silk:public Machine{
	int temperature,time;
	public:
	Silk():temperature(40),time(45){};
	 void DisplayInfo1(){
	  	cout<<endl;
	  	cout<<"--------------------"<<endl;
		cout<<"Temperature -> "<<temperature<<endl;
	  	cout<<"TIME -> "<<time<<endl;
	  	cout<<"--------------------"<<endl;
	  }
};
class Colors:public Machine{
	int temperature,time;
	public:
	 Colors():temperature(45),time(55){};
        void DisplayInfo2(){
	  	cout<<"Temperature -> "<<temperature<<endl;
	  	cout<<"TIME -> "<<time<<endl;
	  }	
};
class Cotton:public Machine{
	int temperature,time;
	public:
	Cotton():temperature(60),time(60){};
	void DisplayInfo3(){
	  	cout<<"Temperature -> "<<temperature<<endl;
	  	cout<<"TIME -> "<<time<<endl;
	  }	
};

class Towel:public Machine {
	int temperature,time;
	public:
	Towel():temperature(45),time(45){};
	 void DisplayInfo4(){
	  	cout<<"Temperature -> "<<temperature<<endl;
	  	cout<<"TIME -> "<<time<<endl;
	  }	
};
class Jeans:public Machine{
	int temperature,time;
	public:
	Jeans():temperature(45),time(48){};
	 void DisplayInfo5(){
	  	cout<<"Temperature -> "<<temperature<<endl;
	  	cout<<"TIME -> "<<time<<endl;
	  }	
};
class BoilerCleaning:public Machine{
};
int main(){
system("color 2");
Silk S;
Colors C;
Cotton C1;
Towel T;
Jeans J;
BoilerCleaning BC;	
int selection;	
while(true){
system("cls");
cout<<endl;	
cout<<"       MENU OF WASHER       "<<endl<<endl;
cout<<"  [1] - SILK "<<endl;
cout<<"  [2] - COLORS"<<endl;	
cout<<"  [3] - COTTON"<<endl;	
cout<<"  [4] - TOWEL"<<endl;
cout<<"  [5] - JEANS"<<endl;
cout<<"  [6] - BOILER CLEANING"<<endl<<endl;


cout<<" Please , Choose a program = ";
cin>>selection;	
switch(selection){
	case 1:
	system("cls");
	S.DisplayInfo1();
	S.ChooseRPM();
	break;
	case 2:
	system("cls");
	C.DisplayInfo2();
	C.ChooseRPM();
	break;
	case 3:
	system("cls");
	C1.DisplayInfo3();
	C.ChooseRPM();
	break;
	case 4:
	system("cls");
	T.DisplayInfo4();
	T.ChooseRPM();
	break;
	case 5:
	system("cls");
	J.DisplayInfo5();
	J.ChooseRPM();
	break;
	case 6:
	BC.DisplayInfoo();	
    cout<<"It will take 60 minutes"<<endl;
    BC.DisplayInfoo();
    Sleep(10000);
	cout<<"Program Finished"; 
    break;
	default:
	cout<<"wrong chosen";
	
	system("cls");
	break;	}}	
	return 0;}
