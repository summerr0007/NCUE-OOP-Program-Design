#include <iostream>
using namespace std;
double in[4]={-1.01,-1.01,-1.01,-1.01};
bool e = 0;
char l;
int patient(double med,double ser,double rate,double day){
	cout << med+ser+day*rate << endl;
}
int patient(double med,double ser){
	cout << med+ser<< endl;
}
void uz(){
	for(int i = 0 ;i < 4;i++){
		if(in[i] < 0 && in[i] != -1.01 ){
			cout << "error";			
		}else if (in[i] == -1.01 && i > 1){
			e = 1;
		}else{
			e = 0;
		}
	}  
	if (e){
		patient(in[0],in[1]);
	}else{
		patient(in[0],in[1],in[2],in[3]);
	}
}
int main (){
	cout << "�Ш� �ĶO �A�ȶO ��O�� ��|��� ���ǿ�J�åΪťչj�}" <<endl;
	cout << "�p�G��J�����Ы�ENTER�S����|�п�J�ĶO�P�A�ȶO���ENTER"<<endl; 
	int i = 0;
	while(1){
		if(l != '\n'){
			cin >> in[i];
			cin.get(l);			
			i++;
		}else{
			break;
		}		
	}
	uz();
	//cout << in[0] << in[1] << in[2] << in[3];
	
}

