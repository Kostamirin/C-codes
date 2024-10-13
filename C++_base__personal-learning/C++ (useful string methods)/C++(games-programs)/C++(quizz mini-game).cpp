#include <iostream>
#include <iomanip>

int main(){
    std::string questions[] = {"1.How many age my?", 
                               "2.Thats my name?",
                               "3.Where me live?"};
    std::string options[][4]={  {"A.12", "B.13", "C.14", "D.15"},
                                {"A.Kosta","B.Kerasin", "C.Kley", "D.Muner"},
                                {"A. Moscow", "B. Vladimir", "C. St-Peterburg", "D. Volgograd"}
    };
    //Ответы: 
    char answerKey[] = {'C', 'A', 'B'};

    int sizeQ = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i <sizeQ; i++){
        std::cout <<"******************************\n";
        std::cout <<questions[i] <<'\n';
        std::cout <<"******************************\n";        
        //std::cout <<"Your answer: "


        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout <<options[i][j] <<'\n';

        }

        std::cin >>guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout <<"CORRECT! \n";
            score += 1;
        }
        else{
            std::cout <<"UNcorrect, try again!\n";
            std::cout <<"Answer: " <<answerKey[i] <<'\n';
        }
    }

std::cout <<"******************************\n";
std::cout <<"Your score: " <<score <<'\n';

double nice = (score/static_cast<double>(sizeQ))*100;

std::cout <<"Score percent: " <<std::setprecision(1) << std::fixed <<nice  <<"%" <<'\n';
std::cout <<"******************************\n";

    return 0;
}