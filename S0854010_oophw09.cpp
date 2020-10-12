#include <bits\stdc++.h>
using namespace std;
int main(){
    ifstream file;
    ofstream out;
    string st;
    int num=0;
    cout << "input file name" << endl;
    cin >> st;
    file.open(st.c_str(),ios::in);
    out.open("output.txt",ios::out);
    while (!file)
    {
        cout << "error FileNotFound"<< endl;
        cout << "input file name"<<endl;
        cin >> st;
        file.open(st.c_str(),ios::in);
    }
    cout << "output file output.txt" << endl; 
    while (!file.eof())
    {
        file >> st;
        if(st.size() >= 8 && st.size() <= 15) {
            out << st <<" "<< st.size()<<endl;
            num++;
        }
        
    }
    out << num << endl;
    cout << "all done" << endl;
    system("pause");
}