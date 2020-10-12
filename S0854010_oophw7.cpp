#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Publication {
    private :
        string title;
        int volume;
        int year;
    public:
        string gettitle(){ return title; }
        int getvolume(){ return volume; }
        int getyear(){ return year;}
        void settitle(string t){ title = t; }
        void setvolume(int t){ volume = t;}
        void setyear(int t){ year = t;}
};

class book : public Publication{
    private:
        string author;
        string ISBN;
        int year;
        int price;
    public:
        string getauthor(){ return author; }
        string getISBN(){ return ISBN; }
        int getyear(){ return year; }
        int getprice(){ return price; }
        void setauthor( string t){ author =t;}
        void setISBN(string t){ISBN =t;}
        void setyear(int t){ year = t;}
        void setprice( int t ){ price = t;}
};

class journal : public Publication{
    private :
        int month ;
        string ISSN;
        int impactFactor;
        int annualSubscription;
    public:
        int getmonth(){ return month;}
        string getISSN(){ return ISSN;}
        int getimpactFactor(){ return impactFactor; }
        int getannualSubscription(){return annualSubscription;}
        void setmonth(int t){ month = t;}
        void setISSN (string t){ ISSN = t;}
        void setimpactFactor(int t){impactFactor =t;}
        void setannualSubscription(int t){annualSubscription =t ;}
};

class Magazine : public Publication{
    private : 
        int month;
        string editor;
        int annualSubscription;
    public:
        int getmonth(){ return month;}
        string geteditor(){return editor;}
        int getannualSubscription(){return annualSubscription;}
        void setmonth(int t){ month = t;}
        void seteditor(string t){editor =t;}
        void setannualSubscription(int t){annualSubscription =t ;}

};

int main(){
    vector <book> bk;
    vector <journal> jl;
    vector <Magazine> me;
    int i,ik;
    while (1)
    {
        cout << "��J�Ы�1" <<endl;
        cout << "��X�Ы�2" <<endl;
        cout << "���}�Ы���L��"<<endl;
        cout << ">>" ;
        cin  >> i;
        if(i == 1){
            cout << "�ѽЫ�1" <<endl;
            cout << "���Z�Ы�2" <<endl;
            cout << "���x�Ы�3" <<endl;
            cout << ">>" ;
            cin  >> ik;
            if(ik == 1){
                book tbk;
                int tint;
                string tstr;
                cout << "��J���D" <<endl;
                cin >> tstr;
                tbk.settitle(tstr);
                cout << "��J�w�s" <<endl;
                cin >> tint;
                tbk.setvolume(tint);
                cout << "��J�~��" <<endl;
                cin >> tint;
                tbk.setyear(tint);
                cout << "��J�@��" <<endl;
                cin >>tstr;
                tbk.setauthor(tstr);
                cout << "��JISBN" <<endl;
                cin >> tstr;
                tbk.setISBN(tstr);
                cout << "��J����" <<endl;
                cin >> tint;
                tbk.setprice(tint);
                bk.push_back(tbk);
            }else if(ik == 2){
                journal tjl;
                int tint;
                string tstr;
                cout << "��J���D" <<endl;
                cin >> tstr;
                tjl.settitle(tstr);
                cout << "��J�w�s" <<endl;
                cin >> tint;
                tjl.setvolume(tint);
                cout << "��J�~��" <<endl;
                cin >> tint;
                tjl.setyear(tint) ;
                cout << "��J���" <<endl;
                cin >> tint;
                tjl.setmonth(tint);  
                cout << "��JISSN" <<endl;
                cin >> tstr;
                tjl.setISSN(tstr);
                cout << "��J�v�T�]�l" <<endl;
                cin >> tint;
                tjl.setimpactFactor(tint);
                cout << "��J�~�׭q\�\\" << endl;
                cin >> tint;
                tjl.setannualSubscription(tint);
                jl.push_back(tjl);
            } else if (ik == 3){
                Magazine tme;
                int tint;
                string tstr;
                cout << "��J���D" <<endl;
                cin >> tstr;
                tme.settitle(tstr);
                cout << "��J�w�s" <<endl;
                cin >> tint;
                tme.setvolume(tint);
                cout << "��J�~��" <<endl;
                cin >> tint;
                tme.setyear(tint);   
                cout << "��J���" <<endl;
                cin >> tint;
                tme.setmonth(tint);  
                cout << "��J�@��" <<endl;
                cin >> tstr;
                tme.seteditor(tstr);
                cout << "��J�~�׭q\�\\" <<endl;
                cin >> tint;
                tme.setannualSubscription(tint);
                me.push_back(tme);
            }else{
                cout << "?";
                return 0;
            }
        }else if (i == 2){
            cout << "�ѽЫ�1" <<endl;
            cout << "���Z�Ы�2" <<endl;
            cout << "���x�Ы�3" <<endl;
            cout << ">>" ;
            cin  >> ik;
            if(ik == 1){     
                for(int j = 0 ;j < bk.size();j++){
                    cout << "���D" <<endl;
                    cout << bk[j].gettitle()<<endl;
                    cout << "�w�s" <<endl;
                    cout << bk[j].getvolume()<<endl;
                    cout << "�~��" <<endl;
                    cout << bk[j].getyear()<<endl;
                    cout << "�@��" <<endl;
                    cout << bk[j].getauthor()<<endl;
                    cout << "ISBN" <<endl;
                    cout << bk[j].getISBN()<<endl;
                    cout << "����" <<endl;
                    cout << bk[j].getprice()<<endl;
                    cout << "--------------------------------------------"<<endl;
                }       
                
                
            }else if(ik == 2){
                for (int j = 0; j < jl.size(); j++)
                {
                    cout << "���D" <<endl;
                    cout << jl[j].gettitle() <<endl;
                    cout << "�w�s" <<endl;
                    cout << jl[j].getvolume() <<endl;
                    cout << "�~��" <<endl;
                    cout << jl[j].getyear() <<endl;   
                    cout << "���" <<endl;
                    cout << jl[j].getmonth() <<endl;  
                    cout << "ISSN" <<endl;
                    cout << jl[j].getISSN() <<endl;
                    cout << "�v�T�]�l" <<endl;
                    cout << jl[j].getimpactFactor() <<endl;
                    cout << "�~�׭q\�\\" <<endl;
                    cout << jl[j].getannualSubscription() <<endl;
                    cout << "--------------------------------------------"<<endl;
                }
                
                
                
            } else if (ik == 3){
                for (int j = 0; j < jl.size(); j++){
                    cout << "���D" <<endl;
                    cout << me[j].gettitle() <<endl;
                    cout << "�w�s" <<endl;
                    cout << me[j].getvolume() <<endl;
                    cout << "�~��" <<endl;
                    cout << me[j].getyear() <<endl;   
                    cout << "���" <<endl;
                    cout << me[j].getmonth() <<endl;  
                    cout << "�@��" <<endl;
                    cout << me[j].geteditor() <<endl;
                    cout << " �~�׭q\�\\" <<endl;
                    cout << me[j].getannualSubscription() <<endl;
                    cout << "--------------------------------------------"<<endl;
                }
                
                
            }else{
                cout << "?";
                return 0;
            }
        }else{
            cout << "bye";
            return 0;
        }
    }
    
}
