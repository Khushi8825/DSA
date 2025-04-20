#include<iostream>
#include<string>
using namespace std;
// class animal{
//     // public:
//     //     int age;
//     //     int weight;
//     // public:
//     // void eat(){
//     //     cout << "Eating" << endl;
//     // }
//     // int getage(){
//     //     return this->age;
//     // }
//     // void setage(int age){
//     //     this->age=age; //this->age tells I mean class member,not the parameter.
//     // }
//     public:
//         int age;

// };

// class dog : public animal{
//     public:
//     void print(){
//         cout<<age<<endl;
//     }

// };

// int main(){
//    dog d1;
//    d1.print();
// //    cout<<d1.age<<endl;
//    return 0;
// }

//Single inheritance
// class car{
//     public:
//     string name;
//     int weight;
//     int age;

//     void speedup(){
//         cout << "speeding up" << endl;
//     }
//     void breakmarror(){
//         cout << "break maardi" << endl;
//     }
// };

// class Scorpio:public car{

// };

// int main(){
//     Scorpio tanniwali;
//     cout<<tanniwali.age;
// }

//multi-level inheritance
// class fruit{
//         public:
//         string name;
// };
// class mango:public fruit{
//         public:
//         int WEIGHT;
// };
// class alphanso:public mango{
//         public:
        
//         int sugarlevel;
// };

// int main(){
//     alphanso a;
//     a.name="aam"; 
//     cout << a.name << " " << a.WEIGHT << " " << a.sugarlevel <<endl;
//     return 0;
// }


// //multiple inheritance
// class  A{
//     public:
//     int chemistry;
//     A(){
//         chemistry=402;
//     }
// };
// class B{
//     public:
//     int chemistry;
//     B(){
//         chemistry=101;
//     }
// };
// class C:public A , public B{
//     public:
//     int maths;
// };

// int main(){
//     C obj;
//     cout << obj.A::chemistry <<" "<< obj.B::chemistry << " " <<obj.maths<<endl;
//     return 0;
// }


//hierarchical
  

//dynamic object creation
class animal{
    public:
     void speaking(){
        cout<<"speaking";
    }
};
class dog : public animal{
    public:
    void speaking(){
        cout<<"barking";
    }
};
    int main(){
        dog* a=(dog *)new animal();
        (*a).speaking();
    }
