#include <iostream>
#include <cstring>

using namespace std;

string displayMenu(string);


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
		//Methods for the car


};


int main()
{
	Car myCar;
	string action;
	action = displayMenu(action);
	
	cout << "\nAction typed: " << action << endl;
	
	return 0;
}


string displayMenu(string action)
{
        cout <<     "   Select an action: \n"
             <<     "       - set make (m)\n"
             <<     "       - set model (o)\n"
             <<     "       - set year (y)\n"
             <<     "      - start car (s)\n"
             <<     "       - stop car (S)\n"
             <<     "       - print (p)" << endl;

        cout << "\nWhat would you like to do?\n";
        cout << "\nAction: ", cin >> action;
        return action;
}



