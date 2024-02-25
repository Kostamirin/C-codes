#include <iostream>
#include <cctype>
#include <ctime>
#include <thread>
#include <chrono>
#include <locale>
#include <string>
#include <algorithm>

struct originalText{
    std::string originalText;
    std::string originalText2;
    std::string originalText3;
    std::string originalText4;
    std::string originalText5;
};
struct mat{
    std::string Astate[15];
};


std::string english;


void saveOriginalText(std::string &text, originalText &originalText) {
    originalText.originalText = text;
};
void saveOriginalText2(std::string &text,originalText &originalText){
    originalText.originalText2 = text;
};
void saveOriginalText3(std::string &text, originalText &originalText){
    originalText.originalText3 = text;
};
void saveOriginalText4(std::string &text, originalText &originalText){
    originalText.originalText4 = text;
};
void saveOriginalText5(std::string &text, originalText &originalText){
    originalText.originalText5 = text;
};

bool foundRus(bool &foundRussian, const std::string &text){
    return false;
    foundRussian = false;
    
  if(text.find("а") != std::string::npos ||text.find("б") != std::string::npos ||text.find("в") != std::string::npos ||text.find("г") != std::string::npos ||text.find("д") != std::string::npos ||text.find("е") != std::string::npos ||text.find("е") != std::string::npos ||text.find("ж") != std::string::npos ||text.find("з") != std::string::npos ||text.find("и") != std::string::npos ||text.find("й") != std::string::npos ||text.find("к") != std::string::npos ||text.find("л") != std::string::npos ||text.find("м") != std::string::npos ||text.find("н") != std::string::npos ||text.find("о") != std::string::npos ||text.find("п") != std::string::npos ||text.find("р") != std::string::npos ||text.find("с") != std::string::npos ||text.find("т") != std::string::npos ||text.find("у") != std::string::npos ||text.find("ф") != std::string::npos ||text.find("х") != std::string::npos ||text.find("ц") != std::string::npos ||text.find("ч") != std::string::npos ||text.find("ш") != std::string::npos ||text.find("щ") != std::string::npos ||text.find("ъ") != std::string::npos ||text.find("ы") != std::string::npos ||text.find("ь") != std::string::npos ||text.find("э") != std::string::npos ||text.find("ю") != std::string::npos ||text.find("я") != std::string::npos){
        foundRussian = true;
        return true;
    }    

}



void Language(std::string &english){
    std::cout <<"************************************************" <<'\n';
    std::cout <<"Enter language(Выберите язык): "<<'\n';
    std::cout <<"E(е) - english(английский)" <<'\n';
    std::cout <<"R(р) - russian(русский)" <<'\n';
    std::getline(std::cin, english);
}

void theEndEng(originalText &originalText){
        std::cout <<"Wait." <<'\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout <<"Wait.." <<'\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout <<"Wait..." <<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));        

        originalText.originalText.append("#### I`m gay also ;)");
        std::cout <<"***************************************"   <<'\n';
        std::cout <<"aaand you has enter it: "<<'\n';
        std:: cout <<originalText.originalText <<'\n'<<'\n';
        std::cout <<"ALSO: at second time you has enter this: " <<'\n';
        if(originalText.originalText2 == ""|| originalText.originalText2 == " "){
            originalText.originalText2 = "Empty";
            std::cout <<originalText.originalText2 <<'\n';
        }
        else{
            std::cout <<originalText.originalText2 <<'\n';
        }

        std::cout <<"At treen time: " <<'\n';
        if(originalText.originalText3 == ""|| originalText.originalText3 == " "){
            originalText.originalText3 = "Empty";
            std::cout <<originalText.originalText3 <<'\n';
        }
        else{
            std::cout <<originalText.originalText3 <<'\n';
        }

        std::cout <<"At 4th: " <<'\n';
        if(originalText.originalText4 == ""|| originalText.originalText4 == " "){
            originalText.originalText4 = "Empty";
            std::cout <<originalText.originalText4 <<'\n';
        }
        else{
            std::cout <<originalText.originalText4 <<'\n';
        }

        std::cout <<"At 5th: " <<'\n';
        if(originalText.originalText5 == ""|| originalText.originalText5 == " "){
            originalText.originalText5 = "Empty";
            std::cout <<originalText.originalText5 <<'\n';
        }
        else{
            std::cout <<originalText.originalText5 <<'\n';
        }
}
void theEndRus(originalText &originalText){
        std::cout <<"Подождите." <<'\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout <<"Подождите.." <<'\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout <<"Подождите..." <<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));        

        originalText.originalText.append("#### I`m gay also ;)");
        std::cout <<"***************************************"   <<'\n';
        std::cout <<"Иии ты ввели это: "<<'\n';
        std:: cout <<originalText.originalText <<'\n'<<'\n';
        std::cout <<"ТАКЖЕ во второй раз ты ввел это: " <<'\n';
        if(originalText.originalText2 == ""|| originalText.originalText2 == " "){
            originalText.originalText2 = "НИЧЕГО";
            std::cout <<originalText.originalText2 <<'\n';
        }
        else{
            std::cout <<originalText.originalText2 <<'\n';
        }

        std::cout <<"В третий раз: " <<'\n';
        if(originalText.originalText3 == ""|| originalText.originalText3 == " "){
            originalText.originalText3 = "НИЧЕГО";
            std::cout <<originalText.originalText3 <<'\n';
        }
        else{
            std::cout <<originalText.originalText3 <<'\n';
        }

        std::cout <<"В четвертый: " <<'\n';
        if(originalText.originalText4 == ""|| originalText.originalText4 == " "){
            originalText.originalText4 = "НИЧЕГО";
            std::cout <<originalText.originalText4 <<'\n';
        }
        else{
            std::cout <<originalText.originalText4 <<'\n';
        }

        std::cout <<"В пятый:" <<'\n';
        if(originalText.originalText5 == ""|| originalText.originalText5 == " "){
            originalText.originalText5 = "НИЧЕГО";
            std::cout <<originalText.originalText5 <<'\n';
        }
        else{
            std::cout <<originalText.originalText5 <<'\n';
        }
}

/*               ПЛАНЫ      ПЛАНЫ       ПЛАНЫ       ПЛАНЫ       ПЛАНЫ
    1. Сделать рандомный ответ на ввыденные, пользователем данные (реализовать рандомайдер с еще большым количеством if-ок)
    2. Увеличит количество ответок (соответственно) сделав еще больше if-ок на еще больше матов(пока-что английских)

    4. Создать void сравнения которая будет проверять то, что введет пользователь, а потом будет придавать значение true/false => нужно будет создать еще 1 void которая будет сравнивать true ли значение 🐶
    *или создать структуру которая будет хранить массивы и в итоге в ~if должен сравниваться массив в структуре 

    7. Вернуть нахождение русских букв на "нахождение каждой буквы отдельно", но на этот раз запихнуть ее в void
    8. Попробовать создать имитацию введения символов в реальном времени
    9. Оптимизировать код под структуру ~originalText (нужно хорошо постараться чтобы оптимизировать код под новые стандарты)
    10. Попробовать вместить сюда ~class путем того, что будет провераться наличие матов используя void в class и как-то нужно использовать те, что находятся в swear[] по новому, а что уже есть оставить
    11. ....
    *.Исправить лишние баги(конечно создав новые)

*/
int main(){
    std::string swear[] = {"a55", "anal", "anus", "ar5e", "arrse", "arse", "ass", "ass-fucker", "asses", "assfucker", "assfukka", "asshole", "assholes", "asswhole", "a_s_s",
    "b!tch", "b00bs", "b17ch", "b1tch", "ballbag", "balls", "ballsack", "bastard", "beastial", "beastiality", "bellend", "bestial", "bestiality", "bi+ch", "biatch", "bitch", "bitcher", "bitchers", "bitches", "bitchin", "bitching", "bloody", "blow job", "blowjob", "blowjobs", "boiolas", "bollock", "bollok", "boner", "boob", "boobs", "booobs", "boooobs", "booooobs", "booooooobs", "breasts", "buceta", "bugger", "bum", "bunny fucker", "butt", "butthole", "buttmuch", "buttplug",
    "c0ck", "c0cksucker", "carpet muncher", "cawk", "chink", "cipa", "cl1t", "clit", "clitoris", "clits", "cnut", "cock", "cock-sucker", "cockface", "cockhead", "cockmunch", "cockmuncher", "cocks", "cocksuck", "cocksucked", "cocksucker", "cocksucking", "cocksucks", "cocksuka", "cocksukka", "cok", "cokmuncher", "coksucka", "coon", "cox", "crap", "cum", "cummer", "cumming", "cums", "cumshot", "cunilingus", "cunillingus", "cunnilingus", "cunt", "cuntlick", "cuntlicker", "cuntlicking", "cunts", "cyalis", "cyberfuc", "cyberfuck", "cyberfucked", "cyberfucker", "cyberfuckers", "cyberfucking",
    "d1ck", "damn", "dick", "dickhead", "dildo", "dildos", "dink", "dinks", "dirsa", "dlck", "dog-fucker", "doggin", "dogging", "donkeyribber", "doosh", "duche", "dyke",
    "ejaculate", "ejaculated", "ejaculates", "ejaculating", "ejaculatings", "ejaculation", "ejakulate",
    "f u c k", "f u c k e r", "f4nny", "fag", "fagging", "faggitt", "faggot", "faggs", "fagot", "fagots", "fags", "fanny", "fannyflaps", "fannyfucker", "fanyy", "fatass", "fcuk", "fcuker", "fcuking", "feck", "fecker", "felching", "fellate", "fellatio", "fingerfuck", "fingerfucked", "fingerfucker", "fingerfuckers", "fingerfucking", "fingerfucks", "fistfuck", "fistfucked", "fistfucker", "fistfuckers", "fistfucking", "fistfuckings", "fistfucks", "flange", "fook", "fooker", "fuck", "fucka", "fucked", "fucker", "fuckers", "fuckhead", "fuckheads", "fuckin", "fucking", "fuckings", "fuckingshitmotherfucker", "fuckme", "fucks", "fuckwhit", "fuckwit", "fudge packer", "fudgepacker", "fuk", "fuker", "fukker", "fukkin", "fuks", "fukwhit", "fukwit", "fux", "fux0r", "f_u_c_k",
    "gangbang", "gangbanged", "gangbangs", "gaylord", "gaysex", "goatse", "God", "god-dam", "god-damned", "goddamn", "goddamned",
    "hardcoresex", "hell", "heshe", "hoar", "hoare", "hoer", "homo", "hore", "horniest", "horny", "hotsex",
    "jack-off", "jackoff", "jap", "jerk-off", "jism", "jiz", "jizm", "jizz",
    "kawk", "knob", "knobead", "knobed", "knobend", "knobhead", "knobjocky", "knobjokey", "kock", "kondum", "kondums", "kum", "kummer", "kumming", "kums", "kunilingus",
    "l3i+ch", "l3itch", "labia", "lust", "lusting",
    "m0f0", "m0fo", "m45terbate", "ma5terb8", "ma5terbate", "masochist", "master-bate", "masterb8", "masterbat*", "masterbat3", "masterbate", "masterbation", "masterbations", "masturbate", "mo-fo", "mof0", "mofo", "mothafuck", "mothafucka", "mothafuckas", "mothafuckaz", "mothafucked", "mothafucker", "mothafuckers", "mothafuckin", "mothafucking", "mothafuckings", "mothafucks", "mother fucker", "motherfuck", "motherfucked", "motherfucker", "motherfuckers", "motherfuckin", "motherfucking", "motherfuckings", "motherfuckka", "motherfucks", "muff", "mutha", "muthafecker", "muthafuckker", "muther", "mutherfucker",
    "n1gga", "n1gger", "nazi", "nigg3r", "nigg4h", "nigga", "niggah", "niggas", "niggaz", "nigger", "niggers", "nob", "nob jokey", "nobhead", "nobjocky", "nobjokey", "numbnuts", "nutsack", "orgasim", "orgasims", "orgasm", "orgasms",
    "p0rn", "pawn", "pecker", "penis", "penisfucker", "phonesex", "phuck", "phuk", "phuked", "phuking", "phukked", "phukking", "phuks", "phuq", "pigfucker", "pimpis", "piss", "pissed", "pisser", "pissers", "pisses", "pissflaps", "pissin", "pissing", "pissoff", "poop", "porn", "porno", "pornography", "pornos", "prick", "pricks", "pron", "pube", "pusse", "pussi", "pussies", "pussy", "pussys",
    "rectum", "retard", "rimjaw", "rimming", "s hit", "s.o.b.", "sadist", "schlong", "screwing", "scroat", "scrote", "scrotum", "semen", "sex", "sh!+", "sh!t", "sh1t", "shag", "shagger", "shaggin", "shagging", "shemale", "shi+", "shit", "shitdick", "shite", "shited", "shitey", "shitfuck", "shitfull", "shithead", "shiting", "shitings", "shits", "shitted", "shitter", "shitters", "shitting", "shittings", "shitty", "skank", "slut", "sluts", "smegma", "smut", "snatch", "son-of-a-bitch", "spac", "spunk", "s_h_i_t",
     "t1tt1e5", "t1tties", "teets", "teez", "testical", "testicle", "tit", "titfuck", "tits", "titt", "tittie5", "tittiefucker", "titties", "tittyfuck", "tittywank", "titwank", "tosser", "turd", "tw4t", "twat", "twathead", "twatty", "twunt", "twunter",
      "v14gra", "v1gra", "vagina", "viagra", "vulva", "w00se", "wang", "wank", "wanker", "wanky", "whoar", "whore", "willies", "willy",
       "xrated", "xxx"};
    bool foundRussian = false;
    std::string text;
    int *povtor = NULL;
    int dontMoreOne = 0;
    srand(time(NULL));
    Language(english);
    //// ЗДЕСЬ идет переделывание имени!!!
    originalText saveText;
    /// ЗДЕСЬ идет переделывание имени!!!////

////                                                                  


if(english == "E"|| english == "e"|| english =="Е"|| english == "е"){
    std::cout <<"Enter some text here: ";
    std::getline (std::cin, text);

    foundRus(foundRussian, text);
    saveOriginalText(text, saveText);

    text.erase(std::remove_if(text.begin(), text.end(), ::isspace), text.end());

    for (char &tolow : text) {
        tolow = std::tolower(tolow);
    }

    do{   
        if(*povtor == 1){
            std::cout <<"Enter some text, AGAIN(or qq to quit): ";
            std::getline(std::cin, text);
            if(text == "qq"){
                theEndEng(saveText);
            }
            else if(text == "qqq"){
                return 0;
            }
            else{
                saveOriginalText2(text, saveText);
                    text.erase(std::remove_if(text.begin(), text.end(), ::isspace), text.end());
                foundRus(foundRussian, text);
                for(char &tolow : text){
                    tolow = std::tolower(tolow);
                }
            }
        }                                                    
        else if(*povtor == 2){
            std::cout <<"Enter some text, AGAIN(or qq to quit): ";
            std::getline(std::cin, text);
            if(text == "qq"){
                theEndEng(saveText);
            }
            else if(text == "qqq"){
                return 0;
            }
            else{
                saveOriginalText3(text, saveText);
                text.erase(std::remove_if(text.begin(), text.end(), ::isspace), text.end());
                foundRus(foundRussian, text);
                for(char &tolow : text){
                    tolow = std::tolower(tolow);
                }
            }
        }
        else if(*povtor == 3){
            std::cout <<"Enter some text, AGAIN: ";
            std::getline(std::cin, text);
            if(text == "qq"){
                theEndEng(saveText);
            }
            else if(text == "qqq"){
                return 0;
            }
            else{
                saveOriginalText4(text, saveText);
                text.erase(std::remove_if(text.begin(), text.end(), ::isspace), text.end());
                foundRus(foundRussian, text);
                for(char &tolow : text){
                    tolow = std::tolower(tolow);
                }
            }
        }
        else if(*povtor == 4){
            std::cout <<"Enter some text, AGAIN: ";
            std::getline(std::cin, text);
            if(text == "qq"){
                theEndEng(saveText);
            }
            else if(text == "qqq"){
                return 0;
            }
            else{
                saveOriginalText5(text, saveText);
                text.erase(std::remove_if(text.begin(), text.end(), ::isspace), text.end());
                foundRus(foundRussian, text);
                for(char &tolow : text){
                    tolow = std::tolower(tolow);
                }
            }
        }

    if(text == ""){
        std::cout <<"Hey you! Enter something or i has been fuck you and your mother!!!1" <<'\n';
    }

    else if (text == "dick" || text =="youaredick" || text == "i`mdick"||text =="dic"||text =="dik"|| text =="bick"||text =="fuckername"){
        std::cout <<"Don`t use your real name ;)" <<'\n';
    }

    else if(text == "cum" ||text == "cumming" ||text =="cum!"|| text =="cumming!"){
            std::cout <<"I know that it be in your face )))" <<'\n';
    }

    else if (text =="fuckyou"||text =="fuckyou!"||text == "fucyou"|| text =="fukyou"||text =="fackyou"||text =="fackyou!"||text == "facyou"||text =="fakyou"){
        std::cout <<"Fuck you too ;)"<<'\n';
    }

    else if(text == "4r5e"||text == "5h1t"|| text == "5hit"){
        std::cout <<"You really think that me don`t know it?! HAHA, i know all!" <<'\n';
    }

    else if(text =="boolshit"||text == "boolsit!" || text =="doolshit"|| text == "boolchit"||text =="boolcit"){
        std::cout <<"Hey! Dont bool shit here!" <<'\n';
    }    

    else if (text =="higger"|| text =="nigger"|| text =="niger" || text == "higer"|| text == "gey"||text == "gay" || text =="slate"){
        int randNum = rand() % 3 + 1;
        switch (randNum){
        case 1 :
            std::cout <<"Don`t use the national of your fathers, please!" <<'\n'; 
        break;

        case 2 : 
            std::cout <<"Don`t use names of your fathers" <<'\n';
        break;

       case 3 : 
            std::cout <<"Don`t use names of your stepfathers" <<'\n';
        break;
       }
    }
    else if(text == "ass"|| text == "asshole"|| text =="yourasshole"||text == "youareasshole"|| text == "youareass"||text == "youasshole"|| text == "ashole"||text =="youareashole"||text =="youas"||text =="youareas"||text =="youareass"){
        std::cout <<"Don`t use the ass(I cum in your ass also),please!"<<'\n';
    }  
    else if(text == "iwantsecret" || text =="iwannasecret"){
        std::cout <<"HAHAHA! I don`t give you secret! Fuck off!" <<'\n';
    }
    else if(text == "i`mgood"|| text == "iamgood" || text == "megood"|| text == "good" || text == "cool"|| text == "imgood"){
        if(dontMoreOne < 1){
            std::cout <<"Nice! and don`t text this anymore. I`m really!!!\n";
            dontMoreOne += 1;
        }
        else{
            std::cout <<"Hey!! I has say: Do not enter it anymore!!" <<'\n';
            for(int z = 0; z < 50; z++){
                std::cout <<"Fuck you!!" <<std::flush <<'\n';
            std::this_thread::sleep_for(std::chrono::milliseconds(500));            
            }
            return 0;
            break;
        }
    }

// При нахождении русских букв
    else if (foundRussian){
        for(int lali = 0; lali < 50; lali ++){
            std::cout <<"Don`t use russian language in this style" <<std::flush <<'\n';
            std::this_thread::sleep_for(std::chrono::milliseconds(80));
        }
        return 0;
    }

povtor ++;
}while(*povtor < 5);
    delete povtor;

    theEndEng(saveText);
}
////                                                                    
else if(english == "R"|| english == "r"|| english == "Р"|| english == "р"){
    std::cout <<"Введите здесь любой текст: ";
    std::getline (std::cin, text);

    saveOriginalText(text, saveText);
    text.erase(std::remove_if(text.begin(), text.end(), ::isspace), text.end());
    for (char &c : text) {
        c = std::tolower(c);
    }

do{
    if(*povtor == 1){
        std::cout <<"Введите что-то ЕЩЕ РАЗ(или 'йй' чтобы выйти): ";
        std::getline(std::cin, text);
        saveOriginalText2(text, saveText);
    }
    else if(*povtor == 2){
        std::cout <<"Введите что-то ЕЩЕ РАЗ: ";
        std::getline(std::cin, text);
        saveOriginalText3(text, saveText);
    }
    else if(*povtor == 3){
        std::cout <<"Введите что-то ЕЩЕ РАЗ: ";
        std::getline(std::cin, text);
        saveOriginalText4(text, saveText);
    }        
    else if(*povtor == 4){
        std::cout <<"Введите что-то ЕЩЕ РАЗ: ";
        std::getline(std::cin, text);
        saveOriginalText5(text, saveText);
    }

    if(text == ""){
        if( dontMoreOne > 1){
            std::cout <<"Я же говорил НАПИШИ ХОТЬ ЧТО-ТО!! Но нет! нужно же меня разозлить! Знаешь, а пошел ты!";
            break;
            return 0;
        }
        std::cout <<"Хей ты!! Введи что-то иначе я не разешу тебе ничего писать!";

    }

    else if(text == "хуй"){
        std::cout <<"Извините, но вы не пишите письмо Деду Морозу. Не стоит загадывать себе член" <<'\n';
    }

povtor ++;
}while(*povtor < 5);
delete povtor;

theEndRus(saveText);
}

else if(english == "#dick" || english == "#intdick"|| english == "intDick"){
    for(int dick = 0; dick < 10; dick++){
        std::cout <<"ර ̶͞ ̶͞ ̶͞ධ" <<'\n';
    }
    return 0;
}
else if(english == "#cat" || english == "#getcat"|| english == "#getCat"){
    std::cout <<"____XXXXXX__________________________________XXX__XXХ" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XX_XXXXXXX____________________________XXXXX_XX_XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XX___XXXXXXX________________________XXXXX_X____XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XX_____XXXXXXX_____________________XXXXXXX_____XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__XXX__XX___XXXXXXX_________________XXXXXXX___XX__XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__XXX_____X___XXXXXXX_____XX______XXXXXXXX__X_____XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__XXXXX_____X__XXXXXXXXXXXXXXXXXXXXXXXXX__X___XXX_XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XX___XX___XX_XXXXXXXXXXXXXXXXXXXXXXXXX__XX_____XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XX_X____XX_XXXXXXXXXXXX___XXXXXXXXXXXXX___XXXX_XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XX____XX_XXXXXXXXXXXX_`````_XXXXXXXXXXXXX_____XXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XXXXXX__XXX_```_XXXX_```````_XXX_``````_XXXX__XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"____XX____XX```````_`X``````````_X``````````XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"____XX___X_```_$$$$$__X`````````X`_$$$$$$````XXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_____XX_XX```$$$$$$$$$_X```````_`_$$$$$$$$````XXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______XXX_``_$$$$$$$$$_X```````X_$$$$$$$$$_```XXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______XXX_``_$$$$$$$$$__```````X_$$$$$$$$$_``_XXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______XXXX```$$$$$$$$$__```````X`_$$$$$$$$```_XXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______XXXXX___$$$$$$$`__`___```_X``_$$$$__``XXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______XXXXXXXXXX_$$$$__`__XXX___``_XXX_XXXXXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______XXXXXX__```````___XXXXXXX__``````````_XXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______XXXX_`````````XXXXXXXXXXXXXXX`````````__XXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"______X___```````````XXXXXXXXXXXXX_``````````____X" <<'\n'; 
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_XXXXXXXXXXXXXX_````_`X______XXXX_```````_XXXXXXXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_______X__XXXX__``````_X_______X_```````________" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__XX____X_____XX_``````________X````````___```_X__XXX_____XXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_______XXXX_````````````X_____X`````````````_XXX________XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___XX______X_````````````X___X_`````````````X______X__XXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_____________X_``````````_X_X_````````````XX________XXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_____________XXXX_````````_X__```````__XX___________XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_____________XX__`_XXX___``_``___XXXX_XXX__________XXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"____________XXX__````````````````````_XXXX________XXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"____________XXX_``````````````````````XXXX_______XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"____________XXX``````````````````````__XXX______XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___________XX__```````````````````````__XX_____XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__________XXXX_`````````````````````````_XX__XXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__________XXXX_`````````````````````````_XXXXXXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________XXXXX``````````````````````````_XXXXXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________XX__X`````````````````````````_XXXXXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________XXX___`````````X````X``````````X_XXXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________XXXX_X_```````_X````_``````````X_XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________XXXX_X`````````X`````_`````````XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________XXXX___````````X`````X````````__XXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________XXXXX_X````````X`````X````````__XXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__________XXX__X_```````X`````X````````X_XXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___________XXXXX_```````X`````X````````X_XXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"___________X_```X```````X`````X````````X___X" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__________X____`X```````__````X```````__```_X" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"__________XX__X_X```````_XXXX_X```````_`___XX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"________XXXXXXXX``_`````_XXXXXX_```````XXXXXXX" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_______________X__`X``_XXXXXXXX_``````___X" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"________________XX_X__XXXXXXXXXXX```X__X" <<'\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<"_________________XXXXXXXXXXXXXXXXXXXXXX" <<'\n';

    return 0;
}

else{
    std::string pleaseRestard = "Please restart";
    for (char restard : pleaseRestard) {
        std::cout << restard <<std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout <<'\n';
}                                              
    return 0;
}
