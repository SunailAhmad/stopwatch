#include<iostream>

using namespace std;

int main() {

	int sec = 0, mint =59,hr = 23;
	

	while (true) {


		cout << sec << ":" << mint << ":" << hr;
		sec++;
		if (sec == 60) {

			mint++;
			sec = 0;


			if (mint == 60)
			{
				hr++;
				mint = 0;



				if (hr == 24)
				{
					hr = 0;

				}

			}
		}
		
		
		system("cls");


	}

	
	


	
	return 0;
}