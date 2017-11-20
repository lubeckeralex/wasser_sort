#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	const int anzl = 101;
	double zeit[anzl];
	double sLand = 5.0;
	double sWasser = 2.5;
	double xLand = 100;
	double yLand = 50;
	double xWasser = 50;
	double yWasser = 100;
	double temp = 0;
	double min = 0;
	double max = 0;
	double summe = 0.0;
	double mittelWert;
	int x;

	for(x = 0; x < anzl; x++)
	{
		zeit[x] = ((sqrt((50.0*50.0) + ((double)(x)*(double)(x)))/sLand) + (sqrt((50.0 * 50.0)+ pow((100 - x), 2.0))/sWasser));
		if(zeit[x] < zeit[x-1])
		{
			min=zeit[x];
		}
		else if(zeit[x] > max)
		{
			max=zeit[x];
		}
		summe = summe + zeit[x];
	}

	//Bubble
    for (int i = 0; i < anzl - 1; i++) {

        for (int j = 0; j < anzl - i - 1; j++) {
            if (zeit[j] > zeit[j + 1]) {
                // umt
                temp = zeit[j];
                zeit[j] = zeit[j + 1];
                zeit[j + 1] = temp;
            
			}
        }
    }

	cout << endl ;	
	cout <<" Min wert: "<< min << endl;
	cout <<" Max wert: " << max << endl;
	cout <<" Mittelwert: "<< summe/x << endl;
	cout << " Mediane: " << zeit[anzl/2];
	cout << endl;
}
