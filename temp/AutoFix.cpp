#include <iostream>
#include <string>
#include <time.h>

using namespace std;
class timer {
	private:
		unsigned long begTime;
	public:
		void start() {
			begTime = clock();
		}

		unsigned long elapsedTime() {
			return ((unsigned long) clock() - begTime) / CLOCKS_PER_SEC;
		}

		bool isTimeout(unsigned long seconds) {
			return seconds >= elapsedTime();
		}
};

int main()
{
    std::string sentence;
    char input;
    std::string dictionary[4] = {"the","problem","th"};
    unsigned long seconds = 2;
	timer t;

	cout << seconds <<  " seconds elapsed" << endl;
    for(int z = 0; z < 1; z--)
    {
        t.start();
        std::cin >> input;
	    while(true) 
	    {
		if(t.elapsedTime() >= seconds) 
		{
			
		}
		else {
            
		    }
	    }
        

        
        
    
}
