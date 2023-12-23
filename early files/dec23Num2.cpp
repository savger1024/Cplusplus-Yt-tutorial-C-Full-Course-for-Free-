#include <iostream>
#include <string>
using std::cout;
using std::cin;

//getters setters
class Stove{
    private:
        int temperature = 0;
    public:
    Stove(){
        setTemperature(0);
    }
    Stove(int integer){
        setTemperature(integer);
    }
    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0) this->temperature = 0;
        else if(temperature >= 10) this->temperature = 10;
        else this->temperature = temperature;
    }
};

int main() {
    cout << "hi";
    Stove stove;
    cout << "temperature is " << stove.getTemperature() << '\n';
    stove.setTemperature(100);
    cout << "new temperature " << stove.getTemperature() << '\n';

    int end;
    cin >> end;
    return 0;
}