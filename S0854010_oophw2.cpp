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
	cout << "幾位學生 :";
	cin >>in;
	stu = new Stu[in];
	cout << "輸入姓名與分數:"<<endl;
	for(int i =0;i<in;i++){
		cin >> (*(stu+i)).name >> w;
		if(w<0){
			cout << "分數不能是負的"<<endl;
			exit(0);
		}
		(*(stu+i)).sc = w;
		sum+=(*(stu+i)).sc;
	}
	sort(stu,stu+in,cmp);
	for(int i =0;i<in;i++){
		cout << (*(stu+i)).name <<" "<< (*(stu+i)).sc << endl;
	}
	cout << "平均分為:"<<(float)sum/in;
} 
