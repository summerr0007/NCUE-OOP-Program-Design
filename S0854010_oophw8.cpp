#include <bits\stdc++.h>
using namespace std;
//vscode
class filter
{
    private:
        string outname;
        string inname;
    public:
        void doFilter(ifstream &in ,  ofstream &out){
            char ch;
            while(in.get(ch)){
                out << transform(ch);
            }
        }
        virtual char transform(char ch)=0;

        
};

class encryption : public filter{
    private:
        
    public:
        char transform(char ch){
            if(ch != '\n' ){
                return ch+=1;
            }else
            {
                return ch;
            }                  
        }
};

class removal : public filter{
    private:
        
    public:
        char transform(char ch){
            if(ch == '\n'){
                return ' ';            
            }else{
                return ch;
            }
        }
};

class cop : public filter{
    private:
        
    public:
        char transform(char ch){
            return ch;
        }
};

class upper : public filter{
    private:
        
    public:
        char transform(char ch){
            return toupper(ch);
        }
};



int main(){
    ifstream file;
    ofstream ep("encryption.txt");
    ofstream r("removal.txt");
    ofstream coy("copy.txt");
    ofstream oup("upper.txt");
    removal re;
    encryption en;
    cop co;
    upper up;
    string n1;
    cout << "input file name"<<endl;
    cin >> n1;
    file.open(n1.c_str(),ios::in);
    
    while (!file)
    {
        cout << "error FileNotFound";
        cout << "input file name"<<endl;
        cin >> n1;
        file.open(n1.c_str(),ios::in);
    }
    en.doFilter(file,ep);
    file.clear();
    file.seekg(0,ios::beg);
    re.doFilter(file,r);
    file.clear();
    file.seekg(0,ios::beg);
    co.doFilter(file,coy);
    file.clear();
    file.seekg(0,ios::beg);
    up.doFilter(file,oup);
    file.clear();
    file.seekg(0,ios::beg);
    cout << "all done" <<endl;
    file.close();
    ep.close();
    r.close();
    coy.close();
    oup.close();
    cout << "press any key"<<endl;
    system("pause");

    return 0;

    
    
}
