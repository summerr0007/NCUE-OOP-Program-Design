#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class heading{
	public:
		string company_name;
		string report_name;
		void print_one(){
			cout << company_name<< " "<< report_name<<endl;
		}
		void print_four(){		
			for(int i=0;i<46;i++){
				cout <<"*";
			}
			cout << endl;
			cout <<setw(23+(company_name.size()/2))<<company_name<<endl;
			cout <<setw(23+(report_name.size()/2))<<report_name<<endl;
			for(int i=0;i<46;i++){
				cout <<"*";
			}
			cout << endl;
		}
		heading(string c= "ABC Industries",string r="report" ){
			company_name=c;
			report_name=r;
		}
				
};
int main (){
	string con ,in;
	heading h;
	cout << "���Orname�ק�report_name"<<endl;
	cout << "���Ocname�ק�company_name"<<endl;
	cout << "���Oprint�C�L one ���@�櫬��"<<endl;
	cout << "���Oprint�C�L four���|�櫬��"<<endl;
	while(cin >>con >> in){
		if(con == "rname"){
			h.report_name = in;
		}else if(con == "cname"){
			h.company_name = in ;
		}else if(con == "print" ){
			if(in == "one"){
				h.print_one();	
			}else if (in == "four"){
				h.print_four();
			}else{
				cout << "?" <<endl;
			}
		}else{
			cout << "?" <<endl;
		}
	}
	return 0;
}

