/*   Writing to file   */

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
//     ofstream ptrName ("/home/mage/VScode/CPP-iies/nihal.txt");
//     ptrName<<"Hello File"<<endl;
//     cout<<"Hiii"<<endl;
// }

/*   Reading from file   */

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){
//     string a;
//     ifstream file("/home/mage/VScode/CPP-iies/nihal.txt");
//     while(getline(file,a)){
//         cout<< a <<endl;
//     }
// }

/*    Testing is_open()    */

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){
//     ofstream demo("/home/mage/VScode/CPP-iies/abc.txt");
//     if(demo.is_open()){
//         demo<< "hello everybody, lesss gooo!";
//         demo.close();
//     }
//     else{
//         cout<<"File not found\n"<<endl;
//     }
//     string a;
//     ifstream file("/home/mage/VScode/CPP-iies/abc.txt");
//     while(getline(demo,a)){
//         cout<< a <<endl;
//     }
//     return 0;
// }

/*   Append Mode   */

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream demo ("/home/mage/newABCD.txt",ios::in | ios::out | ios::app );
    if(demo.is_open()){
        demo<<"Hasta La Victoria Sembre"<<endl;
        demo.seekg(0);
        string s;
        cout<<"data : ";
        while(getline(demo, s)){
            cout<< s <<endl;
        }
        demo.close();
    }
    return 0;
}