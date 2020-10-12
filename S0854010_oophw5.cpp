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
    cout << "�п�J��� �� 20200909" << endl;
    cin >> intemp;
    shtemp.date = intemp;
    cout << "�п�J�U�ȩm�W " << endl;
    cin >> strtemp;
    shtemp.customer.setName(strtemp);
    cout << "�п�J�U�Ȧa�} " << endl;
    cin >> strtemp;
    shtemp.customer.setAddress(strtemp);
    cout << "�п�J�U�ȹq�� " << endl;
    cin >> intemp;

    shtemp.customer.setPhone(intemp);
    cout << "�п�J�T���A�� " << endl;
    cin >> strtemp;
    shtemp.car.setMake(strtemp);
    cout << "�п�J�T������ " << endl;
    cin >> strtemp;
    shtemp.car.setModel(strtemp);
    cout << "�п�J�T���~�� " << endl;
    cin >> intemp;
    shtemp.car.setYear(intemp);

    cout << "�п�J�s��O " << endl;
    cin >> intemp;
    shtemp.serviceQuote.setPartsCharges(intemp);
    cout << "�п�J�H�u�O " << endl;
    cin >> intemp;
    shtemp.serviceQuote.setLaborCharges(intemp);
    shtemp.ddid =to_string(i);
    return shtemp;
}

void output()
{
    cout << "----------------------------------------------------------------------------------------------------" <<endl;
    cout << " ddid | ��� | �m�W | �a�} | �q�� | �ײz���� | ���� | �~�� | �H�u�O | �s��O | �|��" << endl;
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
        cout << "�s�W������Ы�1" << endl;
        cout << "�d�ߦ�����Ы�2" << endl;
        cout << "�C�X�Ҧ�������Ы�3" << endl;
        cout << "�R��������Ы�4" << endl;
        cout << "���}�{���Ы�0" << endl;
        cout << "�п�J >> " << endl;
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
            cout << "�m�W�d�߽Ы�1" << endl;
            cout << "����d�߽Ы�2" << endl;
            cout << "ddid�d�߽Ы�3" << endl;
            cout << "�п�J >> " << endl;
            cin >> in;
            if (da.size() == 0)
            {
                cout << "�S�����" << endl;
            }
            cout << "�п�J�d�߸�� >> " << endl;
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
            cout << "�п�J�n�R����ddid(�Х��d��) >> " <<endl;
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