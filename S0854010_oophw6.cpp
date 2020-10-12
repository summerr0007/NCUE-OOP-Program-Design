#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Publication {
    public :
        string title;
        int volume;
        int year;
};

class book : public Publication{
    public:
        string author;
        string ISBN;
        int year;
        int price;
};

class journal : public Publication{
    public :
        int month ;
        string ISSN;
        int impactFactor;
        int annualSubscription;
};

class Magazine : public Publication{
    public : 
        int month;
        string editor;
        int annualSubscription;

};

int main(){
    vector <book> bk;
    vector <journal> jl;
    vector <Magazine> me;
    int i,ik;
    string tsr;
    int ti;
    cout << "輸入請按1" <<endl;
    cout << "輸出請按2" <<endl;
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
            cout << "輸入標題" <<endl;
            cin >> tbk.title;
            cout << "輸入庫存" <<endl;
            cin >> tbk.volume;
            cout << "輸入年分" <<endl;
            cin >> tbk.year;
            cout << "輸入作者" <<endl;
            cin >> tbk.author;
            cout << "輸入ISBN" <<endl;
            cin >> tbk.ISBN;
            cout << "輸入價格" <<endl;
            cin >> tbk.price;
            bk.push_back(tbk);
        }else if(ik == 2){
            journal tjl;
            cout << "輸入標題" <<endl;
            cin >> tjl.title;
            cout << "輸入庫存" <<endl;
            cin >> tjl.volume;
            cout << "輸入年分" <<endl;
            cin >> tjl.year;   
            cout << "輸入月份" <<endl;
            cin >> tjl.month;  
            cout << "輸入ISSN" <<endl;
            cin >> tjl.ISSN;
            cout << "輸入影響因子" <<endl;
            cin >> tjl.impactFactor;
            cout << "輸入年度訂閱" <<endl;
            cin >> tjl.annualSubscription;
            jl.push_back(tjl);
        } else if (ik == 3){
            Magazine tme;
            cout << "輸入標題" <<endl;
            cin >> tme.title;
            cout << "輸入庫存" <<endl;
            cin >> tme.volume;
            cout << "輸入年分" <<endl;
            cin >> tme.year;   
            cout << "輸入月份" <<endl;
            cin >> tme.month;  
            cout << "輸入作者" <<endl;
            cin >> tme.editor;
            cout << "輸入年度訂閱" <<endl;
            cin >> tme.annualSubscription;
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
                cout << bk[j].title<<endl;
                cout << "輸入庫存" <<endl;
                cout << bk[j].volume<<endl;
                cout << "輸入年分" <<endl;
                cout << bk[j].year<<endl;
                cout << "輸入作者" <<endl;
                cout << bk[j].author<<endl;
                cout << "輸入ISBN" <<endl;
                cout << bk[j].ISBN<<endl;
                cout << "輸入價格" <<endl;
                cout << bk[j].price<<endl;
                cout << "--------------------------------------------";
            }       
            
            
        }else if(ik == 2){
            for (int j = 0; j < jl.size(); j++)
            {
                cout << "輸入標題" <<endl;
                cout << jl[j].title <<endl;
                cout << "輸入庫存" <<endl;
                cout << jl[j].volume <<endl;
                cout << "輸入年分" <<endl;
                cout << jl[j].year <<endl;   
                cout << "輸入月份" <<endl;
                cout << jl[j].month <<endl;  
                cout << "輸入ISSN" <<endl;
                cout << jl[j].ISSN <<endl;
                cout << "輸入影響因子" <<endl;
                cout << jl[j].impactFactor <<endl;
                cout << "輸入年度訂閱" <<endl;
                cout << jl[j].annualSubscription <<endl;
                cout << "--------------------------------------------";
            }
            
            
            
        } else if (ik == 3){
            for (int j = 0; j < jl.size(); j++){
                cout << "輸入標題" <<endl;
                cout << me[j].title <<endl;
                cout << "輸入庫存" <<endl;
                cout << me[j].volume <<endl;
                cout << "輸入年分" <<endl;
                cout << me[j].year <<endl;   
                cout << "輸入月份" <<endl;
                cout << me[j].month <<endl;  
                cout << "輸入作者" <<endl;
                cout << me[j].editor <<endl;
                cout << "輸入年度訂閱" <<endl;
                cout << me[j].annualSubscription <<endl;
                cout << "--------------------------------------------";
            }
            
            
        }else{
            cout << "?";
            return 0;
        }
    }else{
        cout << "?";
        return 0;
    }
}