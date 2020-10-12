#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class ServiceQuote
{

    double partsCharges;
    double laborCharges;
    double salesTax;
    public:
    ServiceQuote();
    void setPartsCharges(double);
    void setLaborCharges(double);
    double getPartsCharges();
    double getLaborCsdharges();
    double getSalesTax();
    double getTotalCharges();
};
class Customer
{

    string name;
    string address;
    int phone;
    public:
    Customer();
    void setName(string);
    void setAddress(string);
    void setPhone(int);
    string getName();
    string getAddress();
    int getPhone();
};
class Car
{

    string make;
    string model;
    int year;
    public:
    Car();
    void setMake(string);
    void setModel(string);
    void setYear(int);
    string getMake();
    string getModel();
    int getYear();
};

struct shopdata
{
    Car car;
    Customer customer;
    ServiceQuote serviceQuote;
    int date;
    string ddid;
};

Car::Car()
{
    make = "";
    model = "";
    year = 0;
}
void Car::setMake(string x)
{
    make = x;
}
void Car::setModel(string x)
{
    model = x;
}
void Car::setYear(int x)
{
    year = x;
}
string Car::getMake()
{
    return make;
}
string Car::getModel()
{
    return model;
}
int Car::getYear()
{
    return year;
}

Customer::Customer()
{
    name = "";
    address = "";
    phone = 0;
}

void Customer::setName(string input)
{
    name = input;
}

void Customer::setAddress(string input)
{
    address = input;
}

void Customer::setPhone(int input)
{
    phone = input;
}

string Customer::getName()
{
    return name;
}

string Customer::getAddress()
{
    return address;
}

int Customer::getPhone()
{
    return phone;
}

ServiceQuote::ServiceQuote()
{
    partsCharges = 0;
    laborCharges = 0;
    salesTax = 50;
}
void ServiceQuote::setPartsCharges(double x)
{
    partsCharges = x;
}

void ServiceQuote::setLaborCharges(double input)
{
    laborCharges = input;
}
double ServiceQuote::getPartsCharges()
{
    return partsCharges;
}
double ServiceQuote::getLaborCsdharges()
{
    return laborCharges;
}
double ServiceQuote::getSalesTax()
{
    return salesTax;
}
double ServiceQuote::getTotalCharges()
{
    return (partsCharges + laborCharges) * salesTax;
}

vector<shopdata> da;

shopdata newdata(int i)
{
    double intemp;
    shopdata shtemp;
    string strtemp;
    cout << "請輸入日期 例 20200909" << endl;
    cin >> intemp;
    shtemp.date = intemp;
    cout << "請輸入顧客姓名 " << endl;
    cin >> strtemp;
    shtemp.customer.setName(strtemp);
    cout << "請輸入顧客地址 " << endl;
    cin >> strtemp;
    shtemp.customer.setAddress(strtemp);
    cout << "請輸入顧客電話 " << endl;
    cin >> intemp;

    shtemp.customer.setPhone(intemp);
    cout << "請輸入汽車服務 " << endl;
    cin >> strtemp;
    shtemp.car.setMake(strtemp);
    cout << "請輸入汽車型號 " << endl;
    cin >> strtemp;
    shtemp.car.setModel(strtemp);
    cout << "請輸入汽車年分 " << endl;
    cin >> intemp;
    shtemp.car.setYear(intemp);

    cout << "請輸入零件費 " << endl;
    cin >> intemp;
    shtemp.serviceQuote.setPartsCharges(intemp);
    cout << "請輸入人工費 " << endl;
    cin >> intemp;
    shtemp.serviceQuote.setLaborCharges(intemp);
    shtemp.ddid =to_string(i);
    return shtemp;
}

void output()
{
    cout << "----------------------------------------------------------------------------------------------------" <<endl;
    cout << " ddid | 日期 | 姓名 | 地址 | 電話 | 修理部分 | 車型 | 年分 | 人工費 | 零件費 | 稅金" << endl;
    cout << "----------------------------------------------------------------------------------------------------" <<endl;

}
void oput(int j){
    cout << da[j].ddid << " | " << da[j].date << " | " << da[j].customer.getName()<< " | " <<da[j].customer.getAddress()<< " | " <<da[j].customer.getPhone() << " | " << da[j].car.getMake() << " | " << da[j].car.getModel() << " | " << da[j].car.getYear() << " | " << da[j].serviceQuote.getPartsCharges() << " | " << da[j].serviceQuote.getLaborCsdharges() << " | " << da[j].serviceQuote.getSalesTax()<<endl;
}


int main()
{
    int in, ddid = 0;
    string strin;
    while (1)
    {
        cout << "新增估價單請按1" << endl;
        cout << "查詢估價單請按2" << endl;
        cout << "列出所有估價單請按3" << endl;
        cout << "刪除估價單請按4" << endl;
        cout << "離開程式請按0" << endl;
        cout << "請輸入 >> " << endl;
        cin >> in;
        if (in == 0)
        {
            return 0;
        }
        else if (in == 1)
        {
            da.push_back(newdata(ddid));
            ddid++;
        }
        else if (in == 2)
        {
            cout << "姓名查詢請按1" << endl;
            cout << "日期查詢請按2" << endl;
            cout << "ddid查詢請按3" << endl;
            cout << "請輸入 >> " << endl;
            cin >> in;
            if (da.size() == 0)
            {
                cout << "沒有資料" << endl;
            }
            cout << "請輸入查詢資料 >> " << endl;
            cin >> strin;
            output();
            if (in == 1)
            {
                for (int j = 0; j < da.size(); j++)
                {

                    if (da[j].customer.getName() == strin)
                    {
                        oput(j);
                    }
                }
            }
            else if (in == 2)
            {
                for (int j = 0; j < da.size(); j++)
                {

                    if (da[j].date == stoi(strin) )
                    {
                        oput(j);
                    }
                }
            }
            else if (in == 3)
            {
                for (int j = 0; j < da.size(); j++)
                {

                    if (da[j].ddid == strin )
                    {
                        oput(j);
                    }
                }
            }
        }
        else if (in == 3)
        {
            output();
            for (int j = 0; j < da.size(); j++)
            {
                oput(j);
            }
        }
        else if (in == 4)
        {
            cout << "請輸入要刪除的ddid(請先查詢) >> " <<endl;
            cin >>strin;
            vector<shopdata>::iterator dait;
            for (dait = da.begin(); dait != da.end(); dait++)
                {
                    if (dait->ddid == strin )
                    {
                        da.erase(dait);
                    }
                }
        }
    }
}