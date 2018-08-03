#include <iostream>
#include "include/Maze.h"

using namespace std;

int main()
{

    int m_dim;
    cout<<"Enter matrix dimensions"<<endl;
    cin>>m_dim;
    Maze maze(m_dim);
    //maze.setMatDim(m_dim);



    return 0;
}
