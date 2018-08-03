#ifndef MAZE_H
#define MAZE_H
#include <vector>

using namespace std;

class Maze
{
    public:
        int mat_dim;
        vector< vector<int> > mat_maze;
        vector<int> entry_point;
        vector<int> exit_point;


    public:
        Maze(int mat_dim);
        virtual ~Maze();

        //void setMatDim(int mat_dim);



    protected:

    private:
        const int edge = 4;
};

#endif // MAZE_H
