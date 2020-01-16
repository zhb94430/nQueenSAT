//The n-queens problem is amenable to encoding into SAT. Your task is to write a program that takes an integer n as input and finds a solution to the n-queens problem by encoding it into SAT.
// Program input: An integer n > 0 entered as a command line argument to your binary or script.
// Program output: A solution to the n-queens problem. (Note that I am looking for one solution and not all of them.) The output should be in the following format (example given for n = 4):

#include <stdio.h>

//Process current row/column/diag
void ProcessCurrentArray(int* currentArray[]);

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

void ProcessCurrentArray(int* currentArray[])
{
	//Simple Diag Check
	//Only exec if not diagnal arrays
	if ((currentArray[0] - currentArray[1]) == -1)
	{
		string currentLine;

		for (int i = 0; i < currentArray.size(); ++i)
		{
			currentLine.append(currentArray[i]);
			currentLine.append(" ");
		}

		currentLine.append("0");

		inputfp.fput(currentLine);
	}

	// Exclusive ors
	for (int i = 0; i < currentArray.size(); ++i)
	{
		for (int j = i+1; j < currentArray.size(); ++j)
		{
			string currentLine;

			currentLine.append("-");
			currentLine.append(currentArray[i]);
			currentLine.append(" -");
			currentLine.append(currentArray[j]);
			currentLine.append(" 0");

			inputfp.fput(currentLine);
		}
	}
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
		//Calculate number of terms
		int numberOfTerms = -1;

		// Input header
		inputFP.fput("p cnf %d %d\n", numberOfQueens*numberOfQueens, numberOfTerms);

		// 1  2  3  4  5
		// 6  7  8  9  10
		// 11 12 13 14 15
		// 16 17 18 19 20
		// 21 22 23 24 25

		// Rows
		for (unsigned i = 0; i <= numberOfQueens; ++i) 
		{
			int currentRow[];

			for(unsigned j = 0; j < numberOfQueens; ++j) {

				currentRow[i] = i * numberOfQueens + j + 1; // Plus one to offset
			}

			ProcessCurrentArray(currentRow);
		}

		// Columns
		for (unsigned i = 0; i <= numberOfQueens; ++i) 
		{
			int currentCol[];

			for(unsigned j = 0; j < numberOfQueens; ++j) {

				currentCol[i] = j * numberOfQueens + i + 1; // Plus one to offset
			}

			ProcessCurrentArray(currentCol);
		}

		// Diag
		// https://stackoverflow.com/questions/20420065/loop-diagonally-through-two-dimensional-array
		for (unsigned k = 0; k < numberOfQueens * 2; ++k) 
		{
			int currentDiag[];

			for (unsigned j = 0; j <= k; ++j) 
			{
				int i = k - j;

				if (i < numberOfQueens && j < numberOfQueens)
				{
					currentDiag[j] = i * numberOfQueens + j + 1;
				}
			}

			ProcessCurrentArray(currentDiag);
		}
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
		if (output is unsatisfiable)
		{
			printf("unsatisfiable\n");
		}

		// Satisfiable
		// Result is all the positive numbers
		else
		{

		}
	}

	fclose(outputFP);
}