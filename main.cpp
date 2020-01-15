//The n-queens problem is amenable to encoding into SAT. Your task is to write a program that takes an integer n as input and finds a solution to the n-queens problem by encoding it into SAT.
// Program input: An integer n > 0 entered as a command line argument to your binary or script.
// Program output: A solution to the n-queens problem. (Note that I am looking for one solution and not all of them.) The output should be in the following format (example given for n = 4):

#include <stdio.h>

string GenerateMiniSATInput(int numberOfQueens);

void ProcessMiniSATOutput(string outputAddress);


int main(int argc, char const *argv[])
{
	// Process input
	if (argc != 2)
	{
		printf("usage: nQueenSAT [number of queens 💅]\n");
	}

	// Convert input into minisat input
	string inputAddress = GenerateMiniSATInput(int numberOfQueens);

	// Solve with minisat
	PROCESS_INFORMATION PI;
	CreateProcess(NULL, "./minisat/minisat", something, something, something, inputAddress);
	WaitForSingleObject(PI.hProcess, INFINITE);

	// Read minisat output
	string outputAddress;

	// Output result to command line
	ProcessMiniSATOutput(outputAddress);

	return 0;
}

string GenerateMiniSATInput(int numberOfQueens)
{
	string inputAddress = "./minisatinput";
	FILE* input;
	inputFP = fopen("./minisatinput", "w+");

	if (inputFP == NULL)
	{
		printf("Fail to create minisat input file\n");
	}
	// Core of the assignment
	else
	{

	}

	fclose(inputFP)
}

void ProcessMiniSATOutput(string outputAddress)
{
	FILE* output;
	outputFP = fopen("./minisatoutput", "r");

	if (outputFP == NULL)
	{
		printf("Fail to open minisat output\n");
	}

	else
	{
		
	}

	fclose(outputFP);
}