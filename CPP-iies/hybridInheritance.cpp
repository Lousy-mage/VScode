#include <iostream>
using namespace std;
class company{
    public:
    string ceoName="Bhaskaran Pilla";
    string director="Ponnappan";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<endl;
    }
};
class subBrand: public company{
    public:
    string director="Thangappan";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<endl;

    }
};
class branch1: public subBrand{
    public:
    string manager="Sundaran";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"manger: "<<manager<<endl;
        cout<<endl;

    }
};
class branch2: public subBrand{
    public:
    string manager="Manoharan";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"manger: "<<manager<<endl;
        cout<<endl;

    }
};
class distributor1: public branch1{
    public:
    string distName="shashi";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"manger: "<<manager<<endl;
        cout<<"distributor: "<<distName<<endl;
        cout<<endl;

    }
};
class distributor2: public branch1{
    public:
    string distName="Soman";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"manger: "<<manager<<endl;
        cout<<"distributor: "<<distName<<endl;
        cout<<endl;
    }
};
class distributor3: public branch2{
    public:
    string distName="Dasan";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"manger: "<<manager<<endl;
        cout<<"distributor: "<<distName<<endl;
        cout<<endl;

    }
};
class distributor4: public branch2{
    public:
    string distName="Vijayan";
    void details(){
        cout<<"CEO: "<<ceoName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"manger: "<<manager<<endl;
        cout<<"distributor: "<<distName<<endl;
        cout<<endl;
    }
};
int main(){
    int opt;
    distributor1 d1;
    distributor2 d2;
    distributor3 d3;
    distributor4 d4;
    do{
        cout<<"Access distributor details:"<<endl;
        cout<<"[1] distributor 1"<<endl;
        cout<<"[2] distributor 2"<<endl;
        cout<<"[3] distributor 3"<<endl;
        cout<<"[4] distributor 4"<<endl;
        cout<<"[5] exit"<<endl;
        cin>>opt;

        switch(opt){
            case 1:
                d1.details();
                break;
            case 2:
                d2.details();
                break;
            case 3:
                d3.details();
                break;
            case 4:
                d4.details();
                break;
            case 5:
                break;
            default:
                cout<<"choose again\n";
        }
    }while(opt!=5);
    
    return 0;
}