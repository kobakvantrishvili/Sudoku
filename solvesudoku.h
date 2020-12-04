int** createPuzzle();
void printPuzzle(int** puzzle);
bool checkAvailable(int** puzzle, int* row, int* column);
bool checkBox(int** puzzle, int row, int column, int val);
bool solvePuzzle(int** puzzle);
int** copyPuzzle(int** puzzle);
void userChoice(int** userPuzzle, int** tempPuzzle);
