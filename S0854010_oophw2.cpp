#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Stu{
	string name;
	int sc;
};
bool cmp(Stu s1,Stu s2){
	if(s1.sc < s2.sc){
		return true;		
	}else{
		return false;
	}
}
int main(){
	Stu *stu;
	int in,sum=0,w;
	cout << "�X��ǥ� :";
	cin >>in;
	stu = new Stu[in];
	cout << "��J�m�W�P����:"<<endl;
	for(int i =0;i<in;i++){
		cin >> (*(stu+i)).name >> w;
		if(w<0){
			cout << "���Ƥ���O�t��"<<endl;
			exit(0);
		}
		(*(stu+i)).sc = w;
		sum+=(*(stu+i)).sc;
	}
	sort(stu,stu+in,cmp);
	for(int i =0;i<in;i++){
		cout << (*(stu+i)).name <<" "<< (*(stu+i)).sc << endl;
	}
	cout << "��������:"<<(float)sum/in;
} 
