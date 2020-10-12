#include <bits\stdc++.h>
using namespace std;
struct inventory
{
    string itemdescription;
    string quantityonhand;
    string wholesalecost;
    string retailcost;
    string dateaddedtoinventory;
};

int main (){
    string i;
    int nm=0;
    fstream file;
    file.open("inventory.dat",ios::binary|ios::out|ios::in|ios::trunc);
    if(!file){
        cout << "inventory.dat FileNotFound";
        system("pause");
        return 0;
    }
    do{
        cout << "add a record >> 1" <<endl;
        cout << "display a record >> 2" << endl;
        cout << "change a record >> 3" << endl;
        cout << "exit >> 4" << endl;
        cin >> i;
        if(i == "1"){
            inventory inv;
            string t;
            cout << "item description >>";
            cin >> t;
            inv.itemdescription = t;
            cout << endl;
            cout << "quantity on hand >>";
            cin >> t;
            inv.quantityonhand = t;
            cout << endl;
            cout << "whole sale cost >>";
            cin >> t;
            inv.wholesalecost = t;
            cout << endl;
            cout << "retail cost >>";
            cin >> t;
            inv.retailcost = t;
            cout << endl;
            cout << "date added to inventory >>";
            cin >> t;
            inv.dateaddedtoinventory = t;
            cout << endl;
            file.write(reinterpret_cast<char *>(&inv),sizeof(inv));
            nm++;
        }else if(i == "2"){
            int t;
            cout << "input record number total " <<nm << endl;
            cin >> t;
            if (t > nm || t < 0){
                cout << "error" << endl;
                continue;
            }else{ 
                inventory invv;
                file.seekg(sizeof(invv)*(t-1),ios::beg);
                file.read(reinterpret_cast<char *>(&invv),sizeof(invv));
                cout << "item description >>" << invv.itemdescription <<endl;
                cout << "quantity on hand >>"<< invv.quantityonhand <<endl;
                cout << "whole sale cost >>"<< invv.wholesalecost <<endl;
                cout << "retail cost >>"<< invv.retailcost <<endl;
                cout << "date added to inventory >>"<< invv.dateaddedtoinventory <<endl;
                system("pause");
            }
        }else if (i == "3"){
            inventory inv;
            string t;
            int ty;
            cout << "input record number total " <<nm << endl;
            cin >> ty;
            cout << "new item description >>";
            cin >> t;
            inv.itemdescription = t;
            cout << endl;
            cout << "new quantity on hand >>";
            cin >> t;
            inv.quantityonhand = t;
            cout << endl;
            cout << "new whole sale cost >>";
            cin >> t;
            inv.wholesalecost = t;
            cout << endl;
            cout << "new retail cost >>";
            cin >> t;
            inv.retailcost = t;
            cout << endl;
            cout << "new date added to inventory >>";
            cin >> t;
            inv.dateaddedtoinventory = t;
            cout << endl;
            file.seekp(sizeof(inv)*(ty-1), ios::beg);
            file.write(reinterpret_cast<char *>(&inv),sizeof(inv));
        }
    }
    while(i != "4");
    file.close();
    return 0;
}