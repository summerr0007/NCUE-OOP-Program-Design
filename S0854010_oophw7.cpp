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
        cout << "輸入請按1" <<endl;
        cout << "輸出請按2" <<endl;
        cout << "離開請按其他鍵"<<endl;
        cout << ">>" ;
        cin  >> i;
        if(i == 1){
            cout << "書請按1" <<endl;
            cout << "期刊請按2" <<endl;
            cout << "雜誌請按3" <<endl;
            cout << ">>" ;
            cin  >> ik;
            if(ik == 1){
                book tbk;
                int tint;
                string tstr;
                cout << "輸入標題" <<endl;
                cin >> tstr;
                tbk.settitle(tstr);
                cout << "輸入庫存" <<endl;
                cin >> tint;
                tbk.setvolume(tint);
                cout << "輸入年分" <<endl;
                cin >> tint;
                tbk.setyear(tint);
                cout << "輸入作者" <<endl;
                cin >>tstr;
                tbk.setauthor(tstr);
                cout << "輸入ISBN" <<endl;
                cin >> tstr;
                tbk.setISBN(tstr);
                cout << "輸入價格" <<endl;
                cin >> tint;
                tbk.setprice(tint);
                bk.push_back(tbk);
            }else if(ik == 2){
                journal tjl;
                int tint;
                string tstr;
                cout << "輸入標題" <<endl;
                cin >> tstr;
                tjl.settitle(tstr);
                cout << "輸入庫存" <<endl;
                cin >> tint;
                tjl.setvolume(tint);
                cout << "輸入年分" <<endl;
                cin >> tint;
                tjl.setyear(tint) ;
                cout << "輸入月份" <<endl;
                cin >> tint;
                tjl.setmonth(tint);  
                cout << "輸入ISSN" <<endl;
                cin >> tstr;
                tjl.setISSN(tstr);
                cout << "輸入影響因子" <<endl;
                cin >> tint;
                tjl.setimpactFactor(tint);
                cout << "輸入年度訂\閱\" << endl;
                cin >> tint;
                tjl.setannualSubscription(tint);
                jl.push_back(tjl);
            } else if (ik == 3){
                Magazine tme;
                int tint;
                string tstr;
                cout << "輸入標題" <<endl;
                cin >> tstr;
                tme.settitle(tstr);
                cout << "輸入庫存" <<endl;
                cin >> tint;
                tme.setvolume(tint);
                cout << "輸入年分" <<endl;
                cin >> tint;
                tme.setyear(tint);   
                cout << "輸入月份" <<endl;
                cin >> tint;
                tme.setmonth(tint);  
                cout << "輸入作者" <<endl;
                cin >> tstr;
                tme.seteditor(tstr);
                cout << "輸入年度訂\閱\" <<endl;
                cin >> tint;
                tme.setannualSubscription(tint);
                me.push_back(tme);
            }else{
                cout << "?";
                return 0;
            }
        }else if (i == 2){
            cout << "書請按1" <<endl;
            cout << "期刊請按2" <<endl;
            cout << "雜誌請按3" <<endl;
            cout << ">>" ;
            cin  >> ik;
            if(ik == 1){     
                for(int j = 0 ;j < bk.size();j++){
                    cout << "標題" <<endl;
                    cout << bk[j].gettitle()<<endl;
                    cout << "庫存" <<endl;
                    cout << bk[j].getvolume()<<endl;
                    cout << "年分" <<endl;
                    cout << bk[j].getyear()<<endl;
                    cout << "作者" <<endl;
                    cout << bk[j].getauthor()<<endl;
                    cout << "ISBN" <<endl;
                    cout << bk[j].getISBN()<<endl;
                    cout << "價格" <<endl;
                    cout << bk[j].getprice()<<endl;
                    cout << "--------------------------------------------"<<endl;
                }       
                
                
            }else if(ik == 2){
                for (int j = 0; j < jl.size(); j++)
                {
                    cout << "標題" <<endl;
                    cout << jl[j].gettitle() <<endl;
                    cout << "庫存" <<endl;
                    cout << jl[j].getvolume() <<endl;
                    cout << "年分" <<endl;
                    cout << jl[j].getyear() <<endl;   
                    cout << "月份" <<endl;
                    cout << jl[j].getmonth() <<endl;  
                    cout << "ISSN" <<endl;
                    cout << jl[j].getISSN() <<endl;
                    cout << "影響因子" <<endl;
                    cout << jl[j].getimpactFactor() <<endl;
                    cout << "年度訂\閱\" <<endl;
                    cout << jl[j].getannualSubscription() <<endl;
                    cout << "--------------------------------------------"<<endl;
                }
                
                
                
            } else if (ik == 3){
                for (int j = 0; j < jl.size(); j++){
                    cout << "標題" <<endl;
                    cout << me[j].gettitle() <<endl;
                    cout << "庫存" <<endl;
                    cout << me[j].getvolume() <<endl;
                    cout << "年分" <<endl;
                    cout << me[j].getyear() <<endl;   
                    cout << "月份" <<endl;
                    cout << me[j].getmonth() <<endl;  
                    cout << "作者" <<endl;
                    cout << me[j].geteditor() <<endl;
                    cout << " 年度訂\閱\" <<endl;
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
