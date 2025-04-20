#include<iostream>
#include<string>
using namespace std;
//class creation
class animal{
    private:
    int weight;
    //access modifier
    public:
    //class properties
    int b;
    string name;
    string count;
   

    int getweight(){   //use to fetch the property when it is in private
        return weight;
    }

    void setweight(int weight){  //use to set the property when it is in private
        //this pointer hai jo current object ko define kr raha hai
        //tb use kr re hai jb humne do variables same choose kr liye class and behaviour ke andr
        this->weight=weight;
    }
};

int main(){
    //objection creation

    //static
    animal lion;
    //assigning values to object
    lion.b=5;
    lion.name="LION";
    lion.count= "less";
    lion.setweight(100);//seting the weight of lion be 100kg
    cout<<lion.b<<endl<<lion.name<<endl<<lion.count<<endl;
    cout<<lion.getweight();

}
