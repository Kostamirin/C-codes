using namespace std;
class Movement{
public:
    std::string moveLeft(std::string &start,std::string &target, int &position){
        if (start[position-1] != 'L')
        {
            swap(start[position], start[position-1]);
            position -= 2;
        }
        return start;
    };
    std::string moveRight(std::string &start,std::string &target, int &position){
        swap(start[position], start[position+1]);
        if (start[position-1] == 'R'){ position -= 2;}
        return start;
    }
};
