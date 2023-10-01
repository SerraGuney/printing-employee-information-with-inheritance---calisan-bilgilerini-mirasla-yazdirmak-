#include <iostream>
using namespace std;
class worker{
    string name,surname;
    public:
    worker(string n,string s){
        name=n;
        surname=s;
    }
    void print(){
        cout<<"name of worker:"<<name<<endl<<"surname of worker:"<<surname<<endl;
    }
};
class personel:private worker{
    int wage;
    public:
    personel(string n,string s,int w):worker(n,s){
        wage=w;
    }
    void print2(){
        print();
        cout<<"wage of worker:"<<wage<<endl<<endl;
    }
};
int main(){
    personel nesne1("Serra","Guney",50000);
    personel nesne2("Ayse","Ay",50000);
    nesne1.print2();
    nesne2.print2();
    return 0;
}
