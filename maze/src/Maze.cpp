#include "../include/Maze.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Maze::Maze(int mat_dim):mat_dim(mat_dim),exit_point(0)
{

    mat_maze.resize(mat_dim,vector<int>(mat_dim,0));

    int ind1 = rand()%mat_dim;
    int ind2 = rand()%edge+1;

    switch(ind2)
    {
        case 1:
            entry_point = {0,ind1};
            cout<<"Starting point "<<"["<<0<<","<<ind1<<"]"<<endl;
            break;
        case 2:
            entry_point = {ind1,mat_dim-1};
            cout<<"Starting point "<<"["<<ind1<<","<<mat_dim-1<<"]"<<endl;
            break;
        case 3:
            entry_point = {mat_dim-1,ind1};
            cout<<"Starting point "<<"["<<mat_dim-1<<","<<ind1<<"]"<<endl;
            break;
        case 4:
            entry_point = {ind1,0};
            cout<<"Starting point "<<"["<<ind1<<","<<0<<"]"<<endl;
            break;
    }


    while(entry_point != exit_point)
    {
        int ind1 = rand()%mat_dim;
        int ind2 = rand()%edge+1;

        switch(ind2)
        {
        case 1:
            exit_point = {0,ind1};
            cout<<"Exit point "<<"["<<0<<","<<ind1<<"]"<<endl;
            break;
        case 2:
            exit_point = {ind1,mat_dim-1};
            cout<<"Exit point "<<"["<<ind1<<","<<mat_dim-1<<"]"<<endl;
            break;
        case 3:
            exit_point = {mat_dim-1,ind1};
            cout<<"Exit point "<<"["<<mat_dim-1<<","<<ind1<<"]"<<endl;
            break;
        case 4:
            exit_point = {ind1,0};
            cout<<"Exit point "<<"["<<ind1<<","<<0<<"]"<<endl;
            break;
        }

        if(entry_point!= exit_point)
        {
            break;
        }
    }

}

Maze::~Maze()
{

}



//void Maze::setMatDim(int mat_dim)
//{
//    this->mat_dim = mat_dim;
//}



