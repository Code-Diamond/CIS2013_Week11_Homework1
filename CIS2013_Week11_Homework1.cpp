#include <iostream>
#include <cstring>

using namespace std;

class Car
{
    //Privately accessed variables
    private:
        string color;
        string make;
        string model;
        string year;
        int currentSpeed;
        bool isRunning;
    //Publicly accessed functions/methods
    public:

        //Getters
        string GetColor()
        {
            return color;
        }
        string GetMake()
        {
            return make;
        }
        string GetModel()
        {
            return model;
        }
        string GetYear()
        {
            return year;
        }
        int GetCurrentSpeed()
        {
            return currentSpeed;
        }
        bool GetIsRunning()
        {
            return isRunning;
        }

        //Setters
        void SetColor(string inputColor)
        {
            color = inputColor;
        }
        void SetMake(string inputMake)
        {
            make = inputMake;
        }
        void SetModel(string inputModel)
        {
            model = inputModel;
        }
        void SetYear(string inputYear)
        {
            year = inputYear;
        }
        void IncreaseSpeed()
        {
            currentSpeed += 10;
        }
        void DecreaseSpeed()
        {
            currentSpeed -= 10;
        }
        void SetIsRunning(bool inputIsRunning)
        {
            isRunning = inputIsRunning;
        }
        void SetCurrentSpeed(int speed)
        {
            currentSpeed = speed;
        }

};


string DisplayMenu(string);
void PrintDetails(Car);
void ClearConsole();


int main()
{
    ClearConsole();
    //Create a car object
    Car myCar;
    myCar.SetIsRunning(false);
    myCar.SetCurrentSpeed(0);
    string action;
    bool exit = false;
    while(!exit)
    {
        action = DisplayMenu(action);

        //cout << "\nAction typed: " << action << endl;
        if(action == "c")
        {
            string inputColor;
            cout << "\n Please enter the color of the car.\nColor: ", cin >> inputColor;
            myCar.SetColor(inputColor);
            ClearConsole();
        }
        if(action == "m")
        {
            string inputMake;
            cout << "\nPlease enter the make of the car.\nMake: ", cin >> inputMake;
            //cout << "\nMake typed: " << inputMake << endl;
            myCar.SetMake(inputMake);
            ClearConsole();
        }
        if(action == "o")
        {
            string inputModel;
            cout << "\nPlease enter the model of the car.\nModel: ", cin >> inputModel;
            //cout << "\nModel typed: " << inputModel << endl;
            myCar.SetModel(inputModel);
            ClearConsole();
        }
        if(action == "y")
        {
            string inputYear;
            cout << "\nPlease enter the year of the car.\nYear: ", cin >> inputYear;
            //cout << "\nYear typed: " << inputYear << endl;
            myCar.SetYear(inputYear);
            ClearConsole();
        }
        if(action == "s")
        {
            //start
            if(!myCar.GetIsRunning())
            {
                myCar.SetIsRunning(true);
                ClearConsole();
            }
            else
            {
                cout << "\n\nYour car is already turned on. . .\n\n";
            }
        }
        if(action == "S")
        {
            if(myCar.GetIsRunning())
            {
                //Stop the car / turn off
                myCar.SetIsRunning(false);
                ClearConsole();
            }
            else
            {
                cout << "\n\nYou car is already turned off. . .\n\n";
            }
        }
        if(action == "p")
        {
            PrintDetails(myCar);
        }

        if(action == "d")
        {
            //Need a conditional here to check if the car is turned on
            bool driving = true;
            ClearConsole();
            while(driving)
            {


                string drivingAction;
                cout <<     "   Select an action: \n"
                     <<     "       - increase speed       (+)\n"
                     <<     "       - decrease speed       (-)\n"
                     <<     "       - turn left            (l)\n"
                     <<     "       - turn right           (r)\n"
                     <<     "       - deploy spike traps   (t)\n"
                     <<     "       - stop                 (x)\n" << endl;

                cout << "\nWhat would you like to do?\n";
                cout << "\nAction: ", cin >> drivingAction;

                if(drivingAction == "+")
                {
                    ClearConsole();
                    myCar.IncreaseSpeed();
                    cout << "\nYou are now driving: " << myCar.GetCurrentSpeed() << ".\n\n";
                }
                if(drivingAction == "-")
                {
                    ClearConsole();
                    myCar.DecreaseSpeed();
                    cout << "\nYou are now driving: " << myCar.GetCurrentSpeed() << ".\n\n";
                }
                if(drivingAction == "l")
                {
                    //myCar.TurnLeft()
                }
                if(drivingAction == "r")
                {
                    //myCar.TurnRight()
                }
                if(drivingAction == "t")
                {
                    //myCar.DeploySpikeTraps();
                }
                if(drivingAction == "x")
                {
                    driving = false;
                }
            //End of Driving loop
            }

        }


        if(action == "x")
        {
            exit = true;
        }

    }

    return 0;
}


string DisplayMenu(string action)
{
        cout <<     "   Select an action: \n"
             <<     "       - set color (c)\n"
             <<     "       - set make  (m)\n"
             <<     "       - set model (o)\n"
             <<     "       - set year  (y)\n"
             <<     "       - start car (s)\n"
             <<     "       - stop car  (S)\n"
             <<     "       - print     (p)\n"
             <<     "       - drive     (d)\n"
             <<     "       - exit      (x)\n" << endl;

        cout << "\nWhat would you like to do?\n";
        cout << "\nAction: ", cin >> action;
        return action;

}


void PrintDetails(Car c)
{
    //Need to add the current state of car at the end of the print statement
    cout << "\n\n\nYou\'re diving a " << c.GetYear() << " " << c.GetMake() << " " << c.GetModel() << ", " << c.GetColor() << ".";

    if(c.GetIsRunning())
    {
        cout << "\nThe car is currently in turned ON.\n";
    }
    if(!c.GetIsRunning())
    {
        cout << "\nThe car is currently in turned OFF.\n";
    }
    cout << endl << endl;

}

void ClearConsole()
{
        //Clear console
        for(int i = 0; i < 50; i++)
        {
            cout << "\n";
        }
}
