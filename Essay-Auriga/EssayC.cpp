#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>

std::string choose;

int main()
{
    srand ( time(NULL) );
    std::string input = "Computer science is the scientific and practical approach to computation and its applications. It is the systematic study of the feasibility, structure, expression, and mechanization of the methodical procedures (or algorithms) that underlie the acquisition, representation, processing, storage, communication of, and access to information. An alternate, more succinct definition of computer science is the study of automating algorithmic processes that scale. A computer scientist specializes in the theory of computation and the design of computational systems.  Its fields can be divided into a variety of theoretical and practical disciplines. Some fields, such as computational complexity theory (which explores the fundamental properties of computational and intractable problems), are highly abstract, while fields such as computer graphics emphasize real-world visual applications. Still other fields focus on the challenges in implementing computation. For example, programming language theory considers various approaches to the description of computation, while the study of computer programming itself investigates various aspects of the use of programming language and complex systems. Human–computer interaction considers the challenges in making computers and computations useful, usable, and universally accessible to humans.";
	int words = 0; // Holds number of words
	
	for(int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == ' ') //Checking for spaces
		{
			words++;
		} 	
	}
    
	std::cout << "The number of words = " << words+1 << std::endl;
	int n = words+1;
    std::string arr[1000];
    int i = 0;
    std::stringstream ssin(input);
    while (ssin.good() && i < n)
    {
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    int RandIndex = rand() % n; 
    for(int xx = 0; xx < 1000; xx++)
    {
	    RandIndex = rand() % n; 
	    std::string pred = arr[RandIndex];
        std::cout << arr[RandIndex] << std::endl;
            int counter = 0;
            std::vector<std::string> final;  
            for(int x = 0; x < input.size(); x++)
            {
            if (arr[x].find(pred, 0) != std::string::npos)
            {
                counter++;
                final.push_back (arr[x+1]);
            
            }
        int rf = rand() % counter;
        std::cout << "The predict word is: " << final[rf] << std::endl;
        }
    std::cin.get();
    }
    


    
    
    
    
    
}
