#include <iostream>
//Scooter Class - create a scooter, adjust its' speed and gas.
//Original program by parulgo7

//practicing the following techniques: scope resolution operator, public/private, basic class structure, empty constru/destruc

class Scooter { //class

    public:
        Scooter(); //default constructor
        Scooter(int speed, int gas); //constructor
        ~Scooter(); //destructor
        int getSpeed();    //getters and setters for speed (prototypes)
        void setSpeed(int desiredSpeed);
        int getGas();    //getters and setters for gas (prototypes)
        void setGas(int desiredGas);
        bool vroom();      //go and stop methods (member functions)
        void brake();
    private:
        int speed;      //instance variables
        int gas;
};

Scooter::Scooter(){ //default constructor (that isn't working??)
    setSpeed(10);
    setGas(20);
}

Scooter::Scooter(int speed, int gas){ //constructor
    setSpeed(speed);
    setGas(gas);
}

Scooter::~Scooter(){ //destructor
    //if this was not here, the compiler would have provided a default destructor (like this one)
}

//getSpeed()
//@return speed
int Scooter::getSpeed(){
    return speed;
}

//setSpeed()
//@param desiredSpeed 
void Scooter::setSpeed(int desiredSpeed){
    speed = desiredSpeed;
}

//getGas
//@return gas
int Scooter::getGas(){
    return gas;
}

//setGas()
//@param desiredGas
void Scooter::setGas(int desiredGas){
    gas = desiredGas;
}

//vroom()
//additional comment: bool to indicate whether or not adding speed was successful based on gas amt
bool Scooter::vroom(){
    int tempGas = getGas() - 2;

    if (tempGas <= 0){
        std::cout <<"Your gas is " << gas << " ";
        std::cout << "Get some gas hon STAT!" << std::endl;
        std::cout << "Was unable to vroom vroom :( " << std::endl;
        return false;
    } else {

        speed++;
        gas = gas-2;
        std::cout << "Hooray! You vroom vroomed! Your speed is now: " << speed << std::endl;
        std::cout << "Your gas is " << gas << std::endl;
        return true;

    }
}

//brake()
void Scooter::brake() {
    speed--;
    std::cout << "You braked! Your speed is now " << speed << std::endl;

}



//main function
int main()
{
    std::cout << "Welcome to your first Scooter! Press 1 to vroom, 2 to brake, and 3 to get gas" << std::endl;
    int userAns;
    std::cin >> userAns;

    Scooter scootie(10,20); //default model

    switch(userAns){
        case 1:
            for (int i = 0; i < 100; i++) { //100 chosen arbitarily
                scootie.vroom();

                std::cout << "To see the option list again, type 0" << std::endl;
                char exitChoice;
                std::cin >> exitChoice;

                if (exitChoice == '0') {
                    break;
                }
            }
        std::cin >> userAns;
        case 2:
            for (int i = 0; i< 100; i++) { //100 chosen arbitarily
                scootie.brake();

                std::cout << "To see the option list again, type 0" << std::endl;
                char exitChoice;
                std::cin >> exitChoice;

                if (exitChoice == '0') {
                    break;
                }
            }
        std::cin >> userAns;
        case 3:
            for (int i = 0; i<100; i++) { //same as before

                scootie.setGas(1);

                /*
                std::cout << "How much gas will you fill" std::endl;
                int desiredGas;
                std::cin >> desiredGas;
                scootie.setGas(desiredGas);
                */

                std::cout << "To see the option list again, type 0" << std::endl;
                char exitChoice;
                std::cin >> exitChoice;

                if (exitChoice == '0') {
                    break;
                }
            }

    }

    return 0;
}
