#include<iostream>
using namespace std;
class Stats{
    protected: //only derived classes can acess
    int population;
    string Tier;
};
class Portugal: private Stats{
    public:
    void set(int n,string t){
        population=n;
        Tier=t;
    }
    void get(){
        cout<<"Population of Portugal is "<<population<<" million."<<endl;
        cout<<"Portugal is a Tier "<<Tier<<" country."<<endl;
    }
};
class India : private Stats{
    public:
    void set(int n,string t){
        population=n;
        Tier=t;
    }
    void get(){
        cout<<"Population of India is "<<population<<" million."<<endl;
        cout<<"India is a Tier "<<Tier<<" country."<<endl;
    }
};
int main(){
    Portugal a;
    //a.population=10; results error
    a.set(20,"One");
    a.get();
    India i;
    i.set(140000,"Two");
    i.get();
    return 0;
}