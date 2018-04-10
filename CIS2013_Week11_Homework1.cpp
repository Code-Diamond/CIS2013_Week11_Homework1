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
		string currentSpeed;
		bool isRunning;
    //Publicly accessed functions/methods
	public:

		//Getters
		string getColor()
		{
			return color;
		}
		string getMake()
		{
			return make;
		}
		string getModel()
		{
			return model;
		}
		string getYear()
		{
			return year;
		}
		string getCurrentSpeed()
		{
			return currentSpeed;
		}
		bool getIsRunning()
		{
			return isRunning;
		}

		//Setters
		void setColor(string inputColor)
		{
			color = inputColor;
		}
		void setMake(string inputMake)
		{
			make = inputMake;
		}
		void setModel(string inputModel)
		{
			model = inputModel;
		}
		void setYear(string inputYear)
		{
			year = inputYear;
		}
		void setCurrentSpeed(string inputCurrentSpeed)
		{
			currentSpeed = inputCurrentSpeed;
		}
        void setIsRunning(bool inputIsRunning)
        {
            isRunning = inputIsRunning;
        }

};


string displayMenu(string);
void printDetails(Car);
void clearConsole();
int main()
{
    //Create a car object
	Car myCar;
	myCar.setIsRunning(false);

	string action;
	bool exit = false;
    while(!exit)
    {
        action = displayMenu(action);

        //cout << "\nAction typed: " << action << endl;
        if(action == "c")
        {
            string inputColor;
            cout << "\n Please enter the color of the car.\nColor: ", cin >> inputColor;
            myCar.setColor(inputColor);
            clearConsole();
        }
        if(action == "m")
        {
            string inputMake;
            cout << "\nPlease enter the make of the car.\nMake: ", cin >> inputMake;
            //cout << "\nMake typed: " << inputMake << endl;
            myCar.setMake(inputMake);
            clearConsole();
        }
        if(action == "o")
        {
            string inputModel;
            cout << "\nPlease enter the model of the car.\nModel: ", cin >> inputModel;
            //cout << "\nModel typed: " << inputModel << endl;
            myCar.setModel(inputModel);
            clearConsole();
        }
        if(action == "y")
        {
            string inputYear;
            cout << "\nPlease enter the year of the car.\nYear: ", cin >> inputYear;
            //cout << "\nYear typed: " << inputYear << endl;
            myCar.setYear(inputYear);
            clearConsole();
        }
        if(action == "s")
        {
            //start
            if(!myCar.getIsRunning())
            {
                myCar.setIsRunning(true);
                clearConsole();
            }
            else
            {
                cout << "\n\nYour car is already turned on. . .\n\n";
            }
        }
        if(action == "S")
        {
            if(myCar.getIsRunning())
            {
                //Stop the car / turn off
                myCar.setIsRunning(false);
                clearConsole();
            }
            else
            {
                cout << "\n\nYou car is already turned off. . .\n\n";
            }
        }
        if(action == "p")
        {
            printDetails(myCar);
        }
        if(action == "x")
        {
            exit = true;
        }

    }
	return 0;
}


string displayMenu(string action)
{
        cout <<     "   Select an action: \n"
             <<     "       - set color (c)\n"
             <<     "       - set make  (m)\n"
             <<     "       - set model (o)\n"
             <<     "       - set year  (y)\n"
             <<     "       - start car (s)\n"
             <<     "       - stop car  (S)\n"
             <<     "       - print     (p)\n"
             <<     "       - exit      (x)\n" << endl;

        cout << "\nWhat would you like to do?\n";
        cout << "\nAction: ", cin >> action;
        return action;

}


void printDetails(Car c)
{
    //Need to add the current state of car at the end of the print statement
    cout << "\n\n\nYou\'re diving a " << c.getYear() << " " << c.getMake() << " " << c.getModel() << ", " << c.getColor() << ".";

    if(c.getIsRunning())
    {
        cout << "\nThe car is currently in turned ON.\n";
    }
    if(!c.getIsRunning())
    {
        cout << "\nThe car is currently in turned OFF.\n";
    }
    cout << endl << endl;

}

void clearConsole()
{
        //Clear console
        for(int i = 0; i < 50; i++)
        {
            cout << "\n";
        }
}
