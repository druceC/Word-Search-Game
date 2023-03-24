//
//  main.cpp
//  Word Search Project
//
//  Created by Druce Chua on 25/12/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;

void storeWords(vector<string>& wordArr, string filename, int size);
void chooseWords(vector<string> wordArr, int size, vector<string>& twelveWords);
void printMatrix(vector<string>& twelveWords);
void allFound(vector<string>& twelveWords, int &score, string word, bool &playAgain);
void continueGame(vector<string> twelveWords, vector<string> &wordsFound, int &score, string word);

int main() {
    int choice, size, choice2, score(0);
    string word;
    bool status(0), playAgain;
    // Main Menu
    do{
        srand(time(NULL));
        cout << "WORD SEARCH\n";
        cout << "Choose your preferred category:\n";
        cout << "1. Fruits\n";
        cout << "2. Animals\n";
        cout << "3. Countries\n";
        cout << "4. Disney\n";
        cout << "5. Geometry\n";
        cout << "6. Exit Program\n";
        cin >> choice;
        score = 0;
        vector<string> wordArr;
        vector<string> twelveWords;
        vector<string> wordsFound;
        switch(choice){
            // Fruits
            case 1:
                status = 0;
                playAgain = 0;
                size = 44;
                storeWords(wordArr,"Fruits.txt", size);
                chooseWords(wordArr, size, twelveWords);
                printMatrix(twelveWords);
                do{
                    if (score > 0){
                        if(score == 5){
                            if(playAgain==0){
                                allFound(twelveWords, score, word, playAgain);
                            }
                            else{
                                status=1;
                            }
                        }
                        else{
                            continueGame(twelveWords, wordsFound, score, word);
                        }
                    }
                    else if(score == 0){
                        bool valid(0);
                        cout << "Enter word: ";
                        cin >> word;
                        // for_each(word.begin(), word.end(), [](char & c){
                        //         c = toupper(c);
                        //     });
                        // Check if entered word is valid
                        for(int i=0; i<5; i++){
                            if(word==twelveWords[i]){
                                valid = 1;
                                score++;
                                wordsFound.push_back(word);
                            }
                        }
                        if(valid==0){
                            cout << "Invalid word" << endl;
                        }
                    }
                }while(status!=1);
                break;
                
            // Animals
            case 2:
                status = 0;
                playAgain = 0;
                size = 101;
                storeWords(wordArr,"Animals.txt", size);
                chooseWords(wordArr, size, twelveWords);
                printMatrix(twelveWords);
                do{
                    if (score > 0){
                        if(score == 5){
                            if(playAgain==0){
                                allFound(twelveWords, score, word, playAgain);
                            }
                            else{
                                status=1;
                            }
                        }
                        else{
                            continueGame(twelveWords, wordsFound, score, word);
                        }
                    }
                    else if(score == 0){
                        bool valid(0);
                        cout << "Enter word: ";
                        cin >> word;
                        // for_each(word.begin(), word.end(), [](char & c){
                        //         c = toupper(c);
                        //     });
                        // Check if entered word is valid
                        for(int i=0; i<5; i++){
                            if(word==twelveWords[i]){
                                valid = 1;
                                score++;
                                wordsFound.push_back(word);
                            }
                        }
                        if(valid==0){
                            cout << "Invalid word" << endl;
                        }
                    }
                }while(status!=1);
                break;
            // Countries
            case 3:
                status = 0;
                playAgain = 0;
                size = 80;
                storeWords(wordArr,"Countries.txt", size);
                chooseWords(wordArr, size, twelveWords);
                printMatrix(twelveWords);
                do{
                    if (score > 0){
                        if(score == 5){
                            if(playAgain==0){
                                allFound(twelveWords, score, word, playAgain);
                            }
                            else{
                                status=1;
                            }
                        }
                        else{
                            continueGame(twelveWords, wordsFound, score, word);
                        }
                    }
                    else if(score == 0){
                        bool valid(0);
                        cout << "Enter word: ";
                        cin >> word;
                        // for_each(word.begin(), word.end(), [](char & c){
                        //         c = toupper(c);
                        //     });
                        // Check if entered word is valid
                        for(int i=0; i<5; i++){
                            if(word==twelveWords[i]){
                                valid = 1;
                                score++;
                                wordsFound.push_back(word);
                            }
                        }
                        if(valid==0){
                            cout << "Invalid word" << endl;
                        }
                    }
                }while(status!=1);
                break;
            // Disney
            case 4:
                status = 0;
                playAgain = 0;
                size = 44;
                storeWords(wordArr,"Disney.txt", size);
                chooseWords(wordArr, size, twelveWords);
                printMatrix(twelveWords);
                do{
                    if (score > 0){
                        if(score == 5){
                            if(playAgain==0){
                                allFound(twelveWords, score, word, playAgain);
                            }
                            else{
                                status=1;
                            }
                        }
                        else{
                            continueGame(twelveWords, wordsFound, score, word);
                        }
                    }
                    else if(score == 0){
                        bool valid(0);
                        cout << "Enter word: ";
                        cin >> word;
                        // for_each(word.begin(), word.end(), [](char &c){
                        //     c = toupper(c);
                        // });
                        // Check if entered word is valid
                        for(int i=0; i<5; i++){
                            if(word==twelveWords[i]){
                                valid = 1;
                                score++;
                                wordsFound.push_back(word);
                            }
                        }
                        if(valid==0){
                            cout << "Invalid word" << endl;
                        }
                    }
                }while(status!=1);
                break;
            // Geometry
            case 5:
                status = 0;
                playAgain = 0;
                size = 39;
                storeWords(wordArr,"Geometry.txt", size);
                chooseWords(wordArr, size, twelveWords);
                printMatrix(twelveWords);
                do{
                    if (score > 0){
                        if(score == 5){
                            if(playAgain==0){
                                allFound(twelveWords, score, word, playAgain);
                            }
                            else{
                                status=1;
                            }
                        }
                        else{
                            continueGame(twelveWords, wordsFound, score, word);
                        }
                    }
                    else if(score == 0){
                        bool valid(0);
                        cout << "Enter word: ";
                        cin >> word;
                        // for_each(word.begin(), word.end(), [](char & c){
                        //         c = toupper(c);
                        //     });
                        // Check if entered word is valid
                        for(int i=0; i<5; i++){
                            if(word==twelveWords[i]){
                                valid = 1;
                                score++;
                                wordsFound.push_back(word);
                            }
                        }
                        if(valid==0){
                            cout << "Invalid word" << endl;
                        }
                    }
                }while(status!=1);
                break;
            // Exit Program
            case 6:
                cout << "Program terminated." << endl;
                exit(0);
            // Invalid Entry
            default:
                cout << "Invalid Selection" << endl;
        }
    }while(choice!=6);
}


// Function that closes file
void closeFile(){
    fstream outFile;
    outFile.close();
}

// Function that opens file of chosen category and stores words into dynamic array
void storeWords(vector<string> &wordArr, string filename, int size){
    fstream inFile;
    string word;
    inFile.open(filename);
    if(!inFile){
        cout << "File cannot be opened." << endl;
        exit(1);
    }
    for(int i = 0; i < size; i++){
        inFile >> word;
        if(word.length()>2){
            wordArr.push_back(word);
        }
    }
}

// Function that chooses 5 words, transforms letters to uppercase, stores into vector
void chooseWords(vector<string> wordArr, int size, vector<string>& twelveWords){
    int wordIndex[5], idx;
    // Choose x unique words
    int pass = 1;
    for(int i = 0; i < 5; i++){
        do{
            pass = 1;
            idx = rand()%(size+1);
            for(int j = 0; j<i; j++){
                if(idx == wordIndex[j]){
                    pass = 0;
                }
            }
        }while(pass!=1);
        wordIndex[i] = idx;
    }
    // Convert letters to uppercase
    string holder;
    for(int i = 0; i < 5; i++){
        idx = wordIndex[i];
        holder = wordArr[idx];
        // for_each(holder.begin(), holder.end(), [](char & c){
        //     c = toupper(c);
        // });
        twelveWords.push_back(holder);
    }
}

// Function that plots the words on a 12 x 12 matrix. Use multidimensional array. Uppercase alphabet characters are used as fillers (Use ASCII Code). For plotting the words three possibilites: Diagonal, Horizontal, or Vertical.

void printMatrix(vector<string>& twelveWords){
    // Declare matrix: puzzle[rows][columns] | set 'a' as placeholder values for matrix
    // Replace 'a' with rand characters use ASCII
    char puzzle[12][12];
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            puzzle[i][j] = 'a';
        }
    }
    // Randomly select orientation of words (1: Horizontal | 2: Vertical)
    int orientation[5];
    for (int i=0; i<5; i++){
        orientation[i] = 1+rand()%2;
    }
    string word;
    int max, position;
    char test;
    vector <int> rows;
    vector <int> columns;
    int rowSize = 0;
    int columnSize = 0;
    for (int i = 0; i < 5; i++){
        bool pass(1);
        word = twelveWords[i];
        position = orientation[i];
        max = 12-word.length();
        // Verify if there are enough spaces for the word with the chosen root
        
        
        // Word Plotter Algorithm 2
        int root, rowNum(0), columnNum(0);
        do{
            pass = 1;
            root = 1+rand()%max;
            //For Horizontal Orientation
            if(position==1){
                //Generate random number for row number
                rowNum = rand()%11;
                for(int k = 0; k < word.length(); k++){
                    columnNum = root+k;
                    test = puzzle[rowNum][columnNum];
                    if(test!='a'){
                        pass=0;
                    }
                }
            }

            //For Vertical Orientation
            else if(position==2){
                columnNum = rand()%11;
                for(int k = 0; k < word.length(); k++){
                    rowNum = root+k;
                    test = puzzle[rowNum][columnNum];
                    if(test!='a'){
                        pass=0;
                    }
                }
                //Generate random number for column number
            }
        }while(pass!=1);

        // Assign letters of the word to the generated location

        // For Horizontally Oriented Words
        if(position==1){
            for(int i=0; i<word.length(); i++){
                columnNum = root + i;
                puzzle[rowNum][columnNum] = word[i];
            }
        }
        // For Vertically Oriented Words
        else if(position==2){
            for(int i=0; i<word.length(); i++){
                rowNum = root + i;
                puzzle[rowNum][columnNum] = word[i];
            }
        }
    }
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            test = puzzle[i][j];
            if(test == 'a'){
                puzzle[i][j] = char((65+(rand()%(91-65))));
            }
        }
    }
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cout << puzzle[i][j] << "\t";
        }
        cout << endl;
    }
}

void continueGame(vector<string> twelveWords, vector<string> &wordsFound, int &score, string word){
    bool valid(1);
    cout << score << " out of 5 words found" << endl;
    cout << "Enter word: ";
    cin >> word;
    // for_each(word.begin(), word.end(), [](char & c){
    //         c = toupper(c);
    //     });
    // Check if entered word is valid
    for(int i=0; i<5; i++){
        if(word==twelveWords[i]){
            for(int j=0; j<score;j++){
                if(wordsFound[j]==word){
                    valid=0;
                }
            }
        }
    }
    if(valid==0){
        cout << "Invalid word" << endl;
    }
    else{
        score++;
        wordsFound.push_back(word);
    }
}

void allFound(vector<string>& twelveWords, int &score, string word, bool &playAgain){
    int choice2;
    cout << "You've found all 5 words!" << endl;
    cout << "\nPress\t1 to play again" << endl;
    cout << "\t\t2 End game" << endl;
    cin >> choice2;
    switch(choice2){
        case 1:
            playAgain=1;
            break;
        case 2:
            cout << "Game ended." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid selection" << endl;
    }
}

void quitGame(vector<string> twelveWords){
    // Show correct answers
    
    
    // Option to play again or end game
    int choice2;
    bool playAgain;
    cout << "\nPress\t1 to play again" << endl;
    cout << "\t\t2 End game" << endl;
    cin >> choice2;
    switch(choice2){
        case 1:
            playAgain=1;
            break;
        case 2:
            cout << "Game ended." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid selection" << endl;
    }
}