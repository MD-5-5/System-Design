#include<iostream>
#include<string>
using namespace std;
int main(){
    class Car{
    public:
        virtual void startEngine() = 0;
        virtual void shiftGear(int gear) = 0;
        virtual void accelerate() = 0;
        virtual void brake() = 0;
        virtual void stopEngine() = 0; //yaha  pe jo virtual void hum likh rhe hai iska matlab hai ki humne yahan pe method declare kiya hai bss........isko define kerne ki zimmedari childClass ki hoti hai jisne iss parentClass ko Inherit ker rkha hotaa hai 
        virtual ~Car() {}
    };
    class sportsCar : public Car{
        string brand;
        string model;
        bool isEngineOn;
        int currentGear;
        int currentSpeed;

        sportsCar(string b, string a){
            this->brand = b;
            this->model = a;
            isEngineOn = false;
            currentGear = 0; //neutral
            currentSpeed = 0;
        }
        void startEngine(){
            isEngineOn = true;
            cout<<brand<<" "<<model<<" : Engine Starts with a Roar Baba!"<<endl;
        }
        void shiftGear(int gear){
            if(isEngineOn){
                cout<<brand<<" "<<model<<" : Engine is off! Cannot shift gear"<<endl;
                return;
            }
            currentGear = gear;
            cout<< brand<<" "<<model<<" : Shifted to gear"<< currentGear<<endl;
        }
    }
}